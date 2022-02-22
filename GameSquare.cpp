#include <iostream>
#include <time.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{asdasd
	srand(time(NULL));
	const int n = 5;
	int playerPos[n][n], aiPos[n][n],ai,player,h=4,m=0;
	int d = 0, e = 4;
	int field[n][n];
	while (true) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (h == i && m==j) {
					cout <<setw(2)<< "!";
					if (h == d && m == e) {
						int d = 1;
					}
				}
				else if (d==i && e==j)
				{
					cout <<setw(2)<< "@";

				}
				else
				{
					cout << setw(2) << '0';
				}
			}cout << endl;
		}
		if (d == 1) {
			cout << "WIN!";
			break;
		}
		cin >> player;
		switch (player)
		{
		case 8:
			h-=1;
			break;
		case 2:
			h+=1;
			break;
		case 6:
			m += 1;
			break;
		case 4:
			m -= 1;
			break;
		case 5:
			break;
		default:
			break;
		}
	}
	return 0;
}
