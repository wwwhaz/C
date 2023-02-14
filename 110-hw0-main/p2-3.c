#include <stdio.h>
main() {
	int D,i;
	float F;
	char T ;char next;
	for(i=0;i<3;i++){
	printf("請輸入一個整數和c或f:");
	scanf("%d %c",&D,&T);
	if (T=='f' || T=='F'){
		F=32+1.8*D;
		printf("攝氏轉華氏溫度:%f\n",F);
		
	}
	else if (T=='c' || T=='C'){
		F=(D-32)*(5/9.0);
		printf("華氏轉攝氏溫度:%f\n",F);
	
        }	
	else{
		printf("error\n");
		
       	}
       

}
	printf("bye\n");
}
