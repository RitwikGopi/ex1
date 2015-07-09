/************************************************************************
  		PROGRAM TO COUNT BLANKS,TABS AND NEW LINES
************************************************************************/

#include <stdio.h>

main(){
	int c,nb,nt,nl;
	nb=nt=nl=0;
	while((c=getchar())!=EOF){
		putchar(c);
		switch(c){
			case '\n' : nl++;
				    break;
			case '\t' : nt++;
				    break;
			case ' '  : nb++;
				    break;
			default	  : break;
		}
	}
	printf("Number of LINES=%d TABS=%d BLANKS=%d\n",nl,nt,nb);
}
