#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

class RockPaperScissors{
	public:
		string playerName;
		int userScore, computerScore, totalRounds;
		
		// Constructor to initialize scores
		RockPaperScissors()
		{
			userScore=0;
			computerScore=0;
		}
		
		// Function to accept player's details
		void acceptDetails(){
			
			cout<<"Enter your name: ";
			cin>>playerName;
			cout<<playerName<<" How Many Rounds You Want To Play? : ";
			cin>>totalRounds;
		}
		
		// Function to play the game
		void playGame(){
			srand(time(0));
			int userChoice, computerChoice,round;
			
			for(round=1; round<=totalRounds; round++)
			{
				cout << "\n========== Round " << round << " ==========\n";
				cout << "1. Rock\n";
            	cout << "2. Paper\n";
            	cout << "3. Scissors\n";
            	cout << "Enter your choice (1-3): ";
            	cin >> userChoice;
            	
            	// Generate random choice for computer
            	computerChoice = (rand()%3)+1;
            	
            	if(userChoice == computerChoice){
            		cout << "Result: It's a Draw!\n";
				}
				else if((userChoice == 1 && computerChoice == 3)||
						(userChoice == 2 && computerChoice == 1)||
						(userChoice == 3 && computerChoice == 2)){
					cout << "Result: You Win this round!\n";
                	userScore++;
				}
				else{
					cout<<"Result: Computer Win this round!\n";
					computerScore++;
				}
			}
			// Display final results after all rounds
			displayFinalResult();
		}
		
		// Function to display final result
		void displayFinalResult(){
			cout << "\n=============================\n";
        	cout << "         FINAL RESULT         \n";
        	cout << "=============================\n";
        	cout << playerName << "'s Score: " << userScore << endl;
        	cout << "Computer's Score: " << computerScore << endl;
        	
        	if(userScore>computerScore){
        		cout<<"\nCongratulations " << playerName << "! You are the Winner!\n";
			}
			else if(computerScore>userScore){
				cout<<"\nComputer Win this Game! Better luck next time.\n";
			}
			else{
				cout<<"\n the game is draw.\n";
			}
		}
			
};

int main()
{		
	RockPaperScissors game; // Create object of the class
	int choice;

    while(true)
    {
    	cout << "\n=============================\n";
    	cout << "     ROCK PAPER SCISSORS     \n";
    	cout << "=============================\n";
    	cout << "1. Play Game\n";
    	cout << "2. Exit\n";
    	cout << "Enter your choice: ";
    	cin>>choice;
    	
    	if(choice == 1){
    		game.acceptDetails();
    		game.playGame();
		}
		else if(choice==2){
			cout<<"\nThank you for playing! Goodbye!\n";
			break;
		}
		else{
			cout<<"\nInvalid choice! Please try again.\n";
		}
		return 0;
	}
}
