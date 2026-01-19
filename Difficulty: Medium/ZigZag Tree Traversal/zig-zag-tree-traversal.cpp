/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>result;
        if(!root)
        return result;
        queue<Node*>q;
        q.push(root);
        int level=0;
       
        while(!q.empty()){
            int n=q.size();
            vector<int>currlevel(n);
            for(int i=0;i<n;i++){
                Node* node=q.front();
                q.pop();
                int index=(level%2==0)?i:(n-1-i);
                currlevel[index]=node->data;
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
            }
            for(int val:currlevel)
            result.push_back(val);
            level++;
        }
        return result;
        
    }
};