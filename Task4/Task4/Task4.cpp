// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//function to draw the Hangman
void Draw() 
{
	cout << " |-------"<< "\n";
	cout << " |       |" << "\n";
	cout << " |       o" << "\n";
	cout << " |      \\|/" << "\n";
	cout << " |       |" << "\n";
	cout << " |      / \\" << "\n";
		
}

//function to let the user Guess the Letter O 
int hangman(int trys)
{
	int guess = trys;
	
	char letter;
	// do while function to let the User Guess 3 Times 
	do {
		cout << "please Guess the missing letter in Yo_bee: ";
		cin >> letter;
		//if Statement stating if you are correct or not 
		if (letter == 'o')
		{
			cout << "your guess is correct";
			guess += 4;
		}
		else
		{
			guess += 1;
			cout << "Sorry,Try again\n";
		}
		
	} while (guess < 3);

	
	return guess;
}

//Function that runs if you guess the letter correctly 
void walkman() 
{
	cout << "You Guess Correctly\n";
	cout << "        o" << "\n";
	cout << "       \\|/" << "\n";
	cout << "        |" << "\n";
	cout << "       / \\" << "\n";
}
// Function that runs if you get the Letter Wrong
void invertman() 
{
	cout << "Your Guess was Wrong\n\n";
	cout << " |-------" << "\n";
	cout << " |       |" << "\n";
	cout << " |      /|\\" << "\n";
	cout << " |       |" << "\n";
	cout << " |      /|\\" << "\n";
	cout << " |       o" << "\n";
}




//function to draw and return a line
string line()
{
	string line = "---------------";


	return line;
}

int main()
{
	int trys = 0;
	Draw();
	int guess = hangman(trys);
	//if statement to check if you have won or not 
	if (guess >= 4) 
	{
		walkman();
	}
	else
	{
		invertman();
	}
	cout << line();
}

