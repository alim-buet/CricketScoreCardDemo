// It is now in a different branch where i will add some features
// first time pushing both locally and globally

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Run: ";
    int run;
    cin >> run;
    cout << "Over: ";
    int over;
    cin >> over;
    cout << "Runrate: ";

    cout << ((double)run / over) << endl;
    // projected score added
    cout << "Projected Score: " << (int)(((double)run / over) * 50) << endl;

    // The below portion is a new feature added in different branch named featsection
    if (((int)(((double)run / over) * 50)) >= 300)
    {
        cout << "congo! You guys are doing great!!" << endl;
    }

    else
    {
        cout << "C'mon man , It is 2023! Gear up!!" << endl;
    }

    return 0;
}