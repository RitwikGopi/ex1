/************************************************************************
  	program to replace one or more blanks by single blank
************************************************************************/

#include <stdio.h>

main(){
	int c,s;
	s=0;
	while((c=getchar())!=EOF){
		if(s==0 || c!=' ')
			putchar(c);
		if(c==' ')
			s=1;
		else
			s=0;

	}
	
}
