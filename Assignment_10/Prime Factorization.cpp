#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <limits>
#include <fstream>

using namespace std;

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

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
 
    if (n > 2)
        printf ("%d ", n);
}

int main()
{
    int n;
    n = getInt("Enter a number to factor. ");
    cout << "Factorization: ";
    primeFactors(n);
    return 0;
}
