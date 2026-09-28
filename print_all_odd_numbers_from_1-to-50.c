#include<stdio.h>
int main()
{
    int num=50;
    int odd_sum=0;
    for(int i=1; i<=num; i++)
    {
        if(i%2!=0)
        {
            odd_sum=odd_sum+i;
        }
    }
    printf("The sum of odd numbers : %d",odd_sum);
    return 0;
}