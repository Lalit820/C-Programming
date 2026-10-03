#include <stdio.h>

int main() {
    int i,j,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }
    printf("Check the contain a 3 or a 5 elements in array:");
    for (i=0; i<5; i++){
    	if(arr[i]==3 || arr[i]==5){
    		printf("%d",arr[i]);
		}
		else{
			printf("NO");
			break;
		}
	}

    return 0;
}
