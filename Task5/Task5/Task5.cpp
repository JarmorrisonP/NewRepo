// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

  

using namespace std;
//bools to help calculate points 
bool squareguess = false;
bool triangleguess = false;
bool rectangleguess  = false;
void play();
void menu();
//prints the square guess
void square() 
{
    
    char op;

    cout << " ______________\n";
    cout << "|              |\n";
    cout << "|              |\n";
    cout << "|              |\n";
    cout << "|              |\n";
    cout << "|              |\n";
    cout << "|              |\n";
    cout << "|______________|\n";
   
    cout << "what is this Shape\n";
    cout << "a. Rectangle\n";
    cout << "b. Triangle\n";
    cout << "c. Square\n";
    cout << "d. None of the Above\n";
    cin >> op;
    //used to make the guess correct for the score calculation function to give out score.
    if (op == 'c')
    {
        cout << "You Guessed Correctly";
        squareguess = true;
        menu();
    }
    else
    {
        cout << "You Guessed Incorrectly";
        triangleguess = false;
        menu();
    }
}

void triangle()
{       

    char op;

    cout << "        /\\" << endl;
    cout << "       /  \\" << endl;
    cout << "      /    \\" << endl;
    cout << "     /      \\" << endl;
    cout << "    /        \\" << endl;
    cout << "   /          \\" << endl;
    cout << "  /____________\\" << endl;

    cout << "what is this Shape\n";
    cout << "a. Rectangle\n";
    cout << "b. Triangle\n";
    cout << "c. Square\n";
    cout << "d. None of the Above\n";
    cin >> op;
    //used to make the guess correct for the score calculation function to give out score.
    if (op == 'b')
    {
        cout << "You Guessed Correctly";
        triangleguess = true;
        menu();
    }
    else
    {
        cout << "You Guessed Incorrectly";
        triangleguess = false;
        menu();
    }
}


void rectangle(int height, int width) 
{
    char op;
    cout << " _______________________\n";
    cout << "|                       |\n";
    cout << "|                       |\n";
    cout << "|                       |\n";
    cout << "|                       |\n";
    cout << "|                       |\n";
    cout << "|                       |\n";
    cout << "|_______________________|\n";

    cout << "what is this Shape\n";
    cout << "a. Rectangle\n";
    cout << "b. Triangle\n";
    cout << "c. Square\n";
    cout << "d. None of the Above\n";
    cin >> op;
    //used to make the guess correct for the score calculation function to give out score.
    if (op == 'a')
    {
        cout << "You Guessed Correctly";
        rectangleguess = true;
        menu();
    }
    else
    {
        cout << "You Guessed Incorrectly";
        rectangleguess = false;
        menu();
    }

}

//This function is used to Select a shape at random
void play() {
    //using rand to select a random number between 1 & 3
    int height = 1, width = 1, range = 3;
    srand(time(0));

    int number = rand() % range + 1;

    //if statements to check random number to show the shape based off number
    if (number == 1) {
        square();
    }
    else if (number == 2)
    {
        triangle();
    }
    else {
        rectangle(height, width);
    }
    cout << number;





}
//this calculates the score if the player guesses the number right the bool 
//associated with the shape will give points 
int calculate_score(int score)
{
    if (squareguess = true)
    {
        score += 10;
    }
    else 
    {
        cout << "dumb";
    }
    if (rectangleguess = true)
    {
        score += 10;
    }
    if (triangleguess = true)
    {
        score += 10;
    }

    return score;
}

//function to hold all the menu items and to recall after guessing a shape
void menu() 
{

    int score = 0;
    char op;
    int height, width;

    //the game menu
    cout << "\nWelcome To Identify The Shapes \n";
    cout << "Please Select and Option\n";
    cout << "___________________________________\n";
    cout << "Play (p)\n";
    cout << "Final Score (f)\n";
    cout << "Exit (e)";
    cin >> op;


    //switch case to direct player through game 
    switch (op)
    {

    case 'p': {
        play();
        break;
    }
    case 'f': {
        cout << calculate_score(score);
        break;
    }
    case 'e':
                exit(0);
    }
}


int main()
{
    
    menu();












}

