#include <stdio.h>
main(){
	int i=0,sum=0,t,p;
	char id[10];//char next;
	while(1){
	printf("請輸入檢查的統一證號\n");
 	int idnum[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	for(i=0;i<10;i++){
        scanf(" %c",&id[i]);  }
	t=idnum[id[0]-'A'];
	sum=(t%10)*9+t/10+(id[1]-'0')*8+(id[2]-'0')*7+(id[3]-'0')*6+(id[4]-'0')*5+(id[5]-'0')*4+(id[6]-'0')*3
	+(id[7]-'0')*2+(id[8]-'0')*1+(id[9]-'0')*1;
	if(sum%10==0){
	printf("為合格身分證\n"); 
//	scanf("%c",&p);   		
//	printf("繼續輸入/結束程式(yY/nN)\n");
	//	if(p='Y'|| p='y')
          //      {
            //    continue;
          //      }
         //       else if (p='N'|| p='n')
          //      {
                break;
          //      }

	
	}
	else if(id[0]<='z'&& id[0]>='a') {
	printf("為合格身分證\n");	
	//	if(id[0]='Y')
	//	{
	//	continue;
	//	}
	//	else if (id[0]='N')
	//	{
		break;
	//	}
	}

	else if (id[0]>='z'&& id[0]<='a')
	{
	printf("為不合格身分證\n");	 

	 }

	else if (id[1]!='1' || id[1]!='2')
	{
		printf("為不合格身分證\n");
	}

	else 
	{
		printf("為不合格身分證\n");	
	}

}

}
