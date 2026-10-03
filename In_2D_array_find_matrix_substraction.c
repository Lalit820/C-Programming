#include <stdio.h>

int main() {
    int i,j,k,arr1[2][2],arr2[2][2],arr3[2][2];
    
    printf("Enter the array Elrments of 1st array:");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		scanf("%d",&arr1[i][j]);		
		} 	
    }
    printf("Enter the array Elrments of 2nd array:");
    for (i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		scanf("%d",&arr2[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
				arr3[i][j]=arr1[i][j]-arr2[i][j];
			   
			 printf("%d",arr3[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
