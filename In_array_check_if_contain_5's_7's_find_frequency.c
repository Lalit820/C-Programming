#include <stdio.h>

int main() {
    int i,count1=0,count2=0,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }

    for (i=0; i<5; i++){
    	if(arr[i]==5){
    		count1++;
		}else if(arr[i]==7){
			count2++;
		}
	}
	printf("\nArray is contain 5's and frequency is :%d",count1);
	printf("\nArray is contain 7's and frequency is :%d",count2);

    return 0;
}
