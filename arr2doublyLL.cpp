#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node* back;
    
    node(int value) {
        data = value;
        next = nullptr;
        back = nullptr;
    }
    
    node(int value, node* next1, node* back1) {
        data = value;
        next = next1;
        back = back1;
    }
};

node* convert2LL(vector<int> &nums) {
    node* head = new node(nums[0]);
    node* prev = head;
    
    for(int i = 1; i<nums.size(); i++) {
        node* temp = new node(nums[i], nullptr, prev);
        prev-> next = temp;
        prev = temp;
    }
    return head;
}

void print(node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

}

int main() {
    
    vector<int> nums = {2,4,5,7,8,9};
    node* head = convert2LL(nums);
    print(head);
    
    return 0;
}
