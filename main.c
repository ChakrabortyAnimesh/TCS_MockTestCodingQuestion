#include <stdio.h>
#include <stdlib.h>
void sort(int [],int);
void sort(int arr[],int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
                //swapping is done
                {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
        }
    }
}
int main()
{

   int  n,i;
   scanf("%d",&n);
   int arr[n],pos;

   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   scanf("%d",&pos);
   sort(&arr,n);
/*
   for(i=0;i<n;i++)
   printf("%d    ",arr[i]);
*/
    printf("\n%d ",arr[pos-1]);
    return 0;
}
void b_sort(int arr[],int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(arr[i]>arr[j])
          {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp;
          }
        }
    }
}


