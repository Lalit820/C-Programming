#include<stdio.h>

struct student{
	char book_number[10];
	char book_name[20];
	char author_name[20];
	char publisher[20];
};
	
int main(){
	int i;
	struct student s1[3];
	
	for(i=0; i<3; i++){
		printf("Enter Book Number:");
    	gets(s1[i].book_number);
	
    	printf("Enter Book Name:");
    	gets(s1[i].book_name);
    	
    	printf("Enter Author Name:");
    	gets(s1[i].author_name);
    	
    	printf("Enter Publisher Name:");
    	gets(s1[i].publisher);
    }
	for(i=0; i<3; i++){
		
		printf("\nBook Number:%s",s1[i].book_number);
		printf("\nBook Name:%s",s1[i].book_name);
		printf("\nAuthor Name:%s",s1[i].author_name);
		printf("\nPublisher Name:%s",s1[i].publisher);
    }
    return 0;
}
