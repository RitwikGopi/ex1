#include"headers.h"
#define MAXWORD 100
struct tnode *addtree(struct tnode *, char *, int, int *);
void treeprint(struct tnode *);
int getword(char *, int);
/* word frequency count */
main()
{
	struct tnode *root;
	char word[MAXWORD];
	int found = 0;
	root = NULL;
	int num = 6;
	while (getword(word, MAXWORD) != EOF){
		if (isalpha(word[0]) && strlen(word) >= num)
			root = addtree(root, word, num, &found);
		//treeprint(root);
		//putchar('\n');
		found = 0;
	}
	treeprint(root);
	return 0;
}
