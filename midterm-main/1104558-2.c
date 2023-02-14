#include <stdio.h>
int main(){

	while(1){
	int i,j,s,l,w,a,b,c=0;
	printf("請輸入1~39的基數:\n");
	scanf("%d",&s);
	if (s%2==0 || s>39)
	{
		printf("請重新輸入");
		continue;
	}
	w=s*3;
	l=(s*2)+3;
	a=l/2;
	b=1;
	for (i=1;i<=w;i++){
		for(j=1;j<=l;j++){
			if (j>a && j<=a+b)
				printf("M");
					
//			else if
			else 
				printf("-");
					  }
				
		printf("\n");
		a-=1;
		b+=2;
		c+=1;
		if(c==3){
			a+=2;
			b-=4;
			c=0;
			}
		}
	for(i=1;i<=(s/2)+1;i++){
		for(j=1;j<=l;j++){
			if (j>(l-s)/2 && j<=(l-s)/2+s)
				printf("H");	
			else
				printf("-");
   							
				}			
			printf("\n");
			}
			break;
	}
	}
