/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
public:
    vector<int> LLTraversal(ListNode *head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return arr;
    }
};