/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>>result;
        if(root==nullptr)
        return result;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                Node* curr=q.front();
                q.pop();
                level.push_back(curr->data);
                if(curr->left!=nullptr)
                q.push(curr->left);
                if(curr->right!=nullptr)
                q.push(curr->right);
            }
            result.push_back(level);
        }
        return result;
    }
};