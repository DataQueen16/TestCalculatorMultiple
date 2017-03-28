#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input;
    input=1;
    int sum=0;

    cout << "Hello there!" << endl;
    cout << "Please enter a series of numbers and I will add them for you!:" << endl;
    cout << "When you are done, please enter 0 to exit." << endl;
    cin >> input;

   if(input!=0)
        {
        for(int x=1;x>0;x++)
        {
            sum+=input;
            cout << "Please enter your next number: " << endl;
            cin >> input;
                if(input==0)
                {
                cout << "Your total is " << sum << endl;
                break;
                }
        }
        }
    else
    {
        cout << "Sorry to see you go!" << endl;
    }
}
