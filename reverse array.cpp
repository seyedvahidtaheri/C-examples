#include <iostream>
using namespace std;

int main()
{
	int Ar[10] = {3,5,11,14,21,25,26,31,33,50};

	int n = 10, temp;

	for (int i = 0; i < n/2; i++)
	{
		temp = Ar[i];
		Ar[i] = Ar[n - i - 1];
		//{50, 5, 11, 14, 21, 25, 26, 31, 33, 50}
		Ar[n - i - 1] = temp;
		//{50, 5, 11, 14, 21, 25, 26, 31, 33, 3}
	}



	for (int i = 0; i < n; i++)
	{
		cout << Ar[i] << " , ";
	}


	return 0;
}