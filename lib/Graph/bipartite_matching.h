class BipartiteMatching{
    private:
        int n; // 頂点数
        vector<vector<int>> graph;
        vector<int> match;
        vector<int> used;
        bool Dfs(int v);
    public:
        BipartiteMatching(int n);
        void AddEdge(int u, int v);
        int Run();
        int Match(int u);
};

BipartiteMatching::BipartiteMatching(int n): 
    n(n),
    graph(n),
    match(n),
    used(n)
{}

void BipartiteMatching::AddEdge(int u, int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

bool BipartiteMatching::Dfs(int v){
    used[v] = true;
    for(int u : graph[v]){
        int w = match[u];
        if(w == -1 || (!used[w] && Dfs(w))){
            match[v] = u;
            match[u] = v;
            return true;
        }
    }
    return false;
}

int BipartiteMatching::Run(){
    int res = 0;
    fill(begin(match), end(match), -1);
    for(int v = 0; v < n; ++v){
        if(match[v] == -1){
            fill(begin(used), end(used), false);
            if(Dfs(v)) res++;
        }
    }
    return res;
}
