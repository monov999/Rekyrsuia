#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;
double S(double x, int n)
{
	if (n < 1)
	{
		return 0;
	}
	else
	{
		return (cos(2 * n * x) / (4 * pow(n, 2) - 1)) + S(x, n - 1);
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double x;
	int n;
	cout << "Введите х и п: ";
	cin >> x >> n;
	cout << "S = " << S(x, n) << endl;
	return 0;
}
