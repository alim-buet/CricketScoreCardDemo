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
    // the world cup is the biggest event in cricket
    return 0;
}