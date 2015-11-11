#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

/* find: print lines that match pattern from 1st arg */
main(int argc, char *argv[])
{
	while(--argc)
		printf("%s\n",*++argv);
}
