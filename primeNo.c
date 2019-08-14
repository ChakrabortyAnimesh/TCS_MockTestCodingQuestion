#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
    printf("%d is a prime no.",n);
    }
    else
    {
       printf("%d is not a prime no.",n);
    }
    return 0;
}
