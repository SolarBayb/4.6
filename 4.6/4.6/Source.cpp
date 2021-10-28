#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double B, S;
	int n, k;
	k = 1;
	B = 1;
	while (k <= 20)

	{
		S = 1;
		n = 1;
		while (n <= 25-k)

		{
			S *= (k - n) / (k + n) + 1;
			n++;

		}
		B *= S;
		k++;

	}
	cout << B << endl;
	B = 1;
	k = 1;
	do
	{
		S = 1;
		n = 1;
		do
		{
			S *= (k - n) / (k + n) + 1;
			n++;
		} while (n <= 25-k);
		B *= S;
		k++;
	} 
	while (k <= 20);
	cout << B << endl;
	B = 1;
	for (k = 1; k <= 20; k++)

	{
		S = 1;
		for (n = 1; n <= 25-k; n++)

		{
			S *= (k - n) / (k + n) + 1;

		}
		B *= S;

	}
	cout << B << endl;
	B = 1;
	for (k = 20; k >= 1; k--)

	{
		S = 1;
		for (n = 25-k; n >= 1; n--)

		{
			S *= (k - n) / (k + n) + 1;
		}
		B *= S;
	}
	cout << B << endl;
	return 0;
}
