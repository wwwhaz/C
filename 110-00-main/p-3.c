#include <stdio.h>
fun(int a[]){
	int i;
	for(i=0;i<2;i++)
	{
		a[i]+=1;
		printf("%d\n",a[i]);
	}
	     }
main(){
	int a[2][2]={{1,2},{3,4}};
	fun(a[1]);
	printf("%d\n",a[0][0]);
	}
