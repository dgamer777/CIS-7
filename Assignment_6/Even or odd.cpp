#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <limits>
#include <fstream>

using namespace std;

//"Kitty cat proof" provided by Paul Conrad.
int getInt(string prompt)
{
	int value;
	char quit;
	
	do 
	{
		bool validInput;
		
		cout << prompt;

		cin >> value;
		{
			if (quit == 'q') break;
			else
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
		}
	} while (true);
}

int main ()
{
	int n;
	char q = 'q';
	
	while (n != q)
	{
		n = getInt("Enter a number: ");	
		//Number from user.
		{
		if ( n % 2 == 0)
    		{
			cout << n << " is even." << endl;
    		}
		else
    		{
			cout << n << " is odd." << endl;
			}
		}
	}

	return 0;
}
