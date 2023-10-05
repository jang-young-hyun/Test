#include <iostream>
#include <vector>

using namespace std;

int main() {
	int money;
	cin >> money;
	int change = 1000 - money;
	int count = 0;

	while (change) {
		if (change >= 500)
			change -= 500;
		else if (change >= 100)
			change -= 100;
		else if (change >= 50)
			change -= 50;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 1)
			change -= 1;

		count++;
	}

	cout << count << endl;

	return 0;
}