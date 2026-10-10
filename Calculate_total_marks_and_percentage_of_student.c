#include<stdio.h>

struct student{
	int id;
	char name[20];
	int marks[3];
};
	
int main(){
	int i,total_marks=0;
	float percentage;
	struct student s1;
	
	printf("Enter Student ID:");
	scanf("%d",&s1.id);
	
	printf("Enter Student Name:");
	scanf("%s",s1.name);
	
	for(i=0; i<3; i++){
		
	printf("Enter %s's Marks:",s1.name);
	scanf("%d",&s1.marks[i]);
	
    }
    
    printf("\nStudent ID:%d",s1.id);
	
	printf("\nStudent Name:%s",s1.name);
	
    for(i=0; i<3; i++){
    	
    	total_marks+=s1.marks[i];
    }
    
    percentage=(total_marks*100.0)/300;
  
    for(i=0; i<3; i++){
    	
    	printf("\n%s's Marks %d :%d",s1.name,i,s1.marks[i]);
	}
    
    printf("\n%s's Total Marks:%d",s1.name,total_marks);
    printf("\n%s's Percentage:%.2f%",s1.name,percentage);
    
    return 0;
}
