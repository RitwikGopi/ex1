#include <stdio.h>

unsigned getbits(unsigned x,int p, int n, unsigned y){
	return((x&((~0<<p+1)|~(~0<<p+1-n)))|((y&~(~0<<n))<<p+1-n));
}

main(){
	printf("%x",getbits(0xFF,5,3,0x02));
}
