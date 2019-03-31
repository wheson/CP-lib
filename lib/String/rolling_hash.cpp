// Rabin-Karp string search algorithm
class RollingHash{
    private:
      using ULL = unsigned long long;
      int n;
      const ULL mod = 1ULL << 63;
      const ULL base = 1000000007ULL;
      vector<ULL> hash, power;
    public:
      RollingHash(string s){
          n = s.size();
          hash.assign(n+1, 0ULL);
          power.assign(n+1, 0ULL);
          power[0] = 1ULL; 
          for(int i = 0; i < n; i++){
              power[i+1] = power[i] * base % mod;
              hash[i+1] = (s[i] + hash[i] * base) % mod;
          }
      }
      ULL GetHash(int l, int r){
          return ((hash[r] - hash[l] * power[r-l]) % mod + mod) % mod;
      }
};