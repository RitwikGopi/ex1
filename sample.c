/*********************************************************************
  			faran heat to celcius 
 *********************************************************************/

#include <stdio.h>

main(){
	float f,c;
	printf("\nFAHRENHEIT//\tCELSIUS\n");// Prints farren heat
	for(f=0;f<=300;f+=20){
		c=5*(f-32)/9;
		printf("%10.0f\t%4.3f\n",f,c); // Prints something
	}/*En of program*/
}
