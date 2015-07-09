/************************************************************************
  	Program to reverse characters of strings by each line
************************************************************************/

#include <stdio.h>

int linecheck(){
	int c;
	char s[1000];
	int i=0,k=0;
	while((c=getchar())!='\n' && i<1000 && c!=EOF)
		s[i++]=c;
	s[i--]='\0';
	while(i>k){
		s[i]=s[i]+s[k];
		s[k]=s[i]-s[k];
		s[i]=s[i]-s[k];
		i--;k++;
	}
	printf("%s\n",s);
	return(c);
}

main(){
	int ch;
	while(ch!=EOF)
		ch=linecheck();
}

