#include<stdio.h>

void strncp(char *s, char *t, int n)
{
	while ((*s++ = *t++) && (--n != 0));
	if(*s-1)
		*s = '\0';
}

int strn_cmp(char *s, char *t, int n)
{
	for ( ; *s == *t ; s++, t++, n--)
		if ((*s == '\0') || (n == 1))
			return 0;
	return *s - *t;
}



main(){
	char s[5];
	strncp(s, "1234567890", sizeof(s)-2);
	printf("%s\n",s);
	printf("%d\n",strn_cmp(s, "1234467890", sizeof(s)-2));

}
