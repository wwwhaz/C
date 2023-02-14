#include <stdio.h>
int d[10001][5000] = {0};
int main()
{
 d[1][0]=1;
 int i, j;
 for (i = 2; i <= 10000; i++)
 {
  for (j = 0; j < 5000; j++)
  {
   d[i][j] += d[i - 1][j] + d[i - 2][j];
   d[i][j + 1] += d[i][j] / 10;
   d[i][j] %= 10;
  }
 }

 int n,a;  
 printf("Please input the number of generations (>0)：\n");
 scanf("%d",&n);
  for(a=1;a<=n;a++)
{  
	for (i=4999;i>=0;i--) 
  {
   	if (d[a][i] != 0)
    		break;
  }
  	printf("第%03d代數量:",a);
   	for (; i >= 0; i--)
 	 printf("%d",d[a][i]);
	
	printf("\n");
	
}
 }
