#include <stdio.h>

int main() {
    int Second_smallest,smallest,i,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    Second_smallest=smallest=arr[0];
    for(i=0;i<5; i++){
    	if(arr[i]<smallest){
    		smallest=arr[i];
    		Second_smallest=smallest;
		}
		else if(arr[i]>Second_smallest && arr[i] != smallest){
			Second_smallest=arr[i];
		}
		
	} 
       printf("The Second smallest number is: %d",Second_smallest);
    return 0;
}
