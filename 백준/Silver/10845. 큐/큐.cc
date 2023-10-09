#include <iostream>
#include <queue>
#include <string>

class Queue {
private:
    std::queue<int> elements;

public:
    void push(int x) {
        elements.push(x);
    }

    int pop() {
        if (empty()) {
            return -1;
        }
        int front = elements.front();
        elements.pop();
        return front;
    }

    int size() {
        return elements.size();
    }

    bool empty() {
        return elements.empty();
    }

    int front() {
        if (empty()) {
            return -1;
        }
        return elements.front();
    }

    int back() {
        if (empty()) {
            return -1;
        }
        return elements.back();
    }
};

int main() {
    int N;
    std::cin >> N;

    Queue queue;

    for (int i = 0; i < N; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int x;
            std::cin >> x;
            queue.push(x);
        } else if (command == "pop") {
            std::cout << queue.pop() << std::endl;
        } else if (command == "size") {
            std::cout << queue.size() << std::endl;
        } else if (command == "empty") {
            std::cout << queue.empty() << std::endl;
        } else if (command == "front") {
            std::cout << queue.front() << std::endl;
        } else if (command == "back") {
            std::cout << queue.back() << std::endl;
        }
    }

    return 0;
}
