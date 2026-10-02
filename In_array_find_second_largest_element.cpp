#include <stdio.h>

int main() {
    int Second_largest,largest,i,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    Second_largest=largest=arr[0];
    for(i=0;i<5; i++){
    	if(arr[i]>largest){
    		Second_largest=largest;
    		largest=arr[i];
		}
		else if(arr[i]>Second_largest && arr[i] != largest){
			Second_largest=arr[i];
		}
		
	} 
       printf("The Second largest number is: %d",Second_largest);
    return 0;
}
