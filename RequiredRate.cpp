
// After first portion of the lectures i am now here.. going to commit 'em for commit no.2

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
    cout << "As i am going for third commit, i wish all the best to both of the teams" << endl;


    // Added win percentage features
    cout << "Win percentage for batting team: " << (10 - round((double)target / overrem)) * 10 << "%" << endl;

    return 0;
}