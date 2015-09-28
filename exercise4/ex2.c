#include <ctype.h>
/* atof: convert string s to double */


double atof(char s[])
{
	double val, power,e;
	int i, sign,esign=0;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	if (s[i] == 'e' || s[i] == 'E'){
		i++;
		if ( s[i] == '-')
			esign = 1;
		if ( s[i] == '+' || s[i] == '-')
			i++;
	}
	for ( e = 0 ; s[i] != '\0'; i++)
		e = 10 * e + (s[i] - '0');
	for ( i = 0 ; i < e ; i++)
		power = (esign == 1?power*10:power/10);
	double result = sign * val / power;
	return result;
	//return (sign*val)/power*e;
}
