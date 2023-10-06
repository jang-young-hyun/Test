#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int checkVinyl = 0;

    while (N > 0) {
        if (N % 5 == 0) {
            checkVinyl += N / 5;
            N = 0;
        }
        else {
            N -= 3;
            checkVinyl++;
        }
    }

    if (N < 0)
        cout << -1 << endl;
    else
        cout << checkVinyl << endl;

    return 0;
}
