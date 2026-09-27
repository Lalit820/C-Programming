#include<stdio.h>
int main()
{
    int Distance;
    float fuel_litter, average;
    printf("Enter distance in KM : ");
    scanf("%d",&Distance);
    printf("Enter fuel in litter : ");
    scanf("%f",&fuel_litter);
    average=Distance/fuel_litter;
    printf("The average value of fuel consumption is :%.2f ",average);
    return 0;
}
