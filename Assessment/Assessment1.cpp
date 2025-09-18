#include<stdio.h>

int main()
{
	int choice,quantity,amount;
	char moreOrder;
	int TotalAmount=0;
	
	do
	{
		printf("\n==== MENU ====\n");
		printf("1.Pizza price = 180rs/pcs\n");
		printf("2.Burger price = 100rs/pcs\n");
		printf("3.Dosa price = 120rs/pcs\n");
		printf("4.Idli price = 50rs/pcs\n");
		
		printf("Please enter your choice...: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("You have selected Pizza\n");
				printf("Enter the quantity: ");
				scanf("%d",&quantity);
				amount = quantity*180;
				break;
			
			case 2:
				printf("You have selected Burger\n");
				printf("Enter the quantity: ");
				scanf("%d",&quantity);
				amount = quantity*100;
				break;
			
			case 3:
				printf("You have selected Dosa\n");
				printf("Enter the quantity: ");
				scanf("%d",&quantity);
				amount = quantity*120;
				break;
			
			case 4:
				printf("You have selected Idli\n");
				printf("Enter the quantity: ");
				scanf("%d",&quantity);
				amount = quantity*50;
				break;
			
			default:
				printf("Invalid Choice! please try again.\n");
		}
		
		printf("Amount: %d\n",amount);
		TotalAmount += amount;
		printf("Total amount is: %d\n",TotalAmount); 
				
		printf("Do you want to place more orders ? (y/n): ");
		scanf(" %c",&moreOrder);	
	}while(moreOrder=='y' || moreOrder=='Y');
	printf("Thank You for your order\n");
	printf("Your total bill is: %d\n",TotalAmount);
}
