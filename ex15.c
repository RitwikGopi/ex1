#include <stdio.h>

main(){
	float c2f(float);
	float i;
	for(i=0;i<300;i+=20){
		printf("%3.0f\t%4.2f\n",i,c2f(i));
	}
}

float c2f(float c){
	return((5*c/9)+32);
}
