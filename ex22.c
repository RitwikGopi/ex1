/*************************************************************************
  			PROGRAM TO WRAP TEXT
**************************************************************************/

#include <stdio.h>

int i=10;
char s[11],s2[11];
int temp=10;

int line(){
	memset(s,' ', sizeof s);
	int c,j=0;
	while(j<temp-i){
		s[j]=s2[j+i+1];
		j++;
	}
	i=j;
	while((c=getchar())!='\n' && c!='\0' && i<10 && c!=EOF)
		s[i++]=c;
	temp=i;
	s[i++]=c;
	return(c);
}

void adjustline(){
	int c;
	while(i>0){
		if(s[--i]==' ' || s[i]=='\t' || s[i]=='\n' || s[i]=='\0' ||s[i]==EOF){
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
	s[10]='-';
	printf("%s\n",s);
	i=9;
}

main(){
	int ch;
	while(ch!=EOF){
		ch=line();
		adjustline();
		}
}
