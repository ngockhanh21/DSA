// Danh sách liên kết đơn
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    Node* cur = head;
    while (cur) {
        cout << cur->data << ' ';
        cur = cur->next;
    }
    
    return 0;
}