#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fibo[10000];
    int N;
    int i;

    printf("Please input the number of generations (>0)：\n");
    scanf("%d", &N);

    fibo[0] = 1;
    fibo[1] = 1;

    for( i = 2; i <=N; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }


    for( i = 1; i <=N; i++)
        printf("第0%d代數量:%.0f\n",i, fibo[i-1]);

    return 0;
}
