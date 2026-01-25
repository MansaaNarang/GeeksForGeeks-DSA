/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        if(head==nullptr)
        return -1;
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
            if(fast->next){
                fast=fast->next;
            }
            if(slow==fast)
            break;
        }
        if(slow!=fast)
        return -1;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            
        }
        return fast->data;
    }
};