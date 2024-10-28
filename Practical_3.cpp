#include <iostream>
using namespace std;

int main()
{

    int number[3];
    int greatest;

    cout << "Enter Any 3 Number." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter The Number " << i + 1 << ": ";
        cin >> number[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (number[i] >= number[i - 1])
        {
            greatest = number[i];
        }
    }

    cout << "The Greatest Number is: " << greatest << endl;

    return 0;
}