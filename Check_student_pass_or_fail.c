#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("The student is pass.");
    }
    else
    {
        printf("The student is fail.");
    }
    return 0;
}