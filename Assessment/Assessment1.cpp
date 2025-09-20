#include<stdio.h>

int main()
{
	int choice,quantity,amount;  // Variables for menu choice, quantity of item, and calculated amount
	char moreOrder;  // To store whether user wants to order more (y/n)
	int TotalAmount=0;  // To store total bill (initialize to 0).
	
	// Start a loop so user can order multiple items until they say "no"
	do
	{
		// Display the Menu
		printf("\n==== MENU ====\n");
		printf("1.Pizza price = 180rs/pcs\n");
		printf("2.Burger price = 100rs/pcs\n");
		printf("3.Dosa price = 120rs/pcs\n");
		printf("4.Idli price = 50rs/pcs\n");
		
		// Take user choice
		printf("Please enter your choice...: ");
		scanf("%d",&choice);
		
		// Based on user choice, calculate amount
		switch(choice)
		{
			case 1:
				printf("You have selected Pizza\n");
				printf("Enter the quantity: ");
				scanf("%d",&quantity);
				amount = quantity*180;  // Price × Quantity
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
		
		// Show the amount for current order
		printf("Amount: %d\n",amount);
		
		// Add to total amount
		TotalAmount += amount;
		printf("Total amount is: %d\n",TotalAmount); 
		
		// Ask user if they want to continue ordering		
		printf("Do you want to place more orders ? (y/n): ");
		scanf(" %c",&moreOrder);	
	}while(moreOrder=='y' || moreOrder=='Y'); // Loop continues if 'y' or 'Y'
	
	// After loop ends
	printf("Thank You for your order\n");
	printf("Your total bill is: %d\n",TotalAmount);
}
