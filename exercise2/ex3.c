#include <stdio.h>
#define lim 100

int main(){
	char s[lim],c;
	long int i,n=0,b=1;
	printf("Enter a hexadecimal number : ");
	for(i=0;i < lim && (c=getchar())!=EOF && c!='\n';i++){
		if ((c>='0' && c<='9')||(c>='a'&&c<='f') || c=='x' || c=='X')

			s[i]=c;
		else if (c>='A'&&c<='F')
			s[i]=c+'a'-'A';
		else{
			printf("Wrong entry\n");
			return 0;
		}
		s[i+1]='\0';
	}
	for(--i;s[i]!='x' && s[i]!='X' && i>=0;i--){
		if(s[i]>='a'&&s[i]<='f')
			n+=((10+s[i]-'a')*b);
		else
			n+=((s[i]-'0')*b);
		b*=16;
	}
	printf("Decimal equivalent of %s = %ld\n",s,n);
}
