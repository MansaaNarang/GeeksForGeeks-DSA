/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  bool isleaf(Node* node){
      return node && node->left==NULL && node->right==NULL;
      
  }
  void addleftboundary(Node* root,vector<int>&res){
      Node* curr=root->left;
      while(curr){
          if(!isleaf(curr))
          res.push_back(curr->data);
          if(curr->left)
          curr=curr->left;
          else
          curr=curr->right;
      }
  }
  void addleaves(Node* root,vector<int>&res){
      if(!root)
      return;
      if(isleaf(root)){
          res.push_back(root->data);
          return;
      }
      addleaves(root->left,res);
      addleaves(root->right,res);
  }
  void addrightboundary(Node* root,vector<int>&res){
      Node* curr=root->right;
      vector<int>temp;
      while(curr){
          if(!isleaf(curr))
          temp.push_back(curr->data);
          if(curr->right)
          curr=curr->right;
          else
          curr=curr->left;
      }
      for(int i=temp.size()-1;i>=0;i--)
      res.push_back(temp[i]);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>res;
        if(!root)
        return res;
        if(!isleaf(root))
        res.push_back(root->data);
        addleftboundary(root,res);
        addleaves(root,res);
        addrightboundary(root,res);
        return res;
    }
};