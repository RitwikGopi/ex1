/************************************************************************
  	Program to remove trailing blanks and blank lines
************************************************************************/

#include <stdio.h>

int linecheck(){
	int c;
	char s[1000];
	int i=0;
	while((c=getchar())!='\n' && i<1000 && c!=EOF)
		s[i++]=c;
	while((s[--i]=='\t' || s[i]==' ') && i>=0);
	s[++i]='\0';
	if(i>0)
		printf("%s\n",s);
	return(c);
}

main(){
	int ch;
	while(ch!=EOF)
		ch=linecheck();
}

