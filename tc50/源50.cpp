#include<iostream>
using namespace std;
int main()
{
	int i, n, sum;
	sum = 0;
	cout << "input 10 number" << endl;
	for (i = 1; i <= 10; i++)
	{
		cout << i << ":";
		cin >> n;
		if (n < 0)
			break;
		sum += n;
	}
	cout << "The result:" << sum << endl;
}