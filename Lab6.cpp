#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> v1(5);
	v1.push_back(3);

	cout << v1.capacity() << endl;
	cout << v1.size() << endl;
	cout << endl;

	v1.at(0) = 10;

	for (int i : v1)
	{
		cout << i << endl;
	}
}
