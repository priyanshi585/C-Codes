//design a program for creating a machine that accepts the string always ending with 101 

#include<iostream>
using namespace std;

bool endsWith101(string str) {
    int state = 0;  // Initial state

    for (char c : str) {
        switch (state) {
            case 0:
                if (c == '1')
                    state = 1;
                break;
            case 1:
                if (c == '0')
                    state = 2;
                break;
            case 2:
                if (c == '1')
                    state = 3;
                break;
            case 3:
                if (c == '0')
                    state = 2;
                else if (c == '1')
                    state = 1;
                break;
        }
    }
return state == 3;
}

int main()
{
    string input;
    cout << "Enter the string: ";
    cin >> input;

    if (endsWith101(input))
        cout << "Accepted! String ends with '101'." << endl;
    else
        cout << "Rejected! String does not end with '101'." << endl;

    return 0;
}