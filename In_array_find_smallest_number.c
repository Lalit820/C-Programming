#include <stdio.h>

int main() {
    int smallest,i,arr[5];
    
    printf("Enter the array Elrments:");
    
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    smallest=arr[0];	
    for(i=0;i<5; i++){
    	if(arr[i]<smallest){
    		smallest=arr[i];
		}
	}
   printf("The greter element is:%d",smallest);
       
    return 0;
}
