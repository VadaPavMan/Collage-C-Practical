#include <iostream>
using namespace std;

int main() {

    double quiz, mid, final, avg;

    cout<< "Enter the Marks of Quiz: "; 
    cin >> quiz;

    cout<< "Enter the Marks of Mid-Term: "; 
    cin >> mid;

    cout<< "Enter the Marks of Finals: "; 
    cin >> final;

    avg = (quiz+mid+final)/3.0;

    if(avg >= 90.0)
    {
        cout<<"Your Grade is: A \t Congratulations"<<endl;
    }
    else if(avg >= 70.0 && avg < 90.0)
    {
        cout<<"Your Grade is: B \t Nice"<<endl;
    }
    else if(avg >= 50.0 && avg < 70.0)
    {
        cout<<"Your Grade is: C \t Do Better"<<endl;
    }
    else
    {
        cout<<"Your Grade is: F \t Failed"<<endl;
    }
    return 0;
}