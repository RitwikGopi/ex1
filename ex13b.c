/**************************************************************************
  	PROGRAM TO PRINT HISTOGRAM OF LENGTH OF WORDS VERTICALY 
 **************************************************************************/

#include <stdio.h>

main(){
	int c,s=0,l[1000],i=0,max=0;
	while((c=getchar())!=EOF){
		
		if((c>='a' && c<='z')||(c>='A' && c<='Z')){
			if(++l[i]>max)
				max=l[i];
			s=0;
		}
		else if(s==0){
			l[i++];
			s=1;
		}
	}
	int k;
	for(max;max>0;max--){
		for(k=0;k<i;k++){
			if(l[k]<max)
				putchar(' ');
			else
				putchar('|');
		}
		putchar('\n');
	}
}
