#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	while(1){
	int a,b,c;
	int g;
	int r[3]= {1,2,3};
	printf("請出拳 1)剪刀、2)石頭、3)布:\n");
	scanf("%d",&g);
//	srand(time(NULL));
//	a=rand(r);
	a=1;b=2;c=3;
	if (g<=0 || g>3){
	printf("輸入錯誤\n");}
	else{
	if (a==1 && g==1){
		printf("電腦出剪刀、你出剪刀，平手喔\n");
		break;	}
	else if (a==1 && g==2){
		printf("電腦出剪刀、你出石頭，你贏囉\n");
		break;}
	else{
		printf("電腦出剪刀、你出布，你輸囉\n");
		break;}
	if (b==2 && g==2){
		printf("電腦出石頭、你出石頭，平手喔\n");
		break;}		
	else if (b==2 && g==3){
		printf("電腦出石頭、你出布，你贏囉\n");
		break;}
	else{
		printf("電腦出石頭、你出剪刀，你輸囉\n");
		break;}
	if (c==3 && g==3){
		printf("電腦出布、你出布，平手喔\n");
		break;}
	else if (c==3 && g==1){
		printf("電腦出布、你出剪刀，你贏囉\n");
		break;}
	else{
		printf("電腦出布、你出石頭，你輸囉\n");
		break;}
		
		break;}}}
	
		
