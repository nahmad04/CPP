#include <iostream>
using namespace std;

int main()
{

    //User enters integer number
    //Program write out if that number is even or odd
    //Datatypes: char, int, double, float, bool, void

    int number;
    cout << "Please enter a whole number:"; 
    cin >> number; 
    if(number % 3 == 0)
    {
        cout << "Your remainder is 0." << endl;	
    }
    else if (number % 3 == 1)
    {
        cout << "Your remainder is 1." << endl;	
    }
    else if (number % 3 == 2)
    {
        cout << "Your remainder is 2." << endl;	
    }
    cout << "Thanks! Goodbye.";

    return 0;
}
