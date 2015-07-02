/************************************************************************
  	Program to print lines with length more than 80
************************************************************************/

#include <stdio.h>

int linecheck(){
	int c;
	char s[1000];
	int i=0;
	while((c=getchar())!='\n' && i<1000 && c!=EOF)
		s[i++]=c;
	if(i>=80){
		s[i++]='\0';
		printf("%s\n",s);
	}
	return(c);
}

main(){
	int ch;
	while(ch!=EOF)
		ch=linecheck();
}

