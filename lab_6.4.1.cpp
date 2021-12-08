#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Input(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Sum(int* a, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			S += a[i];
	return S;
}

int Max(int* a, const int n)
{
	int max = a[0];
	int imax = 0;
	for (int i = 1; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
	return imax;
}

int Min(int* a, const int n)
{
	int min = a[0];
	int imin = 0;
	for (int i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	return imin;
}

int Dob(int* a, const int n)
{
	int D = 1;
	int start = Min(a, n);
	int end = Max(a, n);
	if (start > end)
	{
		int tmp = start;
		start = end;
		end = tmp;
	}
	for (int i = 1 + start; i < end; i++)
	{
		D *= a[i];
	}
	return D;
}

void Sort(int* a, const int n)
{
	for (int i = 1; i < n; i++)
	{
		int tmp = a[i];
		int j = 0;
		while (tmp > a[j])
			j++;
		for (int k = i - 1; k >= j; k--)
			a[k + 1] = a[k];
		a[j] = tmp;
	}
}

int main()
{
	int n;
	cout << " " << "n = ";
	cin >> n;
	int* a = new int[n];

	Input(a, n);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;
	cout << "D = " << Dob(a, n) << endl;

	Sort(a, n);
	Print(a, n);

	return 0;
}
