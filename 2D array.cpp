#include <iostream>
using namespace std;

/*
Students 30
lessons 10

name ? 
lessons ? 
*/

int main()
{
	float stu[30][10];
	string name[30];


	for (int i = 0; i < 30; i++)
	{
		cout << "Enter name " << i + 1 << " = ";
		cin >> name[i];
		for (int j = 0; j < 10; j++)
		{
			cout << "Student " << i + 1 << " Lesson " << j + 1 << " = " ;
			cin >> stu[i][j];
		}
	}


	for (int i = 0; i < 30; i++)
	{
		cout << name[i] << " = ";
		for (int j = 0; j < 10; j++)
		{
			cout << stu[i][j] << " , ";
		}
		cout << endl;
	}

	return 0;
}


