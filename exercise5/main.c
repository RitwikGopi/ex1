#include <stdio.h>
#define SIZE 5
main(){
	int n, getint(float *);
	float array[SIZE];
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		printf("%g\n",array[n]);
}
