#include <iostream>
#include <map>
#include <numeric>

using namespace std;

int main() {
	map<int, int> m;
	int in = -1;

	double keySum;
	double allSum;

	while (in)
	{
		cout << "KEY 값을 입력하세요 : ";
		cin >> in;
		if (in) m[in]++;
	}
	for (const auto& a : m)
	{
		cout << "[key] : " << a.first << ", [value] : " << a.second << endl;
	}
	cout << endl;
	
	keySum = accumulate(m.begin(), m.end(), 0, [](int a, const pair<int, int>& p) {return a + p.first;});
	allSum = accumulate(m.begin(), m.end(), 0, [](int a, const pair<int, int>& p) {return a + p.first * p.second;});

	cout << "[KEY] 정수의 합 : " << keySum << endl;
	cout << "모든 정수의 합 : " << allSum << endl;
	cout << endl;

	cout << "[KEY]의 평균 : " << keySum / m.size() << endl;
	cout << "모든 정수의 평균 : " << allSum / m.size() << endl;

	return 0;
}

