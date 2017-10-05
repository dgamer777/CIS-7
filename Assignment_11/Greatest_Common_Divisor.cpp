#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <limits>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int getInt1(string prompt)
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

int getInt2(string prompt)
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

//Euclidean method.
int GCD(int u, int v)
{
	return (v != 0) ? GCD(v, u % v) : u;
}

int main ()
{
	int num1;
	int num2;
	int result;
	int gcd;
	
	std::clock_t start;
    double duration;
    start = std::clock();
	
	num1 = getInt1("Enter a number. ");
	num2 = getInt2("Enter another number. ");
    
    
	//Exhaustion method.
	for(int i=1;i<=num1&&i<=num2;i++)
	{


     if(num1%i==0 && num2%i == 0 )
	 {
        gcd=i;

   	 }
	}
	cout << "(Exhaustion method) The GCD of " << num1 << " and " << num2 << " is "<< gcd << endl;
	
	duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    std::cout<<"Time: "<< duration <<'\n';
    
    start = std::clock();
	
	result = GCD(num1, num2);
	
    cout << "(Euclidean method) The GCD of " << num1 << " and " << num2 << " is " << result << endl;
    
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    std::cout<<"Time: "<< duration <<'\n';
    
    return 0;
}
