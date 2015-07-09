#include <stdio.h>


main(){
	int c,pc;
	 while((c=getchar())!=EOF){
		 if(c=='\"'){
			 putchar(c);
			 while((c=getchar())!='\"'){
				 putchar(c);
				 if(c=='\\'){
					 c=getchar();
					 putchar(c);
				 }
			 }
			 putchar(c);
			 continue;
		 }
		 else if (c=='/')
			 if((c=getchar())=='/'){
				 while((c=getchar())!='\n' && c!=EOF);
				 putchar('\n');
				 continue;
			 }
			 else if(c=='*'){
				 while((c=getchar())!='/' || pc!='*')
					 pc=c;
				 continue;
			 }
			 else{
				 putchar('/');
				 putchar(c);
				 continue;
			 }
		 else
			 putchar(c);
	 }
}	

