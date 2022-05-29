// Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //arrays to store data 
    const int size = 3;
    int a[size][size];
    int b[size][size];
    int c[size][size];
    int i, j;


    //for loop to enter data into Matrix A
    for ( i = 0; i < size ; i++)
    {
        for ( j = 0; j < size; j++)
        {
            cout << "Please Enter Number for Matrix A" << i << " , " << j << ": ";
            cin >> a[i][j];
        }
    }
    //for loop to display Entered Data  of Matrix B
    cout << "Matrix A Values Entered\n";
    for (i = 0; i < size; i++)
    {
        cout << " ";
        for (j = 0; j < size; j++)
        {
            cout << a[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    //for loop to enter Data Into matrix B
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "Please Enter Number for Matrix B " << i << " , " << j << ": ";
            cin >> b[i][j];
        }
    }
    //for loop to display Enter Data of Matix B
    cout << "Matrix B Values Enter\n";
    for (i = 0; i < size; i++)
    {
        cout << " ";
        for (j = 0; j < size; j++)
        {
            cout << b[i][j];
            cout << " ";
        }
        cout << "\n";
    }

    //for loop to make the data of Matrix c matrix a & B Data Added together
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
             c[i][j] = (a[i][j] + b[i][j]) ;
            
        }
    }
    //for loop to Show Data of Matrix C
    cout << "Matrix Values After A+B Enter\n";
    for (i = 0; i < size; i++)
    {
        cout << " ";
        for (j = 0; j < size; j++)
        {
            cout << c[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    // for loop to Multiply Everything in Matrix C by 3
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            c[i][j] = (c[i][j]*3);
        }
    }
    //For loops to show data of Matrix C after Being Multiplied
    cout << "Matrix Values after C* 3Enter\n";
    for (i = 0; i < size; i++)
    {
        cout << " ";
        for (j = 0; j < size; j++)
        {
            cout << c[i][j];
            cout << " ";
        }
        cout << "\n";
    }
}
