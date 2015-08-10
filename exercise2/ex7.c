#include <stdio.h>

unsigned getbits(unsigned x,int p, int n){
	return(x^((~(~0<<n))<<(p+1-n)));
}

main(){
	printf("%x\n",getbits(0xFF,5,3));
}
