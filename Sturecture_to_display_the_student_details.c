#include<stdio.h>

struct student{
	int id;
	char name[20];
	int Percentage;
	char email[30];
	int number[13];
};
	
int main(){
	int i;
	struct student s1;
		
	printf("Enter Student ID:");
	scanf("%d",&s1.id);
	
	printf("Enter Student Name:");
	scanf("%s",s1.name);
	
	printf("Enter Student Total Percentage:");
	scanf("%s",&s1.Percentage);
	
	printf("Enter Student Email Id:");
	scanf("%s",&s1.email);
	
	printf("Enter Student Mobile Number:");
	scanf("%s",&s1.number);
    
    
        	
	printf("\nStudent ID:%d",s1.id);
	
	printf("\nStudent Name:%s",s1.name);
	
	printf("\nStudent Total Percentage:%d%",s1.Percentage);
	
	printf("\nStudent Email Id:%s",s1.email);
	
	printf("\nStudent Mobile Number:%s",s1.number);
    
    
    return 0;
}
