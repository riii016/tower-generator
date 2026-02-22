/** -----------------------------------------------------------------------
* Program Name: Project : Towers
* Program Description: Build towers as per users input
* @author Riya Patel
* @Date 02/06/2026
* ------------------------------------------------------------------------ */


#include <iostream>
using namespace std;

// Function that builds single towers as per users choice of height
void singleTower()
{
    int height;
    cout << "Enter the height of the tower" << endl;
    cin >> height;

    // If there is no height only roof will print
    if(height == 0)
    {
        cout << " ___ " << endl;
    }

    // The loop that prints single towers
    for(int i = 0; i < height; i++)
    {
        if(i == 0)
        {
            cout << " ___ " << endl;
        }
        cout << "|_#_|" << endl;
    }
}

// Function that builds ascending or descending towers as per users choice of height
void ascDesTowers()
{
    int first_height, last_height;
    cout << "Enter the height of the first tower" << endl;
    cin >> first_height;
    cout << "Enter the height of the last tower" << endl;
    cin >> last_height;
    int max_height;

    // Assigning the max height as the largest number user enters 
    if(first_height >= last_height)
    {
        max_height = first_height;
    }
    else
    {
        max_height = last_height;
    }

    // Outer loop that prints the tower
    for(int row = max_height; row >= 0; row--)
    {
        if(first_height >= last_height)
        {
            // This loop is to print the descending tower
            for(int column = first_height; column >= last_height; column--)
            {
                if(row == column)
                {
                    cout << " ___ ";
                }
                else if(row < column)
                {
                    cout << "|_#_|";
                }
            }
        }
        else
        {
            // This loop is to print the ascending towers
            for(int column = first_height; column <= last_height; column++)
            {
                if(row > column)
                {
                    cout << "     ";
                }
                else if(row == column)
                {
                    cout << " ___ ";
                }
                else
                {
                    cout << "|_#_|";
                }
            }
        }
        cout << endl;
    }
}

// Functions that prints ascending or descending towers with the number of repeats user enters
void repeatTowers()
{
    int first_height, last_height, repeats;
    cout << "Enter the height of the first tower" << endl;
    cin >> first_height;
    cout << "Enter the height of the last tower" << endl;
    cin >> last_height;
    cout << "Enter the number of repeats for each tower";
    cin >> repeats;
    int max_height;

    // Assigning the max height as the largest number user enters 
    if(first_height >= last_height)
    {
        max_height = first_height;
    }
    else
    {
        max_height = last_height;
    }
    cout << endl;

    // Outer loop that prints the tower
    for(int row = max_height; row >= 0; row--)
    {
        if(first_height <= last_height)
        {
            // This loop is to print the ascending towers
            for(int column=first_height; column<=last_height; column++)
            {
                // This loop helps print the number of repeats
                for(int noOfRepeats = 0; noOfRepeats < repeats; noOfRepeats++)
                {
                    if(row > column)
                    {
                        cout << "     ";
                    }
                    else if(row == column)
                    {
                        cout << " ___ ";
                    }
                    else
                    {
                        cout << "|_#_|";
                    }
                }
            }
        }
        else
        {
            // This loop is to print the descending tower
            for(int column = first_height; column >= last_height; column--)
            {
                // This loop helps print the number of repeats
                for(int noOfRepeats = 0; noOfRepeats < repeats; noOfRepeats++)
                {
                    if(row == column)
                    {
                        cout << " ___ ";
                    }
                    else if(row < column)
                    {
                        cout << "|_#_|";
                    }
                }
            }
        }
        cout << endl;
    }
}

// The main function where user choices from the main option
int main() 
{
    int userChoice = 0;
    while(userChoice != 4)
    {
    cout << "Please select an option." << endl;
    cout << "  1: Single tower" << endl;
    cout << "  2: Ascending/descending towers" << endl;
    cout << "  3: Ascending/descending towers with repeats" << endl;
    cout << "  4: Quit" << endl;
    cin >> userChoice;
    if(userChoice == 1)
    {
        singleTower();
    }
    else if(userChoice == 2)
    {
       ascDesTowers();
    }
    else if(userChoice == 3)
    {
        repeatTowers();
    }
    }
    
    return 0;
}