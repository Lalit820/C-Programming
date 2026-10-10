#include<stdio.h>

struct student{
	int Emp_id;
	char Emp_name[20];
	int Emp_salary;
};
	
int main(){
	int i,salary;
	struct student s1[5];
	
	for(i=0; i<2; i++){
		printf("Enter Employee ID:");
	    scanf("%d",&s1[i].Emp_id);
	
     	printf("Enter Employee Name:");
    	scanf("%s",s1[i].Emp_name);
	
    	printf("Enter Employee Salary:");
    	scanf("%d",&s1[i].Emp_salary);
    }
    
    salary=s1[0].Emp_salary;
    
    for(i=0; i<2; i++){
    	if(salary<s1[i].Emp_salary){
    		salary=s1[i].Emp_salary;
		}	
    }
    
    for(i=0; i<2; i++){
    	if(salary==s1[i].Emp_salary){
    	printf("\nEmployee ID:%d",s1[i].Emp_id);	
    	printf("\nEmployee Name:%s",s1[i].Emp_name);
    	printf("\nEmployee Salary:%d",s1[i].Emp_salary);
		}
	}
    
    return 0;
}
