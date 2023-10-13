#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    
    int check = 0;
    int num = strlen(s);
    
    for(int i = 0; i< num ; i++){
        if(check == 0 && s[i] == ')')
            return false;
        
        if(s[i] == '(')
            check++;
        else if(s[i] == ')')
            check--;
    }
    

    return check == 0 ? true : false;
    
}

