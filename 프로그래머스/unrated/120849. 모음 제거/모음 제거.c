#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool check(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(len+1);
    
    int j = 0;
    
    for(int i = 0; i< len; i++){
        if(!check(my_string[i])){
            answer[j] = my_string[i];
            j++;
        }
    }
    
    answer[j] = '\0';
    
    return answer;
}