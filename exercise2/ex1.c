#include <stdio.h>
#include <limits.h>

main(){
	printf("Char Max\t%d\n", CHAR_MAX);
	printf("Char Min\t%d\n", CHAR_MIN);
	printf("int min \t%d\n", INT_MIN);
    	printf("int max \t%d\n", INT_MAX);
     	printf("long min\t%ld\n", LONG_MIN);       
      	printf("long max\t%ld\n", LONG_MAX);       
       	printf("short min\t%d\n", SHRT_MIN);
        printf("short max\t%d\n", SHRT_MAX);
	printf("unsigned char\t%u\n", UCHAR_MAX);  
	printf("unsigned long\t%lu\n", ULONG_MAX); 
	printf("unsigned int\t%u\n", UINT_MAX);    
	printf("unsigned short\t%u\n", USHRT_MAX);
}
