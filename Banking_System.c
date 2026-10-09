#include<stdio.h>
#include<math.h>

int Deposite(int amount, int deposite){
		return amount+deposite;
}

int Widrawal(int amount, int widrawal){
		return amount-widrawal;;
}

int Check_balance(int amount){
	int Display= amount;
	return Display;
}

int main(){
	int amount=1000;
	int witd,depo,Opition;
	
	do{
	    printf("\nSelect Option :-\n Option 1=Deposite\n Option 2=Widrawal\n Option 3=Check Balance\n Option 4 =Exite\n");
	    scanf("%d",&Opition);
	
		if(Opition==1){
			printf("\nEnter the Deposite amount : ");
			scanf("%d",&depo);
	        amount=Deposite(amount,depo);
		    printf("\nDeposite :%d\nThe total balance is :%d",depo,amount);
     	}else if(Opition==2){
		    printf("\nEnter the Widrawal amount : ");
			scanf("%d",&witd);
			if(witd<=amount){
		    amount=Widrawal(amount,witd);
		    printf("\nWidrawal :%d\nThe total balance is :%d",witd,amount);
		    }else{
		    	printf("\nThe account balance is low.\nPlease check the Account Balance First.");
			}
    	}else if(Opition==3){
		    amount=Check_balance(amount);
		    printf("\nThe total balance is :%d",amount);
    	}else if(Opition==4){
			printf("Thamk You");
    	}else{
		printf("\nEnter valid option.");
	    }
	
    }while(Opition!=4);
    
    return 0;
	
}

