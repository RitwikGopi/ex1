/**************************************************************************
  	PROGRAM TO PRINT WORDS OF A PARA IN SEPERATE LNES
 **************************************************************************/

#include <stdio.h>

main(){
	int c,s=0,l[1000],i=0;
	while((c=getchar())!=EOF){
		
		if((c>='a' && c<='z')||(c>='A' && c<='Z')){
			l[i]++;
			s=0;
		}
		else if(s==0){
			l[i++];
			s=1;
		}
	}
	int j,k;
	for(j=0;j<i;j++){
		for(k=0;k<l[j];k++)
			putchar('-');
		putchar('\n');
	}
}
