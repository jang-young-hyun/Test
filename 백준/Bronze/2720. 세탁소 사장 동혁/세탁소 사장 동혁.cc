#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int C;
        cin >> C;

        int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

        // 쿼터(Quarter, $0.25)의 개수 계산
        quarters = C / 25;
        C %= 25;

        // 다임(Dime, $0.10)의 개수 계산
        dimes = C / 10;
        C %= 10;

        // 니켈(Nickel, $0.05)의 개수 계산
        nickels = C / 5;
        C %= 5;

        // 페니(Penny, $0.01)의 개수 계산
        pennies = C;

        // 결과 출력
        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }

    return 0;
}
