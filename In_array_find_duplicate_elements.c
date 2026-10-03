#include <stdio.h>

int main() {
    int i,j,arr[5],arr2[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    printf("Duplicate elements in array:");
    for (i=0; i<5; i++){
    	for(j=i+1; j<5; j++){
    		if(arr[i]==arr[j]){
    			printf("%d",arr[i]);
    			break;
			}
		}
	}

    return 0;
}
