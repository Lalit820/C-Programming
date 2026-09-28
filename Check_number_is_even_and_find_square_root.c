#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        if(num%2==0)
        {
            printf("The number is even and the square root of %d is %.2f",num,sqrt(num));
            break;
        }
        else
        {
            printf("The number is odd.");
            break;
            
        }
    }
    return 0;
}