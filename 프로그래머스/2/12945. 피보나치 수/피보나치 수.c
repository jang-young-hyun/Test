#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    
    for(int i = 2; i<= n; i++){
        nextTerm = (t1+t2) % 1234567;
        t1 = t2;
        t2 = nextTerm;
    }
    
    return nextTerm;
}