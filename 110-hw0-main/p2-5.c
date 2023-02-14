# include <stdio.h>

main(){
	int i=0,j=0;
	for (i=1;i<10;i+=2){
		if(i==5)
	{break;} 
	 for(j=1;j<10;j+=2){
	if(i==5 || j==5 )
		break;	
	printf("%d*%d=%2d%c ",i,j,i*j,(j!=9)?' ':'\n');
}

	



}}
