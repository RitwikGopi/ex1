#include<stdio.h>
int stren_d(char *s, char *t){
	char *start = t;
	while(*s){
		while(*s++==*t++){
			if(!*s)
				return 1;
		}
		t = start;
		if(*s-1 == *t)
			t++;
	}
	return 0;
}

main(){
	char s[50] = "Hello world!";
	char t[50] = "world!";
	printf("%d\n",stren_d(s,t));
	printf("%d\n",stren_d(t,s));
}
	

