/******************************************************************
  	faran heat to celcius program with heading
******************************************************************/

#include <stdio.h>

main(){
	float f,c;
	printf("\nFAHRENHEIT\tCELSIUS\n");
	for(f=0;f<=300;f+=20){
		c=5*(f-32)/9;
		printf("%10.0f\t%4.3f\n",f,c);
	}
}
