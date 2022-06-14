#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <Windows.h>

using namespace std;


	string countries[25] = { "afghanistan" ,
		"pakistan",
		"philippines", 
		"russia", 
		"fiji", 
		"turkey", 
		"america", 
		"switzerland", 
		"japan", 
		"africa", 
		"iraq", 
		"iran", 
		"nepal", 
		"india", 
		"bhutan", 
		"australia", 
		"egypt", 
		"netherlands", 
		"australia",
		"malaysia", 
		"indonesia",
		"chile", 
		"china", 
		"Colombia",
		"bhutan"
		};

class hangMan
{
public:
	hangMan();	//constructor

	void displayWelcome();

	void displayTries();

	void displayunderscore();

	void displayAnswer();

	void displayhangMan();

	void takeInput();

	void displayResult();

	bool guessedWords();

private:
	string selectedCountry;
	
	char *underscore;
	
	int countryLength;

	int chancesLeft;
};

//constructor to select country and determines the equivalent length
hangMan::hangMan()
{	
	countryLength=0;
	chancesLeft=8;
	srand(time(NULL));

	int random = rand() % 25 ;		//chooses a random number to select a country

	selectedCountry = countries[random];

	for (int i = 0; true; i++)					//determines the length of the string
	{
		if (selectedCountry[i] != '\0')
		{
			countryLength++;
		}
		else
		{
			break;
		}
	}

	underscore = new char[countryLength];

	for (int i = 0; i < countryLength; i++)		//assigns empty places to characters
	{
		underscore[i] = '_';
	}
}

void hangMan::displayWelcome(){
	cout<<"		*==================================================================================*"<<endl<<endl<<endl;
	cout<<"					   -Welcome To The Hangman Game- "<<endl<<endl;
	cout<<"		*==================================================================================*"<<endl<<endl<<endl;
}

void hangMan::displayTries()
{
	cout << "												Chances left are : " << chancesLeft;
}

void hangMan::displayunderscore()
{
	cout << "\n\n			Enter a guess character : ";

	for (int i = 0; i < countryLength; i++)
	{
		cout << underscore[i] << " ";
	}
	cout<<endl;
}

void hangMan::displayAnswer()
{
	cout << "\n\n			The correct answer was : ";

	for (int i = 0; i < countryLength; i++)
	{
		cout << selectedCountry[i] << " ";
	}
	cout<<endl;
}

void hangMan::displayhangMan()
{
	cout << "	HANGMAN : " << endl;

	switch (chancesLeft)
	{
		case 8:
			system("Color 0A");
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _" <<endl;
		    cout<<"		"<< "|" << endl; 		   
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
			 break; 
			
			
		case 7:
			system("Color 0A");
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     (" << endl; 		   
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl; 		    
 		     
			break;
			
		case 6:
			system("Color 0A");
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<endl;
		    cout<<"		"<< "|" << endl; 		   
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
		
			break;
			
		case 5:
			system("Color 0A");
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<endl;
		    cout<<"		"<< "|      | " <<endl; 		   
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;

			break;
			
		case 4:
			system("Color 0A");
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<endl;
		    cout<<"		"<< "|      | " <<endl; 		   
		    cout<<"		"<< "|      | " << endl;	   
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;

			break;
			
		case 3:
			system("Color 0A");	
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<endl;
		    cout<<"		"<< "|      | " <<endl; 		   
		    cout<<"		"<< "|      | " << endl;	   
			cout<<"		"<< "|    / | \\ "<< endl;
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;

			break;
			
		case 2:

			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<endl;
		    cout<<"		"<< "|      | " <<endl; 		   
		    cout<<"		"<< "|      | " << endl;	   
			cout<<"		"<< "|    / | \\ "<< endl;
 		    cout<<"		"<< "|      |   "<< endl;			
 		    cout<<"		"<< "|" << endl;
			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;


			break;
		
		case 1:
			system("Color 0C");	
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<"--I am about to die "<<endl;
		    cout<<"		"<< "|      | " <<endl; 		   
		    cout<<"		"<< "|      | " << endl;	   
			cout<<"		"<< "|    / | \\ "<< endl;
 		    cout<<"		"<< "|      |   "<< endl;			
 			cout<<"		"<< "|      |" << endl;
 			cout<<"		"<< "|" << endl;
 		    cout<<"		"<< "|" << endl;

			break;
			
		case 0:
			system("Color 04");
			cout<<"		"<< "_______" << endl;
		    cout<<"		"<< "|      |" << endl;
		    cout<<"		"<< "|      _ " <<endl;
		    cout<<"		"<< "|     ( )" <<endl;
		    cout<<"		"<< "|      | " <<endl; 		   
		    cout<<"		"<< "|      | " << endl;	   
			cout<<"		"<< "|    / | \\ "<< endl;
 		    cout<<"		"<< "|      |   "<< endl;			
 			cout<<"		"<< "|      |" << endl;
 			cout<<"		"<< "|    /   \\ "<< endl;
 		    cout<<"		"<< "|   /     \\"<< endl;
 		    cout<<"		"<< "|" << endl;

			break;

	cout << endl;
}
}

void hangMan::takeInput()
{
	char character;

	bool escape = false;
	bool incorrectChoice = true;
	bool displayed = false;

	int count= 0;

	do
	{

		cout << "\n\n				Guess a character: ";
		cin >> character;

		character = (char)tolower(character);

		for (int i = 0; i < countryLength; i++)
		{
			count++;

			if (character == selectedCountry[i])
			{
				if (character == underscore[i])
				{
					if (displayed == false)
					{
						cout << "\nCharacter is already chosen. Please choose again";
						displayed = true;
					}				
					
					incorrectChoice = false;
				//	break;
				}
				
				else
				{
					underscore[i] = character;
					escape = true;

					if (displayed == false)
					{
						cout << "\n 			Woah ! your guessed alphabet was correct " << endl;						
						displayed = true;
						
					}
				}
			}
		}

		if (count == countryLength && escape == false && incorrectChoice == true)
		{
			cout << "\n				Nice try , but your guess wasn't right "<<endl;
			chancesLeft--;
			escape = true;
		}

		incorrectChoice = true;
		displayed = false;

	} while (escape == false);

	
}

void hangMan::displayResult()
{

	cout << "					Game Finished ! "<<endl<<endl;

	displayhangMan();

	displayAnswer();

	displayunderscore();

	cout << endl;

	displayTries();

	cout << endl;

	if (chancesLeft > 0)
	{
		cout << "\n\t\t\t====================================";
		cout << "\n\t\t\t  Congrats You Have Guessed It!";
		cout << "\n\t\t\t===================================\n\n";
		Beep(1800, 900);
		Beep(1800, 900);				
		Beep(1800, 900);				
	
	}
	
	else
	{
		cout << "\n\t\t\t====================================";
		cout << "\n\t\t\t You were unsuccessful in guessing ";
		cout << "\n\t\t\t====================================\n\n";
		Beep(1400, 200);
		Beep(1400, 200);	
		Beep(1400, 200);			
	}
}

bool hangMan::guessedWords()
{
	int correctPlaces = 0;

	for (int i = 0; i < countryLength; i++)
	{
		if (underscore[i] == selectedCountry[i])
		{
			correctPlaces++;
		}
	}

	if (correctPlaces == countryLength || chancesLeft < 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void timer()
{
	int seconds = 3;

	cout << "\n";

	while (seconds >= 0)
	{
		cout << "\r\t\t\t\tPlease wait for "<< seconds <<" seconds ! ";
		Sleep(400);
		seconds--;
	}
}

int main()
{
	hangMan gamePlay;
	
	bool gameOver;

	do
	{
		gamePlay.displayWelcome();
	
		gamePlay.displayhangMan();

		gamePlay.displayTries();

		gamePlay.displayunderscore();

		gamePlay.takeInput();

		timer();

		system("CLS");			//clears screen

		gameOver = gamePlay.guessedWords();

	} while (gameOver == false);

	gamePlay.displayResult();		//displays results

	return 0;
}
