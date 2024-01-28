#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main() {
	int n;
	int r = 1; 

	cout << "Enter board size: "; cin >> n;
	cout << endl;

	for (int i = 1; i <= n * n; i++) // идём вперёд
	{
		for (int j = 1; j <= n * n; j++) // go to the right
		{
			cout << (r % 2 == j % 2 ? "* " : "  ");
			if (!(j % n)) r++; // if the square ends on the right
			r++;
		}
		if (!(i % n)) r++; // if the square ends on the down
		cout << endl;
	}
}