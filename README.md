# CP-lib
Competitive Programming Library

whesonが使ってる競プロライブラリをまとめてるものです．

全てが想定通りに動くようになってるかは保証できないので利用するときは自己責任でお願いします．

NeoSnippetで動くようになってるので，最初に謎の文字列があります．

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
