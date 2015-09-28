#include <math.h>
double pop();
void do_math(char s[]){
	double op;
	if(!strcmp("sin",s))
		push(sin(pop()));
	else if(!strcmp("exp",s))
		push(exp(pop()));
	else if(!strcmp("pow",s)){
		op = pop();
		double r=(pow(pop(),op));
		push(r);
	}
	else
		printf("Invalid command\n");
}

