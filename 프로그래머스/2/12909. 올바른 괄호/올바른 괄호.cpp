#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int check = 0;
    
    for(int i = 0; i< s.length() ; i++){
        if(check == 0 && s[i] == ')')
            return false;
        
        if(s[i] == '(')
            check++;
        else if(s[i] == ')')
            check--;
    }
    

    return check == 0 ? true : false;
}