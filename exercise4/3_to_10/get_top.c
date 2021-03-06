#include <stdio.h>
#include <ctype.h>

#define NUMBER '0'
#define MATH '1'
int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t');
	s[1] = '\0';
	i = 0;
	if (!isdigit(c) && c != '.' && c != '-'){
		if( c == '\n')
			return c;
		while(islower(c = getch()))
			s[++i] = c;
		//printf("%c comm\n",c);
		if(c != EOF)
			ungetch(c);
		if( i > 0)
			return MATH;
		else
			return s[0];
	}
	/* not a number */
	if (c == '-'){
		if(isdigit(c=getch()) || c == '.')
			s[++i]=c;
		else{
			
			if (c != EOF)
				ungetch(c);
			return '-';
		}
	}
		
	if (isdigit(c))
		/* collect integer part */
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		/* collect fraction part */
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}
