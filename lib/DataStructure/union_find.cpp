// UnionFindを構築します
// 使用例:
// UnionFind uni(n);
// cout << uni.Same(1, 2) ? "YES" : "NO" << endl; <- NO
// uni.Unite(1, 2);
// cout << uni.Same(1, 2) ? "YES" : "NO" << endl; <- YES
// cout << uni.GetSize(1) << endl;                <- 2
class UnionFind
{
    private:
      vector<int> par;
      vector<int> rank;
      vector<int> sz;

    public:
      UnionFind(int n) : par(n), rank(n, 0), sz(n, 1)
      {
          iota(par.begin(), par.end(), 0);
      }
      int Find(int x)
      {
          if (par[x] == x) return x;
          else
          {
              int r = Find(par[x]);
              return par[x] = r;
          }
      }
      bool Unite(int x, int y)
      {
          x = Find(x);
          y = Find(y);
          if (x == y) return false;

          if (rank[x] < rank[y]) swap(x, y);
          par[y] = x;
          if (rank[x] == rank[y]) rank[x]++;
          sz[x] += sz[y];
          return true;
      }
      bool Same(int x, int y)
      {
          if (Find(x) == Find(y)) return true;
          else return false;
      }
      int GetSize(int x)
      {
          return sz[Find(x)];
      }
};