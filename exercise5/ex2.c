#include <stdio.h>
#include <ctype.h>
int getch(void);
void ungetch(int);
/* getint: get next integer from input into *pn */
int getint(float *pn)
{
	int c, sign;
	float p;
	while (isspace(c = getch()))
		/* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* it is not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-'){
		c = getch();
	}
	for (*pn = 0.0; isdigit(c); c = getch())
		*pn = 10.0 * *pn + (c - '0');
	if(c == '.')
		c = getch();
	for (p = 1.0; isdigit(c); c = getch(),p *= 10.0)
		*pn = 10.0 * *pn + (c - '0');
	*pn /= p;
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}
