#include<stdio.h>
int main()
{
    int n,remainder=0,actualNo=0;
    scanf("%d",&n);

    while(n!=0)
    {
        remainder=n%10;
        actualNo=actualNo*10+remainder;
        n/=10;
    }
    printf("%d",actualNo);
    return 0;
}
