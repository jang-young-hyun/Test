#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	if (N % 4 != 0)
		return 0;

	while (N) {
		cout << "long ";
		N -= 4;
	}

	cout << "int" << endl;

	return 0;
}