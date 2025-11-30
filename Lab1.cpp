#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
    vector<int> v1;
    for (int i = 0; i < 20; i++)
    {
        v1.push_back(10);
        cout << "size: " << v1.size() <<
            ", capacity: " << v1.capacity() << endl;
    }
}
