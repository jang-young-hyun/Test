#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 수의 최대 공약수(GCD)를 계산하는 함수
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// 배열의 숫자들에 대한 최소 공배수(LCM)를 계산하는 함수
long long solution(int arr[], size_t arr_len) {
    long long answer = arr[0]; // 초기값을 첫 번째 숫자로 설정

    for (int i = 1; i < arr_len; i++) {
        int current = arr[i];
        int common_gcd = gcd(answer, current);

        // 두 숫자의 LCM을 계산
        answer = (long long)(answer * current) / common_gcd;
    }

    return answer;
}