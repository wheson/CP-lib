// 順列・組合せ・重複組合せを計算します
// 構築 O(N)，計算結果取得 O(1)
// 使用例:
// Countings ct(MAX_N, MOD);
// cout << ct.Permutation(10, 5) << endl;        <- 10P5 = 30240
// cout << ct.Combination(10, 5) << endl;        <- 10C5 = 252
// cout << ct.HomogeneousProduct(10, 5) << endl; <- 10H5 = 2002
class Countings
{
  private:
    int mod;
    vector<long long> factList, invList;
    long long Pow(long long x, long long n)
    {
        long long ret = 1;
        while (n > 0)
        {
            if (n & 1) ret = ret * x % mod;
            x = x * x % mod;
            n >>= 1;
        }
        return ret;
    }

  public:
    Countings(int sz, int mod) : mod(mod), factList(sz + 1), invList(sz + 1)
    {
        factList[0] = 1;
        for (int i = 1; i < factList.size(); i++)
        {
            factList[i] = factList[i - 1] * i % mod;
        }
        invList[sz] = Pow(factList[sz], mod - 2);
        for (int i = sz - 1; i >= 0; i--)
        {
            invList[i] = invList[i + 1] * (i + 1) % mod;
        }
    }
    long long Permutation(int n, int r)
    {
        if (r < 0 || n < r) return 0;
        return factList[n] * invList[n - r] % mod;
    }
    long long Combination(int n, int r)
    {
        if (r < 0 || n < r) return 0;
        return factList[n] * invList[r] % mod * invList[n - r] % mod;
    }
    long long HomogeneousProduct(int n, int r){
        if (n < 0 || r < 0) return 0;
        return (r == 0 ? 1 : Combination(n + r - 1, r));
    }
};