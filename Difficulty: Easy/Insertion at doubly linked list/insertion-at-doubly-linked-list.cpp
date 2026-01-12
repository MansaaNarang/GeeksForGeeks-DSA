/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        int cnt=0;
        Node* newNode=new Node(x);
        Node* temp=head;
        while(temp!=nullptr){
            if(cnt==p){
                newNode->next=temp->next;
                newNode->prev=temp;
                if(temp->next!=nullptr){
                    temp->next->prev=newNode;
                }
                temp->next=newNode;
                break;
            }
            cnt++;
            temp=temp->next;
        }
        return head;
    }
};