#include <stdio.h>

int main() {
    int gretest,i,arr[5],arr2[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    printf("The copied element is:");
    for(i=0;i<5; i++){
    	arr2[i]=arr[i];
    	printf("%d",arr2[i]);
	}
       
    return 0;
}
