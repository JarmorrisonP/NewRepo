// Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

//declearing/initializing the structure 
struct PETS {

    string date;
    double tran_cost;
    double meal_cost;
    double entertainment;
    double overall;
    float misc;
    
    // for when no data is put in it will goto these default values
    PETS() {
        tran_cost = 0;
        meal_cost = 0;
        entertainment = 0;
        overall = 0;
        misc = 0;
       

        }





};

//function to display the daily expenses 
void daily(PETS p[SIZE])
{
    //for loop this shows the each price per day then adds them up to show overall cost of the day
    for (int i = 0; i < 3; i++) 
    {
        cout << "day " << i + 1 << " Transport Cost = $ " << p[i].tran_cost << endl;
        
        cout << "day " << i + 1 << " Meal Cost = $ " << p[i].meal_cost << endl;
         
        cout << "day " << i + 1 << " Entertainment Cost = $ " << p[i].entertainment << endl;
        
        cout << "day " << i + 1 << " Misc Cost = $" << p[i].misc ;
        
        cout << " Overall Cost of Day" << i + 1 << " = $ " << p[i].tran_cost + p[i].meal_cost + p[i].entertainment + p[i].misc << "\n\n\n";
    }


}
//function to display overall Weekly Expenses
void weekly(PETS p[SIZE])
{
    //for loop to calculate over all cost of the day and then adds them up to one for weekly cost 
    for (int i = 0; i < 3; i++)
    {
       
        p[i].overall = p[i].tran_cost + p[i].meal_cost + p[i].entertainment + p[i].misc;
      
        
        
    }
    cout << "Over Cost of the Week = $ " << p[0].overall + p[1].overall + p[2].overall << "\n\n";

}

char op;
int main()
{
    //do while loop to keep the menu running till x is selected to close app
    do {
        //array to store expenses
        PETS p[SIZE];

        
        cout << "Add Data(a)\n";
        cout << "View Daily Expenses (d)\n";
        cout << "View Weekly Expenses(w)\n";
        cout << "Exit (x)";
        cin >> op;

        //switch case to help with the menu
        switch (op)
        {
        case 'a':
        {
            //for loop to add data to the days 
            for (int i = 0; i < SIZE; i++)
            {
                cout << "day " << i + 1 << "Transport Cost";
                cin >> p[i].tran_cost;
                cout << "day " << i + 1 << "Meal Cost";
                cin >> p[i].meal_cost;
                cout << "day " << i + 1 << "Entertainment Cost";
                cin >> p[i].entertainment;
                cout << "day " << i + 1 << "Misc Cost";
                cin >> p[i].misc;
            }
            break;
        }
        case'd':
        {
            daily(p);
        }
        case 'w':
        {
            weekly(p);
        }


        default:
            break;
        }


    } while (op != 'x');
    }





