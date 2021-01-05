#include <iostream>
using namespace std;

int main()
{
	char way[20] = { ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	int i = 0, j = 0;
	int turn = 1;
	int Dice;
	srand((unsigned int)time(NULL));

	cout << "Please press Enter to start the game ...";

	while (true)
	{
		system("pause>N");
		Dice = (rand() % 6) + 1;
		system("cls");
		if (turn == 1)
		{
			// 0 1 2 3 4 5 .... 9 A B C D E F
			system("color F4");
			if (i + Dice < 20)
			{
				way[i] = ' ';
				i = i + Dice;

				if (i == j)
				{
					way[0] = '#';
					j = 0;
				}

				way[i] = '*';

				if (i == 19)
				{
					cout << endl << "Player 1 Wins" << endl;
					break;
				}
			}
			turn = 2;
		}
		else if (turn == 2)
		{
			system("color F1");
			if (j + Dice < 20)
			{
				way[j] = ' ';
				j = j + Dice;

				if (j == i)
				{
					way[0] = '*';
					i = 0;
				}

				way[j] = '#';

				if (j == 19)
				{
					cout << endl << "Player 2 Wins" << endl;
					break;
				}
			}
			turn = 1;
		}
		cout << "Dice = " << Dice << endl;
		cout << "----------------------------------------" << endl;
		for (int x = 0; x < 20; x++)
		{
			cout << way[x] << "|";
		}
		cout << endl;
		cout << "----------------------------------------" << endl;
	}



	system("pause>N");
	return 0;
}
