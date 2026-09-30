#include <stdio.h>

int main() {
    int i,j,lines;
    char ch;
    printf("Enter the number of lines : ");
    scanf("%d",&lines);
    for (i = 1; i <= 5; i++) {
    	for(ch='E'; ch>='A'; ch--)
		    printf("%c",ch);
		   
     	
     printf("\n");
	}
    
    return 0;
}
