template <typename T>
class UnionFind {
    private:
        vector<int> parent;  // 親
        vector<int> rank;    // 木の深さ

        // 重み付きUnionFindでのみ利用
        vector<T> diffWeight; // 親ノードとの値の差
    public:
        UnionFind(int n);          // n要素で初期化
        int Find(int x);           // 木の根を返す
        void Unite(int x, int y);  // xとyの属する集合を併合
        bool Same(int x, int y);   // xとyが同じ集合に属するか否か

        // 重み付きUnionFindでのみ利用
        void Unite(int x, int y, T w);
        T Weight(int x);      // xの重みを返す
        T Diff(int x, int y); // xとyの差を返す
};

    template <typename T>
UnionFind<T>::UnionFind(int n) : parent(n), rank(n), diffWeight(n, 0)
{
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

template <typename T>
int UnionFind<T>::Find(int x) {
    if (parent[x] == x) {
        return x;
    } else {
        int r = Find(parent[x]);
        diffWeight[x] += diffWeight[parent[x]];
        return parent[x] = r;
    }
}

template <typename T>
void UnionFind<T>::Unite(int x, int y) {
    x = Find(x);
    y = Find(y);
    if (x == y) return;

    if (rank[x] < rank[y]) {
        parent[x] = y;
    } else {
        parent[y] = x;
        if (rank[x] == rank[y]) rank[x]++;
    }
}

template <typename T>
bool UnionFind<T>::Same(int x, int y) { return Find(x) == Find(y); }

template <typename T>
void UnionFind<T>::Unite(int x, int y, T w){
    w += Weight(x); w -= Weight(y);
    x = Find(x); y = Find(y);
    if(x == y) return;

    if(rank[x] < rank[y]) swap(x, y), w = -w;

    if(rank[x] == rank[y]) rank[x]++;
    parent[y] = x;

    diffWeight[y] = w;
}

template <typename T>
T UnionFind<T>::Weight(int x){
    Find(x);
    return diffWeight[x];
}

template <typename T>
T UnionFind<T>::Diff(int x, int y){
    return Weight(y) - Weight(x);
}
