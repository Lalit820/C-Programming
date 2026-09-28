#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,odd_sum;
    printf("Enter a five number : ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    if(num1%2!=0)
    {
        odd_sum=num1;
    }
    else if(num2%2!=0)
    {
        odd_sum=odd_sum+num2;
    }else if(num3%2!=0)
    {
        odd_sum=odd_sum+num3;
    }else if(num4%2!=0)
    {
        odd_sum=odd_sum+num4;
    }else if(num5%2!=0)
    {
        odd_sum=odd_sum+num5;
    }
    printf("The sum of odd numbers : %d",odd_sum);
    return 0;
}