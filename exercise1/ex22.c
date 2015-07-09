/*************************************************************************
  			PROGRAM TO WRAP TEXT
**************************************************************************/

#include <stdio.h>
#define linelength 50

int i=linelength;
char s[linelength+1],s2[linelength+1];
int temp=linelength;

int line(){
	memset(s,' ', sizeof s);
	int c,j=0;
	while(j<temp-i){
		s[j]=s2[j+i+1];
		j++;
	}
	i=j;
	while((c=getchar())!='\n' && c!='\0' && i<linelength && c!=EOF)
		s[i++]=c;
	temp=i;
	s[i++]=c;
	return(c);
}

void adjustline(){
	int c;
	while(i>0){
		if(s[--i]==' ' || s[i]=='\t' || s[i]=='\n' || s[i]=='\0' ||s[i]==EOF){
			if(s[i]==EOF)
				return;
			if(s[i]=='\n')
				s[i]=' ';
			printf("%s\n",s);
			return;
		}
		else{
			s2[i]=s[i];
			s[i]=' ';
		}
	}
	
	strcpy(s,s2);
	s[linelength]='-';
	printf("%s\n",s);
	i=linelength-1;
}

main(){
	int ch;
	while(ch!=EOF){
		ch=line();
		adjustline();
		}
}
