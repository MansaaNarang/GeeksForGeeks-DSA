class Solution {
    void solve(int ind, ArrayList<ArrayList<Integer>> adj, boolean[] visited, ArrayList<Integer> res) {
        visited[ind] = true;
        res.add(ind);

        for (int neigh : adj.get(ind)) {
            if (!visited[neigh]) {
                solve(neigh, adj, visited, res);
            }
        }
    }
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {
        // code here
        boolean[] visited = new boolean[adj.size()];
        ArrayList<Integer> res = new ArrayList<>();

        solve(0, adj, visited, res);
        return res;
    }
}