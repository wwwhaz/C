#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	while(1){
	int a,b,c;
	int g;
	int r[3]= {1,2,3};
	printf("�ХX�� 1)�ŤM�B2)���Y�B3)��:\n");
	scanf("%d",&g);
//	srand(time(NULL));
//	a=rand(r);
	a=1;b=2;c=3;
	if (g<=0 || g>3){
	printf("��J���~\n");}
	else{
	if (a==1 && g==1){
		printf("�q���X�ŤM�B�A�X�ŤM�A�����\n");
		break;	}
	else if (a==1 && g==2){
		printf("�q���X�ŤM�B�A�X���Y�A�AĹ�o\n");
		break;}
	else{
		printf("�q���X�ŤM�B�A�X���A�A���o\n");
		break;}
	if (b==2 && g==2){
		printf("�q���X���Y�B�A�X���Y�A�����\n");
		break;}		
	else if (b==2 && g==3){
		printf("�q���X���Y�B�A�X���A�AĹ�o\n");
		break;}
	else{
		printf("�q���X���Y�B�A�X�ŤM�A�A���o\n");
		break;}
	if (c==3 && g==3){
		printf("�q���X���B�A�X���A�����\n");
		break;}
	else if (c==3 && g==1){
		printf("�q���X���B�A�X�ŤM�A�AĹ�o\n");
		break;}
	else{
		printf("�q���X���B�A�X���Y�A�A���o\n");
		break;}
		
		break;}}}
	
		
