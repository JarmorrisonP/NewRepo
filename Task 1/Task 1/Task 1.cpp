// Task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//stucture to hold the stats of players 
struct soccer {
	int player_num;
	float top_speed;

	//constructor incase a value isnt put into the structure
	soccer()
	{
		player_num = 0;
		top_speed = 0;
	};

};
//Declaration of the enum type
enum position {
	goalkeeper = 'g',
	midfielder = 'm',
	striker = 's',
	winger = 'w',
	defender = 'd'

}player_position;








int main()
{
	char type1;
	char type2;
	soccer player1;
	soccer player2;
	

	//Questions of the Player and their input
	cout << "Please Enter Player 1's Number: ";
	cin >> player1.player_num;
	cout << "Please Enter Player 1's Top Speed: ";
	cin >> player1.top_speed;
	cout << "Please Enter Player 1's Position "
		<< "(goalkeeper = 'g'"
		<< "midfielder = 'm'"
		<< "striker = 's'"
		<< "winger = 'w'"
		<< "defender = 'd'): ";
	cin >> type1;
	cout << "\nPlease Enter Player 2's Number: ";
	cin >> player2.player_num;
	cout << "Please Enter Player 2's Top Speed: ";
	cin >> player2.top_speed;
	cout << "Please Enter Player 2's Position: "
		 << "(goalkeeper = 'g'"
		 << "midfielder = 'm'"
		 << "striker = 's'"
		 << "winger = 'w'"
		 << "defender = 'd'): ";
	cin >> type2;

	//switch cases based on what the player chosen position is 
	switch (type1)
	{
		//prints out data based on chosen position
	case goalkeeper:
		cout << "player 1's Number is: "<<  player1.player_num << "\n";
		cout << "the Top Speed of Player 1 is: "<< player1.top_speed << " \n";
		cout << "player 1's Position is: " << "goalkeeper";
		break;
	case midfielder:
		cout << "player 1's Number is: " << player1.player_num << "\n";
		cout << "the Top Speed of Player 1 is: " << player1.top_speed << " \n";
		cout << "player 1's Position is: " << "Midfielder";
		break;
	case striker:
		cout << "player 1's Number is: " << player1.player_num << "\n";
		cout << "the Top Speed of Player 1 is: " << player1.top_speed << " \n";
		cout << "player 1's Position is: " << "Striker";
		break;
	case winger:
		cout << "player 1's Number is: " << player1.player_num << "\n";
		cout << "the Top Speed of Player 1 is: " << player1.top_speed << " \n";
		cout << "winger";
		break;
	case defender:
		cout << "player 1's Number is: " << player1.player_num << "\n";
		cout << "the Top Speed of Player 1 is: " << player1.top_speed << " \n";
		cout << "player 1's Position is: " << "defender";
		break;
	};
	switch (type1)
	{
	case goalkeeper:
		cout << "\n\nplayer 2's Number is: " << player2.player_num << "\n";
		cout << "the Top Speed of Player 2 is: " << player2.top_speed << " \n";
		cout << "player 2's Position is: " << "goalkeeper";
		break;
	case midfielder:
		cout << "\n\nplayer 2's Number is: " << player2.player_num << "\n";
		cout << "the Top Speed of Player 2 is: " << player2.top_speed << " \n";
		cout << "player 2's Position is: " << "Midfielder";
		break;
	case striker:
		cout << "\n\nplayer 2's Number is: " << player2.player_num << "\n";
		cout << "the Top Speed of Player 2 is: " << player2.top_speed << " \n";
		cout << "player 2's Position is: " << "Striker";
		break;
	case winger:
		cout << "\n\nplayer 2's Number is: " << player2.player_num << "\n";
		cout << "the Top Speed of Player 2 is: " << player2.top_speed << " \n";
		cout << "player 2's Position is: " << "winger";
		break;
	case defender:
		cout << "\n\nplayer 2's Number is: " << player2.player_num << "\n";
		cout << "the Top Speed of Player 2 is: " << player2.top_speed << " \n";
		cout << "player 2's Position is: " << "defender";
		break;
	};

}

