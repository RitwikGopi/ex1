/*************************************************************************
  			PROGRAM TO WRAP TEXT
**************************************************************************/

#include <stdio.h>

int i=10;
char s[11];
int temp=10;

int line(){
	memset(s,' ', sizeof s);
	int c;
	i=0;
	while((c=getchar())!='\n' && c!='\0' && i<10 && c!=EOF)
		s[i++]=c;
	s[i++]=c;
	i=temp;
	return(c);
}

void adjustline(){
	int c;
	//s[11]='\0';
	while(i>0){
		if(s[--i]==' ' || s[i]=='\t' || s[i]=='\n' || s[i]=='\0' ||s[i]==EOF){
			s[i]='\n';
			printf("%s",s);
			temp=i;
			return;
		}
	}
	char ch[10];
	memset(ch,'\0', sizeof ch);
	while(i<=(10-temp)){
		ch[i]=s[temp+i];
		s[temp+i]='\0';
		i++;
	}
	
	temp=temp-1;
	printf("%s-\n%s",s,ch);
}

main(){
	int ch;
	while(ch!=EOF){
		ch=line();
		adjustline();
		}
}
