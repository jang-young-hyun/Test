#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int A = 0, B = 0, C = 0;
    
    // 버튼 A (5분)을 누르는 횟수 계산
    A = T / 300;
    T %= 300;
    
    // 버튼 B (1분)을 누르는 횟수 계산
    B = T / 60;
    T %= 60;
    
    // 버튼 C (10초)을 누르는 횟수 계산
    C = T / 10;
    T %= 10;
    
    // T가 0이 아니면 버튼으로 정확히 시간을 맞출 수 없음
    if (T != 0) {
        cout << "-1" << endl;
    } else {
        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}
