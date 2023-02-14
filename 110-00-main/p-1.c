#include <stdio.h>
main(){   int i,j;
	int a[3][2]={{1,2},{3,4},{5,6}};
		for(i=0;i<3;i++)
		{
			printf("a[%d]=%p\n",i,a[i]);
			for(j=0;j<2;j++)
			printf("a[%d][%d]=%d,%p\n",a[i][j],&a[i][j]);
			}
			printf("a=%p\n",a);
	}
