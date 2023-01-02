#include <stdio.h>

int main()
{
    int sum=0, i, k;
    printf("input value!\n");
    scanf("%d", &k);
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
    printf("sum = %d\n", sum);
    return 0;
}
