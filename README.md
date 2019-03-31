**改修中のbeta版です．こちらの改修が終わり次第masterブランチにマージします**

# CP-lib
Competitive Programming Library

whesonが使ってる競プロライブラリをまとめてるものです．

全てが想定通りに動くようになってるかは保証できないので利用するときは自己責任でお願いします．

# ライブラリ一覧
## データ構造
- [x] [素集合データ構造(UnionFind)](/lib/DataStructure/union_find.cpp)
- ~~[x] [セグメント木](/lib/DataStructure/segment_tree.h)~~

## グラフ・木
- [x] [単一始点最短路(Dijkstra法)](/lib/Graph/dijkstra.cpp)
- ~~[x] [単一始点最短路(Bellman-Ford法)](/lib/Graph/bellman_ford.h)~~
- ~~[x] [最小全域木(Prim法)](/lib/Graph/prim.h)~~
- ~~[x] [最小全域木(Kruskal法)](/lib/Graph/kruskal.h)~~
- ~~[x] [最大流(Dinic法)](/lib/Graph/dinic.h)~~
- ~~[x] [二部グラフの判定](/lib/Graph/bipartite_graph.h)~~
- ~~[x] [二部マッチング](/lib/Graph/bipartite_matching.h)~~

## 数学
- ~~[x] [ユークリッドの互除法・最大公約数・最小公倍数](/lib/Math/euclidean.h)~~
- ~~[x] [拡張ユークリッドの互除法](/lib/Math/extended_gcd.h)~~
- ~~[x] [素数列挙(エラトステネスのふるい)](/lib/Math/sosuu.h)~~
- ~~[x] [順列・組み合わせ・重複組み合わせ](/lib/Math/countings.cpp)
- ~~[x] [フェルマーの小定理を用いたMOD内での除算を乗算に変換](/lib/Math/mod.h)~~

## 幾何
- ~~[x] [平面幾何のテンプレート](/lib/Geometry/Plane/template.h)~~
- ~~[x] [円](/lib/Geometry/Plane/circle.h)~~
- ~~[x] [多角形](/lib/Geometry/Plane/polygon.h)~~
- ~~[x] [凸多角形](/lib/Geometry/Plane/convex_polygon.h)~~

## 文字列
- [x] [ローリングハッシュ法](/lib/String/rolling_hash.cpp)
- [ ] 文字列検索(Suffix Array)
- [ ] 複数文字列検索(Aho-Corasick法)