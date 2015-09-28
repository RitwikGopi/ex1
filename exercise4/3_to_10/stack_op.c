#include <stdio.h>
#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}
void print_top(void){
	if( sp <= 0)
		printf("stack is empty\n");
	else
		printf("Top value in stack is %f\n",val[sp-1]);
}
void clear_stack(void){
	sp = 0;
}
void print_stack(void){
	int i = 0;
	for( i = 0; i < sp; i++)
		printf("%f ",val[i]);
	printf("\n");
}
