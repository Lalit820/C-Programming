#include<stdio.h>

struct student{
	int id;
	char name[20];
	int total_marks;
};
	
int main(){
	int i;
	struct student s1[5];
	
	for(i=0; i<5; i++){
		
	printf("Enter Student ID:");
	scanf("%d",&s1[i].id);
	
	printf("Enter Student Name:");
	scanf("%s",s1[i].name);
	
	printf("Enter Student Total Marks:");
	scanf("%d",&s1[i].total_marks);
    }
    
    for(i=0; i<5; i++){
    	
	printf("\nStudent ID:%d",s1[i].id);
	
	printf("\nStudent Name:%s",s1[i].name);
	
	printf("\nStudent Total Marks:%d",s1[i].total_marks);
    }
    
    return 0;
}
