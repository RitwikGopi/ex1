#include <stdio.h>
#include <math.h>
#include <stdlib.h> /* for atof() */
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
#define MATH '1'
int getop(char []);
void push(double),print_top(void),clear_stack(void),print_stack(void);
void do_math(char []);
double pop(void);

/* reverse Polish calculator */
main()
{
	int type;
	int op_n, op_d;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		//printf("%c command\n",type);
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case MATH:
				do_math(s);
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op_d = pop();
				op_n = pop();
				if (op_d != 0)
					push(op_n % op_d);
				else
					printf("error: zero divisor\n");
				break;
			case '?':
				/*type = getop(s);
				if(type == EOF)
					exit(0);
				else if(type != '\n')
					ungetch(type);*/
				print_top();
				break;
			case 'c':
				clear_stack();
				break;
			case 'p':
				print_stack();
				break;
			case 'd':
				op2 = pop();
				push(op2);
				push(op2);
				break;
			case 's':
				op_d = pop();
				op_n = pop();
				push(op_d);
				push(op_n);
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}

