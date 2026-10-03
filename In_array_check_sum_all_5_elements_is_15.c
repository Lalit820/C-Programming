#include <stdio.h>

int main() {
    int i,j,sum=0,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }

    for (i=0; i<5; i++){
	   	sum+=arr[i];
	}
	if(sum==15){
			printf("The sum of all elements is 15");
		}
		else{
			printf("The sum of all elements is not 15");
		}

    return 0;
}
