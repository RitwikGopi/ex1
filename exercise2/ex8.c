#include <stdio.h>

unsigned rightrot(unsigned x,int n){
	int i,j;
	for(i=0,j=1;j<=x;j*=2,i++);
	return((x>>n)|((x&~(~0<<n))<<(i-n)));
}

main(){
	printf("%X\n",rightrot(0xD6,3));
}

