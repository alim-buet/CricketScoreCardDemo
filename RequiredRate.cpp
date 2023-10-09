// It is now in a different branch where i will add some features

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target, overrem;
    cout << "Target: ";

    cin >> target;

    cout << "How many over is remaining?: ";
    cin >> overrem;
    cout << "Required Run Rate: " << (double)target / overrem << endl;
    // Added win percentage featuresdouble)target / overrem
    cout << "Win percentage for batting team: " << (10 - round((double)target / overrem)) * 10 << "%" << endl;
    return 0;
}