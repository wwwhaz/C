#include <stdio.h>
 main(){
   while(1){ 
    char a = ' ',c = '*';
    int x,y,z,l,b,A;
    l=0;A=1000; 
    printf("請輸入聖誕樹層數(1~15且為基數):");
    scanf("%d",&b);

	if(b>15 || b%2==0)
	{
		printf("請重新");}
	else{
    for(x=0;x<b;x++)
    {
        for(y=0;y<b;y++)
        {
            for(z=0;z<=A+l;z++)
            {
                if(z<A-l)
                {
                    printf("%c",a);
                }
                else
                {
                    printf("%c",c);
                }
            }
            printf("\n");
            
            l+=1;
        }
        l-=1;
    }

    for(x=0;x<(b+1);x++)
    {
        for(z=0;z<=A+1;z++)
        {
            if(z<A-1)
            {
                printf("%c",a);
            }else
            {
                printf("%c",c);
            }
        }
        printf("\n");
    }

    return;
 	break;
}}}
