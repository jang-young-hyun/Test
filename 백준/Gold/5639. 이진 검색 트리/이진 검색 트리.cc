#include <iostream>
#include <vector>

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

// 후위 순회 함수
void postOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    
    // 왼쪽 서브트리 순회
    postOrder(root->left);
    
    // 오른쪽 서브트리 순회
    postOrder(root->right);
    
    // 현재 노드의 키 출력
    std::cout << root->key << '\n';
}

// 전위 순회 결과로 이진 검색 트리 구성
Node* buildBST(std::vector<int>& preorder, int& index, int min, int max) {
    if (index >= preorder.size()) {
        return nullptr;
    }
    
    int key = preorder[index];
    
    // 현재 노드의 키가 범위 내에 있는지 확인
    if (key > min && key < max) {
        Node* root = new Node(key);
        index++;
        
        // 왼쪽 서브트리 구성 (키의 범위는 (min, key)로 제한)
        root->left = buildBST(preorder, index, min, key);
        
        // 오른쪽 서브트리 구성 (키의 범위는 (key, max)로 제한)
        root->right = buildBST(preorder, index, key, max);
        
        return root;
    }
    
    return nullptr;
}

int main() {
    std::vector<int> preorder;
    int value;
    
    // 입력 받기
    while (std::cin >> value) {
        preorder.push_back(value);
    }
    
    int index = 0;  // 전위 순회 인덱스
    Node* root = buildBST(preorder, index, -1e9, 1e9);  // 키의 범위는 -1e9에서 1e9로 설정
    
    // 후위 순회 결과 출력
    postOrder(root);
    
    return 0;
}
