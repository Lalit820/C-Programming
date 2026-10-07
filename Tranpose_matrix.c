#include <stdio.h>

int main() {
    int i,j,arr1[2][2];
    
    printf("Enter the array Elrments:");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		scanf("%d",&arr1[i][j]);
		}
    }
    
    printf("Original Matrix :\n");
     for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		printf("%d",arr1[i][j]);
		}
		printf("\n");
    }
    
    printf("Tranpose Matrix :\n");
     for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		printf("%d",arr1[j][i]);
		}
		printf("\n");
    }
    
    return 0;
}
