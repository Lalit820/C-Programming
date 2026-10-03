#include <stdio.h>

int main() {
    int i,j,arr[5],arr2[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    
    printf("Check the elements in array 3 next to or 5 next to 5 :");
    
    for (i=0; i<5; i++){
		if(arr[i]==3 && arr[i+1]==3){
    		printf("\n3 next to 3 available");
		}
		else if(arr[i]==5 && arr[i+1]==5){
			printf("\n5 next to 5 available");
		}
		else{
			printf("Not available.");
			break;
		}
	}

    return 0;
}
