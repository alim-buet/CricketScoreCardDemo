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

    return 0;
}