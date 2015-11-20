#include<stdlib.h>
#include"headers.h"
struct tnode {
	   char *word;
	   int count;
	   int match;
	   struct tnode *left;
	   struct tnode *right;
	   };
/* points to the text */
/* number of occurrences */
/* left child */
/* right child */
struct tnode *talloc(void);
char *strd_up(char *);
int compare(char *, struct tnode *, int, int *);
/* addtree: add a node with w, at or below p */
struct tnode *addtree(struct tnode *p, char *w, int num, int *found)
{
	int cond;
	if (p == NULL) {
		/* a new word has arrived */
		p = talloc();
		/* make a new node */
		p->word = strd_up(w);
		p->match = *found;
		p->count = 1;
		p->left = p->right = NULL;
	} 
	else if ((cond = compare(w, p, num, found)) < 0)
	{
		p->left = addtree(p->left, w, num, found);
	}
	else if (cond > 0){
		p->right = addtree(p->right, w, num, found);
	}
	return p;
}

int compare(char *s, struct tnode *p, int num, int *found)
{
	int i;
	char *t = p->word;
	for(i = 0; *s == *t; s++, t++, i++)
		if(*s == NULL)
			return 0;
	//printf("%s-%s,%d\n", s, t, i);
	if(i >= num){
		//printf("TADA\n");
		*found = 1;
		p->match = 1;
	}
	return *s - *t;
}

void treeprint(struct tnode *p)
{
	if (p != NULL) {
		treeprint(p->left);
		if(p->match)
			printf("%s\n", p->word);
		treeprint(p->right);
	}
}
struct tnode *talloc(void)
{
	        return (struct tnode *) malloc(sizeof(struct tnode));
}

char *strd_up(char *s)
{
	        char *p;
		        /* make a duplicate of s */
		        p = (char *) malloc(strlen(s)+1); /* +1 for '\0' */
			        if (p != NULL)
					                strcpy(p, s);
				        return p;
}

