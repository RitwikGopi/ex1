#include <stdio.h>
#include <stdlib.h>


main(){
	int c,pc,b=0,sb=0,cb=0,qe=0,s=0;
	 while((c=getchar())!=EOF){
		 if(c=='\"'){
			 while(((c=getchar())!='\"') && (c!='\n'));
				if(c=='\n')
					qe++;
			 continue;
		 }
		 else if (c=='/'){
			 if((c=getchar())=='/'){
				 while((c=getchar())!='\n' && c!=EOF);
				 //putchar('\n');
				 continue;
			 }
			 else if(c=='*'){
				 while((c=getchar())!='/' || pc!='*')
					 pc=c;
				 continue;
			 } 
		 }
		 switch(c){
			 case '{' : cb++;
				    break;
			 case '}' : cb--;
				    break;
			 case '(' : b++;
				    break;
			 case ')' : b--;
				    break;
			 case '[' : sb++;
				    break;
			 case ']' : sb--;
				    break;
		 }

				     
	 }
	 printf("%d PARENTHESES ERRORS\n%d SQUARE BRACKET ERRORS\n",abs(b),abs(sb));
	 printf("%d BRACES ERRORS\n",abs(cb));
	 printf("%d QUOTES ERRORS\n",qe);
}	

