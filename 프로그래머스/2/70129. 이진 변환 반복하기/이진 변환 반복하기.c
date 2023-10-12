#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char str[150000];

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = answer[1] = 0;
    
    strcpy(str,s);
    int num = 0, length = strlen(str);
    
    while(1){
        answer[0]++;
        num = 0;
        
        for(int i = 0; i< length; i++){
            if(str[i] == '0') 
                answer[1]++;
            else 
                num++;
        }
        
        if(num == 1)
            break;
        
        length = 0;
        
        while(num != 0){
            str[length] = num % 2 + '0';
            num /= 2;
            length++;
        }
    }
    
    
    return answer;
}