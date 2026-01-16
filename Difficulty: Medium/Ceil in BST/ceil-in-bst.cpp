class Solution {
  public:
  void solve(Node* root,int x,int &a,int &b,int &cnt){
      if(root==NULL){
          return;
      }
      solve(root->left,x,a,b,cnt);
      if(cnt==0 && x<root->data){
          a=root->data;
      }
      if(root->data==x){
          a=root->data;
      }
      else if(x<root->data && x>b){
          a=root->data;
      }
      b=root->data;
      cnt++;
      solve(root->right,x,a,b,cnt);
      return;
  }
    int findCeil(Node* root, int x) {
        // code here
        int a=-1;
        int b=-1;
        int cnt=0;
        solve(root,x,a,b,cnt);
        return a;
    }
};
