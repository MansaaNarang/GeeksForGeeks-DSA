// User function Template for C++


 class Solution {
  public:
  
    void bfs(int start, vector<vector<int>> &adjL, vector<int> &vis) {
        queue<int> q;
        vis[start] = 1;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto it : adjL[node]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
    }

    int numProvinces(vector<vector<int>> adj, int V) {
      
        vector<vector<int>> adjL(V);

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjL[i].push_back(j);
                }
            }
        }

        vector<int> vis(V, 0);
        int count = 0;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                count++;
                bfs(i, adjL, vis);
            }
        }

        return count;
    }
};
