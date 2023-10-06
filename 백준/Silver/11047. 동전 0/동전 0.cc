#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> Ai(N);

    for (int i = 0; i < N; i++) {
        cin >> Ai[i];
    }

    int countCoin = 0;

    for (int i = N - 1; i >= 0; i--) {
        if (K >= Ai[i]) {
            countCoin += K / Ai[i];
            K %= Ai[i];
        }
    }

    cout << countCoin << endl;

    return 0;
}
