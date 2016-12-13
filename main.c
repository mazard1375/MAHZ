#include<stdio.h>

int IsPrime(int n)
{
    int i = 0;
    for(i =2; i * i <= a; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int sum,a,b;
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("%d",sum);
}
