#include<stdio.h>
int main()
{
    float side1,side2,side3,perimeter;
    printf("Enter side of triangle : ");
    scanf("%f%f%f",&side1,&side2,&side3);
    if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
    {
    	printf("It is a triangle");
        perimeter=side1+side2+side3;
	    printf("perimeter of triangle is : %.2f",perimeter);
	}else
	{
		printf("It is not a triangle the sides are invalid");
	}

    
    return 0;
}
