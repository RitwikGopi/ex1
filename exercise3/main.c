#include <stdio.h>
main(){
	
	char string[36],string3[36],string1[]="-a-d-g Hi How are you H-a a-H 0-A",string2[36];
	//expand(string1,string2);
	//printf("%s\n%s\n",string1,string2);
	int i;
	for(i = -1 ; i >= -10 ; i--){
		itob(i,string2,2);
		printf("%d %x = %s\n",i,i,string2);
		itob(i,string3,16);
		printf("%d %x = %s\n",i,i,string3);
		itob(i,string,8);
		printf("%d %x = %s\n",i,i,string);
	}
	//itob(-11,string3,16);
	//printf("%d %x = %s\n",-11,-11,string3);
}
