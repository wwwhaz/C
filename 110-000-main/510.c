#include <stdio.h>
#include <string.h>
main()
{
        char a[]="abc";
        char b[4]="abc";
        char *c="abc";
             a[0]='d';
             b[1]='d';
	char d[5];
	 strcpy(d,a);
	 strcpy(b,a);

	 strcpy(b,c);
	 strcpy(b,d);









}

