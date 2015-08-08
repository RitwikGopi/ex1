#include <stdio.h>
#define lim 100

main(){
	char s[lim],c;
	int i=0;
	while(i < lim-1){
		if((c=getchar())!='\n'){
			if(c!=EOF){
				s[i++]=0;
			}
		}
	}
}
