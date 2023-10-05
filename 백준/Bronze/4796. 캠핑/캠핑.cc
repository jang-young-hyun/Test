#include <iostream>
using namespace std;

int main() {
    int L, P, V;
    int caseNum = 0;

    while (true) {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0) {
            break;
        }

        caseNum++;
        int maxDays = (V / P) * L + min(V % P, L);

        cout << "Case " << caseNum << ": " << maxDays << endl;
    }

    return 0;
}
