#include <stdio.h>

int main() {
    int order_of_array,element,i,j,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    element=arr[0];
    for (i=0; i<5; i++){
    	for(j=0; j<5; j++){
    		if(arr[i]<arr[j]){
    			element=arr[i];
    			arr[i]=arr[j];
    			arr[j]=element;
			}
		}
	}
	printf("Array in ascending order:");
	for(i=0; i<5; i++){
		printf("%d",arr[i]);
	}
    return 0;
}
