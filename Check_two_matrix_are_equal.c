#include <stdio.h>

int main() {
    int i,j,arr1[100][100],arr2[100][100];
    int rows,cols,equal=1;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of cols:");
    scanf("%d",&cols);
    printf("Enter the Elrments of 1st Matrix:");
    for(i=0; i<rows; i++){
    	for(j=0; j<cols; j++){
    		scanf("%d",&arr1[i][j]);
		}
    }
    
    printf("Enter the Elrments of 2st Matrix:");
     for(i=0; i<rows; i++){
    	for(j=0; j<cols; j++){
    		scanf("%d",&arr2[i][j]);
		}
    }
    
    printf("Check Matrix are equal or not:\n");
     for(i=0; i<rows; i++){
      	for(j=0; j<cols; j++){
		    if(arr1[i][j]!=arr2[i][j]){
    		    equal=0;
    		    break;
		    }
	    }
    }
    if(equal){
		printf("Both are equal.");
	}
	else{
    	printf("Both are not equal.");
    }
    
    return 0;
}
