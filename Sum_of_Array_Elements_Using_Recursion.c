#include<stdio.h>

int Sum_of_array(int size, int arr[]){
	
	if(size==0){
		return 0;
	}
	return arr[size - 1] + Sum_of_array(size - 1, arr);
}

int main(){
	
	int num, i, arr[100],sum;
	
	printf("Enter the size of array:");
	scanf("%d",&num);
	printf("Enter Array Elements:");
	for(i=0; i<num; i++){
		scanf("%d",&arr[i]);
		sum=Sum_of_array(num,arr);
	}
	printf("Sum of array element is:%d",sum);
	
	return 0;
}
