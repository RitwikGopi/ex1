/******************************************************************
	celcius to fahrenheit program with heading
******************************************************************/

#include <stdio.h>

main(){
	float c,f;
	printf("\nCELSIUS\t\tFAHRENHEIT\n");
	for(c=0;c<=300;c+=20){
		f=(c*9/5)-32;
		printf("%7.0f\t\t%7.3f\n",c,f);
	}
}
