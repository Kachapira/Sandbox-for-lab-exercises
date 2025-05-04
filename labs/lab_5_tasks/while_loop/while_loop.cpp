//program uses while loops
#include <string>
#include <iostream>
using namespace std;

//main function
int main()
{

    cout << "Dear user, please input a value between (5 - 10): " << endl;
    int value;
    cin >> value;

    //will also use an array for assistance
    int variable [6]
    while(value >= 5 && value <= 10)
    {

        //using if-statements for output
        if(value < 5 && value > 10)
        {
            cout << "You entered " << value << ". please enter a number between 5 & 10:"  << endl;
            int value;
            cin >> value;
        }
    }
    
}