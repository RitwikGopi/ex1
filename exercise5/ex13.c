#include<stdio.h>

main(int argc, char *argv[]){
	int n = 10;
	int i = 0, c = 1;
	if( *(*(argv+c)+ i++) == '-'){
		n = 0;
		while(*(*(argv+c)+ i) != NULL)
			n = n*10 + *(*(argv+c)+ i++) - '0';
		c++;
	}
	//printf("%c%c",*(*(argv+c)+0),*(*(argv+c)+1));
	//printf("%d\n",n);
	FILE *f = fopen(*(argv+c),"r");
	if( f != NULL){
		char line[100];
		for(i = 0; i < n && fgets(line, sizeof(line), f) != NULL;printf("%s",line),i++);
	}
}
