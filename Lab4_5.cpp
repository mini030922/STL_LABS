#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> v1(5);
	v1.push_back(3);

	cout << v1.capacity() << endl;
	cout << v1.size() << endl;
}
