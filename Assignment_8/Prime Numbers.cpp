#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <limits>
#include <fstream>

using namespace std;

//Kitty cat proof provided by Paul Conrad.
int getInt(string prompt)
{
	int value;
	
	do 
	{
		bool validInput;
		
		cout << prompt;

		cin >> value;
		validInput = cin.good();
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		
		// if validInput is true, return from the function with our value from user
		if (validInput) return value;
		else
		{
			// otherwise, let the user know they did an invalid entry
			cout << "Invalid Entry! " << endl;
			
			// clear the cin object's status (this clears the bad input flag)
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
}

int main ()
{
	int number;
	int guess;
	int i;
	int j;
	int p;
	
	number = getInt("Enter an integer: ");
	
	cout << "Guess how many prime numbers there are between 0 and " << number << endl;
	
	cin >> guess;
	
	for (int i=2; i<=number; i++) 
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime)
		{
			cout << i << " " << endl;
			p++;
		}
    }
    
    cout << "Number of prime numbers is " << p << endl;
    
    if (guess == p)
    cout << "Congratulations, you are correct." << endl;
    else
    cout << "Incorrect guess." << endl;

    return 0;
}
