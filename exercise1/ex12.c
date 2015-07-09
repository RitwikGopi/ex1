/**************************************************************************
  	PROGRAM TO PRINT WORDS OF A PARA IN SEPERATE LNES
 **************************************************************************/

#include <stdio.h>

main(){
	int c,s=0;
	while((c=getchar())!=EOF){
		
		if((c>='a' && c<='z')||(c>='A' && c<='Z')){
			putchar(c);
			s=0;
		}
		else if(s==0){
			putchar('\n');
			s=1;
		}
	}
	

}
