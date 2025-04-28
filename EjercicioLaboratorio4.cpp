#include <iostream>

using namespace std;

int main()
{

    // Declare variable : old
    int old = 0;

    // Introduce the old
    cout << "Let introduce your old" << endl;
    cin >> old;

    // Verify old
    if (old < 5)
    {
        cout << "Children can enter for free";
    }
    else if (old >= 5 && old <= 12)
    {
        cout << "Admission is for children $5";
    }
    else if (old > 12)
    {
        cout << "Admission is for children $10";
    }
    else
    {
        cout << "Thank you :)";
    }

    return 0;
}
