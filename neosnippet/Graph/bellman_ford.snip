snippet bellman_ford
alias bellman
abbr 負の閉路を探す
 template <typename T>
 struct Edge {
     int from, to;
     T cost;
     Edge(int to, T cost) : from(-1), to(to), cost(cost) {}
     Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
 };

 template <typename T>
 using Edges = vector<Edge<T>>;
 template <typename T>
 using AdjList = vector<Edges<T>>;

 template <typename T>
 class BellmanFord {
     private:
         T INF = numeric_limits<T>::max() / 10;
         int V;
         int nodeNum;
         AdjList<T> adj;  // adj[始点][動的配列で始点から伸びる枝]
         vector<bool> negative;  // negative[n] := nに到達するまでに負閉路があるか

     public:
         explicit BellmanFord(int n);
         vector<T> dist;  // 最短経路
         void AddEdge(int f, int t, T c);
         void Run(int f);
         bool HasNegativeCycle(int n);
 };

 template <typename T>
 BellmanFord<T>::BellmanFord(int n) : 
     V(n + 1),
     nodeNum(n),
     adj(V),
     negative(V, false),
     dist(V, INF) 
     {}

 template <typename T>
 void BellmanFord<T>::AddEdge(int f, int t, T c) { adj[f].push_back(Edge<T>(t, c)); }

 template <typename T>
 void BellmanFord<T>::Run(int firstNode) {
     dist[firstNode] = 0;
     for (int loop = 0; loop < nodeNum - 1; loop++) {
         for (int i = 0; i < nodeNum; i++) {
             for (const Edge<T>& e : adj[i]) {
                 if (dist[i] == INF) continue;
                 if (dist[e.to] > dist[i] + e.cost) {
                     dist[e.to] = dist[i] + e.cost;
                 }
             }
         }
     }

     for (int loop = 0; loop < nodeNum; loop++) {
         for (int i = 0; i < nodeNum; i++) {
             for (const Edge<T>& e : adj[i]) {
                 if (dist[i] == INF) continue;
                 if (dist[e.to] > dist[i] + e.cost) {
                     dist[e.to] = dist[i] + e.cost;
                     negative[e.to] = true;
                 }
                 if (negative[i] == true) {
                     negative[e.to] = true;
                 }
             }
         }
     }
 }

 template <typename T>
 bool BellmanFord<T>::HasNegativeCycle(int n) { return negative[n]; }
