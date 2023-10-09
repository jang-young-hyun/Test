#include <iostream>
#include <vector>
#include <string>

class Stack {
private:
    std::vector<int> elements;

public:
    void push(int x) {
        elements.push_back(x);
    }

    int pop() {
        if (empty()) {
            return -1;
        }
        int top = elements.back();
        elements.pop_back();
        return top;
    }

    int size() {
        return elements.size();
    }

    bool empty() {
        return elements.empty();
    }

    int top() {
        if (empty()) {
            return -1;
        }
        return elements.back();
    }
};

int main() {
    int N;
    std::cin >> N;

    Stack stack;

    for (int i = 0; i < N; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int x;
            std::cin >> x;
            stack.push(x);
        } else if (command == "pop") {
            std::cout << stack.pop() << std::endl;
        } else if (command == "size") {
            std::cout << stack.size() << std::endl;
        } else if (command == "empty") {
            std::cout << stack.empty() << std::endl;
        } else if (command == "top") {
            std::cout << stack.top() << std::endl;
        }
    }

    return 0;
}
