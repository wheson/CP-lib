class BipartiteGraph {
    private:
        vector<vector<int>> graph;
        int V; // 頂点数
        vector<int> color; // 頂点iの色(1 or -1)
        bool Dfs(int v, int color);

    public:
        BipartiteGraph(int n);
        void AddEdge(int f, int t);
        bool Run(); // 2部グラフか否か
};

BipartiteGraph::BipartiteGraph(int n):
    graph(vector<vector<int>>(n)),
    V(n),
    color(vector<int>(n))
{}

void BipartiteGraph::AddEdge(int f, int t){
    graph[f].push_back(t);
    graph[t].push_back(f);
}

bool BipartiteGraph::Dfs(int v, int c){
    color[v] = c;
    for(auto x: graph[v]){
        if(color[x] == c) return false;
        if(color[x] == 0 && !Dfs(x, -c)) return false;
    }

    return true;
}

bool BipartiteGraph::Run(){
    for(int i = 0; i < V; i++){
        if(color[i] == 0){
            if(!Dfs(i, 1)){
                return false;
            }
        }
    }
    return true;
}