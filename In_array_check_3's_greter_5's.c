#include <stdio.h>

int main() {
    int i,count1,count2,arr[5];
    
    printf("Enter the array Elrments:");
    for(i=0; i<5; i++){
    	scanf("%d",&arr[i]);
    	
    }

    for (i=0; i<5; i++){
    	if(arr[i]==3){
    		count1++;
		}else if(arr[i]==5){
			count2++;
		}
	}
	if (count1>count2){
		printf("3's is greter.");
	}
	else{
		printf("5's is greter.");
	}

    return 0;
}
