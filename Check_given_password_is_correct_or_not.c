#include<stdio.h>
int main()
{
    int num=1234, password;
    printf("Enter the password: ");
    scanf("%d",&password);
    if(num==password)
    {
        printf("Password is correct.");
    }
    else
    {
        printf("Password is incorrect.");
    }
    return 0;
}