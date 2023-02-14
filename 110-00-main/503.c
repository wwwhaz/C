#include <stdio.h>
#include <stdlib.h>
#define M 4
int same(char a[])
   {
	if(a[0]==a[1]||
	   a[0]==a[2]||
	   a[0]==a[3]||
	   a[1]==a[2]||
	   a[1]==a[3]||
	   a[2]==a[3]
	  )
		return 1;
	else
		return 0;
    }
	
void main()
{char s[M],g[M];
	int i,A,B;
	printf("請輸入4個數字(不能重複)\n");
srand(time(0));
do{
	for(i=0;i<M;i++)
 	 s[i]=rand()%10+48;
  }
while(same(s));
do{
	do{
		for(i=0;i<M;i++)
			scanf("%c",&g[i]);
	  }
while(same(g));
	A=0;
	B=0;
	for(i=0;i<4;i++)
	{
		if(g[i]==s[i])
			A++;
		else if (g[i]==s[(i+1)%M] ||
			 g[i]==s[(i+2)%M] ||
			 g[i]==s[(i+3)%M])
			B++;
	}
		printf("%dA%dB\n",A,B);
	}while(A!=4);
		printf("Bingo!");
}
