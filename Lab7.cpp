#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void pVec(vector<int> v) {
    for (auto vc : v)
    {
        cout << vc << " ";
    }
    cout << endl;
}

int main()
{
    using namespace std;

    vector<int> bigVec, smallVec;
    bigVec = { 2, 5, 3, 2, 3, 6, 1, 8 };
    smallVec = { 4, 1, 35, 2, 45, 4, 21, 4 };
    cout << "[before]" << endl;
    cout << "big Vec: ";
    pVec(bigVec);
    cout << "small Vec: ";
    pVec(smallVec);

    sort(bigVec.begin(), bigVec.end());
    sort(smallVec.begin(), smallVec.end());
    if (bigVec < smallVec) bigVec.swap(smallVec);

    cout << "[after]" << endl;
    cout << "big Vec: ";
    pVec(bigVec);
    cout << "small Vec: ";
    pVec(smallVec);
}
