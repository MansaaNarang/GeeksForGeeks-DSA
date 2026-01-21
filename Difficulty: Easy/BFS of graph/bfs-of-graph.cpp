class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>ans;
        vector<bool>vis(adj.size(),false);
        queue<int>q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(int neigh:adj[front]){
                if(!vis[neigh]){
                    q.push(neigh);
                    vis[neigh]=true;
                }
            }
        }
        return ans;
        
    }
};