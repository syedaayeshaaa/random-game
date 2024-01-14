#include <iostream>
using namespace std;

int main()
{
	bool ships[4][4]{
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
	};

	int hits = 0;
	int noOfTurns = 0;

	while (hits < 4) {
		int rows, columns;
		cout << "Selecting Coordinates: \n";

		cout << "Choose a row between 0 and 3: \n";
		cin >> rows;

		cout << "Choose a column between 0 and 3: \n";
		cin >> columns;

		if (ships[rows][columns]) {
			ships[rows][columns] = 0;

			hits++;
			cout << "Hit! " << hits << "are left. " << endl; 
		} 
		else {
			cout << "Miss! " << endl; 
			noOfTurns++; 
		}
	}
	cout << "Victory !!! \n\n You won in " << noOfTurns << " turns!";
	return 0; 
}