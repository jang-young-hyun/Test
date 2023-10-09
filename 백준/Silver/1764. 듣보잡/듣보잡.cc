#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<string> unheard;
    set<string> unseen;
    vector<string> unheard_and_unseen;

    // 듣도 못한 사람의 이름을 입력받아 set에 저장
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if (unheard.count(name) > 0) {
            unheard_and_unseen.push_back(name);
        }
    }

    cout << unheard_and_unseen.size() << endl;
    sort(unheard_and_unseen.begin(), unheard_and_unseen.end());
    for (string name : unheard_and_unseen) {
        cout << name << endl;
    }

    return 0;
}
