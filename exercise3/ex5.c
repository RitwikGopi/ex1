
void reverse(char sr[]){
	int j,i;
	for(j = 0; sr[j] != '\0'; j++);
	for(--j,i=0; j > i; j--,i++){
		sr[j]=sr[j]+sr[i];
		sr[i]=sr[j]-sr[i];
		sr[j]=sr[j]-sr[i];
	}
}

void tcb(char s[]){
	int i = 0;
	for(i = 0; s[i] != '\0'; i++)
		s[i] = (s[i]=='0'?'1':'0');
	int d = '1';
	for(i = 0;d != '0';i++){
		d = s[i];
		s[i] = (s[i]=='0'?'1':'0');
	}
}

void tch(char s[]){
	int i;
	for(i = 0; s[i] !='\0'; i++)
		s[i] = 15 - s[i];
	int d = 1;
	for(i = 0; d != 0; i++){
		s[i] += d;
		if(s[i] < 16)
			d = 0;
		else
			s[i]=0;
		if (s[i]<10)
			s[i] = s[i] + '0';
		else
			s[i] = (s[i] % 10) + 'A';
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


void itobin(int n, char s[]){
	int sign=n,i=0;
	do{
		s[i++] = abs(n % 2) + '0';
	}while ((n /= 2) != 0);
	if (sign < 0){
		tcb(s);
		while( i < 32)
			s[i++] = '1';
		//s[i++] = '-';
		s[i++] = 'b';
		s[i++] = '0';
		s[i] = '\0';
	}
	reverse(s);
}
void itoo(int n, char s[]){
	int sign=n,i=0;
	do{
		s[i++] = abs(n % 8) + '0';
	}while ((n /= 8) != 0);
	//s[i++] = 'x';
	//s[i++] = '0';

	s[i++] = 'o';
	s[i++] = '0';
	if (sign < 0){
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}
void itoh(int n, char s[]){
	int sign=n,i=0;
	do{
		s[i++] = abs(n % 16) ;
	}while ((n /= 16) != 0);
	//s[i++] = 'x';
	//s[i++] = '0';
	if (sign < 0){
		tch(s);
		while( i < 8)
			s[i++] = 'F';
	}
	else{
		for(i = 0; s[i] != '\0'; i++){
			if (s[i]<10)
				s[i] = s[i] + '0';
			else
				s[i] = (s[i] % 10) + 'A';
		}		
	}

	s[i++] = 'x';
	s[i++] = '0';
	s[i] = '\0';
	reverse(s);
}

void itob(int n, char s[], int b){
	
	switch(b){
	case 2: itobin(n,s);
		break;
	case 8:	itoo(n,s);
		break;
	case 10:itoa(n,s);
		break;
	case 16:itoh(n,s);
		break;
	default:s="INVALID";
	}
}
