#include <stdio.h>

int main() {
    int i,j,lines;
    printf("Enter the number of lines : ");
    scanf("%d",&lines);
    for (i = lines; i >= 1; i--) {
    	for(j=1; j<=i; j++){
    	    
		    printf("%c",'A'+i-1);
		   
     	}
     printf("\n");
	}
    
    return 0;
}
