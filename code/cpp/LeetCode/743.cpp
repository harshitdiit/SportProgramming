class Solution {
public:
    void dfs(vector<vector<pair<int,int>>> &graph, vector<int> &visited, vector<int> &cost, int root){
        visited[root]=1;
        for(auto V: graph[root]){
            if(!visited[V.first] || cost[V.first]>cost[root]+V.second){
                cost[V.first]=cost[root]+V.second;
                dfs(graph, visited, cost, V.first);
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> graph(n, vector<pair<int,int>>());
        for(auto V : times){
            graph[V[0]-1].push_back(pair<int, int>(V[1]-1, V[2]));
        }
        k=k-1;
        vector<int> visited(n,0), cost(n, INT_MAX);
        cost[k]=0;
        dfs(graph, visited, cost, k);
        int result=INT_MIN;
        for(int i=0; i<n; i++){
            if(!visited[i])
                return -1;
            else
                result=max(result, cost[i]);
        }
        return result;
    }
};