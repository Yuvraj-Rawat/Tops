#include<stdio.h>

int main()
{
	int user_pin,pin=1234,i,choice;
	float amount,balance=5000;
	
	printf("Welcome to the Bank\n");

	
	for(i=0;i<=3;i++)
	{
		printf("Please enter your 4-digit pin: ");
		scanf("%d",&user_pin);
		if(user_pin==pin)
		{
			while(1)
			{
				printf("\n===== BANK SYSTEM MENU =====\n");
        		printf("1. Deposit Money\n");
        		printf("2. Withdraw Money\n");
        		printf("3. Check Balance\n");
        		printf("4. Exit\n");
        		printf("Enter your choice: ");
        		scanf("%d", &choice);	
        		
        		if(choice == 4)
        		{
        			printf("Thank you for using our bank system. Goodbye!\n");
        			break;
				}
				switch(choice)
				{
					case 1:
						printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        balance += amount;
                        printf("Deposited successfully! Current Balance = %.2f\n", balance);
                        break;
                        
                    case 2:
                    	printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);
                        if (amount <= balance) {
                            balance -= amount;
                            printf("Withdrawal successful! Current Balance = %.2f\n", balance);
                        } else {
                            printf("Insufficient balance!\n");
                        }
						break;
					
					case 3:
						printf("Your current balance is: %.2f\n", balance);
                        break;
                    
                    default:
                        printf("Invalid choice! Try again.\n");
				}
			}	
		}
		else{
			printf("Invalid Password Attempts left %d\n", 3-i);
		}
	}
	printf("Too many wrong attempts. Exiting...\n");
	
}
