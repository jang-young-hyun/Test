#include <iostream>
#include <string>

using namespace std;

int main() {
    string expression;
    cin >> expression;

    int result = 0;
    int num = 0;
    bool subtract = false; // 현재 뺄셈을 수행 중인지 여부

    for (char c : expression) {
        if (c == '-' || c == '+') {
            if (subtract) {
                result -= num;
            } else {
                result += num;
            }

            if (c == '-') {
                subtract = true;
            }

            num = 0; // 숫자 초기화
        } else {
            num = num * 10 + (c - '0'); // 숫자 누적
        }
    }

    // 마지막 숫자 처리
    if (subtract) {
        result -= num;
    } else {
        result += num;
    }

    cout << result << endl;

    return 0;
}
