/**************************************************************************
  	PROGRAM TO PRINT HISTOGRAM OF LENGTH OF WORDS VERTICALY 
 **************************************************************************/

#include <stdio.h>

main(){
	int c,s=0,l[1000],i=0,max=0;
	while((c=getchar())!=EOF){
		
		if((c>='a' && c<='z'))
			i=++l[c-'a'];
		else if(c>='A' && c<='Z')
			i=++l[c-'A'];
		if(i>max)
			max=i;
		}

	int k;
	for(max;max>=0;max--){
		for(k=0;k<='z'-'a';k++){
			if(l[k]==0)
				continue;
			else if(l[k]<max)
				putchar(' ');
			else
				putchar(k+'a');
			putchar(' ');
		}
		putchar('\n');
	}
}
