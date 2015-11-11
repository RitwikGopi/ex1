#include<stdio.h>
#include<strings.h>

int atoi(char *s){
	int n = 0, sign = 1;
	if( *s == '-' || *s == '+')
		if(*s++ == '-')
			sign = -1;
	while(*s)
		n = n * 10 + (*s++ - '0');
	return n*sign;
}

void reverse(char *t, char *s){
	char temp;
	if(t < s){
		temp = *t;
		*t = *s;
		*s = temp;
		reverse(t+1,s-1);
	}
}
int itoa(int n, char *s){
	int sign;
	char *t = s;
	if((sign = n) < 0)
		n = -n;
	sign /= n;
	while(n > 0){
		*s++ = n%10 + '0';
		n /= 10;
	}
	if(sign < 0)
		*s++ = '-';
	*s = '\0';
	reverse(t,s-1);
}

int strindex(char *s, char *t){
	char *temp = s;
	while(*s)
		if(*s++ == *t)
			return s-temp;
	return -1;
}

main(){
	printf("%d\n", atoi("2345"));
	char s[10];
	itoa(-1234, s);
	printf("%s\n", s);
	printf("%d\n",strindex("Hello","L"));
}
