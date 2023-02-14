#include<stdio.h>

int main()

{int i,n,f[10000]={1,1};

 scanf("%d",&n);

 for(i=2;i<n;i++)

   f[i]=(f[i-1]+f[i-2])%10007;

 printf("%d\n",f[n]);

 return 0;

}
