#include <stdio.h>
#define N 10000
int main()
{
 int a[N]={1};
 int k=0,l=1,n=50;
 int i,j;
 for(i=1;i<=n;i++)
 {
  for(j=0;j<l;j++)
  {
   a[j]=a[j]*i+k;
   k=a[j]/10000;
   a[j]=a[j]%10000;
  }
  if(k)
  {
   a[j]=k;
   l++;
   k=0;
  }
 }
  int d;
for(d=1;d<=50;d++)
{  
	for (i=4999;i>=0;i--) 
  {
   	if (a[j] != 0)
    		break;
  }
printf("%d!=",d);
 for(; i >= 0; i--){
 printf("%d",a[l-1]);
 for(i=l-2;i>=0;i--)
  printf("%04d",a[i]);
 printf("\n");
}

}
}
	









