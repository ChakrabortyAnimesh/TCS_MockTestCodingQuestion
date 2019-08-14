#include<stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm,beg;
    printf("Enter the number of terms: ");
    scanf("%d %d", &n,&beg);
    printf("Fibonacci Series: ");
    for (i = beg; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
