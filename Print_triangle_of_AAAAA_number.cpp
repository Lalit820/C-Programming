#include <stdio.h>

int main() {
    int i,j,lines;
    printf("Enter the number of lines : ");
    scanf("%d",&lines);
    for (i = 0; i <= lines; i++) {
    	for(j=lines; j>=i; j--){
    	      
		    printf("%c",'A'+i);
		   
     	}
      printf("\n");
	}
    
    return 0;
}
