# CP-lib
Competitive Programming Library

whesonが使ってる競プロライブラリをまとめてるものです．

全てが想定通りに動くようになってるかは保証できないので利用するときは自己責任でお願いします．

# ライブラリ一覧
## データ構造
- [x] [素集合データ構造(UnionFind)](/lib/DataStructure/union_find.h)
- [x] [セグメント木](/lib/DataStructure/segment_tree.h)

## グラフ・木
- [x] [単一始点最短路](/lib/DataStructure/segment_tree.h)


## 数学

## 幾何

## 文字列

# NeoSnippetで利用する方法
NeoSnippetのcpp.snipファイルの先頭に

```
include CP-lib/*.snip
```

と記述して，NeoSnippetのsnippetsディレクトリに``git clone``してください．

snippetsディレクトリはvimのconfig内に

```
let g:neosnippet#snippets_directory = '~/.config/nvim/snippets'
```

と記述していれば``~/.config/nvim/snippets``にあるかと思います．

NeoSnippetの詳細は[公式ドキュメント](https://github.com/Shougo/neosnippet.vim/blob/master/doc/neosnippet.txt)を見てください．
