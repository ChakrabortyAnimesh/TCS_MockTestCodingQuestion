#include <stdio.h>
#include <stdlib.h>

int main()
{
    //num1 num2 +
    int num1,num2;
    char operator;
    scanf("%d %d %c",&num1,&num2,&operator);
    switch(operator)
    {
    case '+':printf("%d",num1+num2);
        break;
    case '-':printf("%d",num1-num2);
        break;
    case '*':printf("%d",num1*num2);
        break;
    case '/':
        if(num2==0)
        {
       printf("Not divisible by zero");
       break;
        }
        else{
            printf("%d",num1/num2);
                break;
        }

    default:
        printf("invalid");

    }
    return 0;
}
