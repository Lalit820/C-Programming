#include <stdio.h>

int main() {
    int i,j,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    printf("Even elements in array:");
    for (i=0; i<5; i++){
    	if(arr[i]%2==0){
    		printf("%d",arr[i]);
		}
	}

    return 0;
}
