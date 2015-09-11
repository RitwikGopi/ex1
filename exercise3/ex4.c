
void reverse(char sr[]){
	int j,i;
	for(j = 0; sr[j] != '\0'; j++);
	for(--j,i=0; j > i; j--,i++){
		sr[j]=sr[j]+sr[i];
		sr[i]=sr[j]-sr[i];
		sr[j]=sr[j]-sr[i];
	}
}

void itoa(int n, char s[])
{
	int i, sign;
	sign = n;
	/* make n positive */
	i = 0;
	do {
		/* generate digits in reverse order */
		s[i++] = abs(n % 10) + '0'; /* get next digit */
	} while ((n /= 10) != 0);
	/* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

