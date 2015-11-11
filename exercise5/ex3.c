#include<stdio.h>

void strca_t(char *s, char *t){
	while(*s)
		s++;
	while(*s++ = *t++);
}

main(){
	char s[50] = "hello ";
	char t[50] = "world!";
	strca_t(s,t);
	printf("%s\n",s);
	printf("%s\n",t);
}
