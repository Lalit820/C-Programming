#include <stdio.h>

int main() {
    int i,j,lines;
    printf("Enter the number of lines : ");
    scanf("%d",&lines);
    for (i = 1; i <= lines; i++) {
    	for(j=0; j<=i; j++){
    	       printf("%c",'A'+j);
		   
     	}
      printf("\n");
	}
    
    return 0;
}
