#include <stdio.h>

int main() {
    int gretest,i,arr[5];
    
    printf("Enter the array Elrments:");
    
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    gretest=arr[0];	
    for(i=0;i<5; i++){
    	if(arr[i]>gretest){
    		gretest=arr[i];
		}
	}
   printf("The greter element is:%d",gretest);
       
    return 0;
}
