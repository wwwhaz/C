#include <stdio.h>

	fun(int*a){
	*a=*a+1;
	printf("%d\n",*a);}
	main(){
	int a=1;
	fun(&a);
	printf("%d\n",a);
	}

