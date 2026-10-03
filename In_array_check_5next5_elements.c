#include <stdio.h>

int main() {
    int i,j,arr[5],arr2[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    
    printf("Check the elements in array 5 next to 5 is available :");
    
    for (i=0; i<5; i++){
		if(arr[i]==5 && arr[i+1]==5){
			printf("\n5 next to 5 available");
		}
	}

    return 0;
}
