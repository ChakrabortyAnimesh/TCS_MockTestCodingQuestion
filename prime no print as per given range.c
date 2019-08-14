#include<stdio.h>
int main()
{
    int i,j,flag,temp;
    int beg,end;
    scanf("%d %d",&beg,&end);
    if(beg==1)
        beg=2;
        if(beg>end)
        {
            temp=beg;
            beg=end;
            end=temp;
        }
    for(i=beg;i<=end;i++)
    {
        flag=0;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
        printf("%d ",i);
    }
    return 0;
}
