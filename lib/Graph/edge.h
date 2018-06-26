template <typename T>
struct Edge{
    int to; T cost;
    Edge(int to, T cost) : to(to), cost(cost) {}
};
template <typename T>
using Edges = vector<Edge<T>>;
template <typename T>
using AdjList = vector<Edges<T>>;
