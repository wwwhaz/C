#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int  A,B;
	char a1=1,a2=2,a3=3,a4=4;
	char g1=0,g2=0,g3=0,g4=0;
	while(1){
	srand(time(NULL));
	a1=rand()%10+48;
	a2=rand()%10+48;
 	a3=rand()%10+48;
 	a4=rand()%10+48;
	if((a1==a2 || a1==a3)||(a1==a4||a2==a3)||(a2==a4||a3==a4)){
		printf("regen");}
	else{
		break;}}
 
	do{
	A=0;B=0;
	printf("請輸入你要猜的數字:\n");
	while(1){
	if((a1==a2 || a1==a3)||(a1==a4||a2==a3)||(a2==a4||a3==a4)){
                printf("regen");}
        else{
		scanf("%c%c%c%c",&g1,&g2,&g3,&g4);
		break;}}
	if(a1==g1) {
		A++;	
						}
	else if (a1==g2 || a1==g3 || a1==g4){
	B++;}
	if(a2==g2) {
                A++;
                                                }
        else if (a2==g1 || a2==g3 || a2==g4){
        B++;}
	if(a3==g3) {
                A++;
                                                }
        else if (a3==g1 || a3==g2 || a3==g4){
        B++;}
	if(a4==g4) {
                A++;
                                                }
        else if (a4==g2 || a4==g3 || a4==g3){
        B++;}
	printf("%dA,%dB\n",A,B);}
	while(A!=4);
				
	}



	



