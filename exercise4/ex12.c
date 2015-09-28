#include <stdio.h>
/* printd: print n in decimal */

static int i = 0;

void printd(int n, char s[])
{
	if (n < 0) {
		s[i++] = '-';
		n = -n;
	}
	if (n / 10)
		printd(n / 10,s);
	s[i++] = (n % 10 + '0');
}
