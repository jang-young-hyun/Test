#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> Pi(N);

    for (int i = 0; i < N; i++) {
        cin >> Pi[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (Pi[i] > Pi[j])
                swap(Pi[i], Pi[j]);
        }
    }

    int total_time = 0;
    int waiting_time = 0;

    for (int i = 0; i < N; i++) {
        waiting_time += Pi[i];
        total_time += waiting_time;
    }

    cout << total_time << endl;

    return 0;
}
