# libft

English: [README.md](README.md)

`libft` は、42 school の C 課題として作成された静的ライブラリです。標準ライブラリに近い基本関数を自作し、文字判定、メモリ操作、文字列操作、メモリ確保、ファイルディスクリプタへの出力、任意の単方向リスト操作を提供します。

## 機能

- `libft.a` という静的ライブラリをビルドします。
- 公開される関数宣言は `libft.h` にまとまっています。
- `ft_strlen`、`ft_memmove`、`ft_strdup`、`ft_split`、`ft_atoi` など、libc 風の関数を実装しています。
- `ft_substr`、`ft_strjoin`、`ft_itoa`、`ft_putnbr_fd` などの補助関数も含みます。
- Makefile の `bonus` ターゲットで、単方向 linked list 関数もビルドできます。

## 前提条件

- `cc` として使える C コンパイラ
- `make`
- `ar`（通常は C 開発ツールに含まれています）

## ビルド

mandatory 部分のライブラリをビルドします。

```sh
make
```

bonus の linked list 関数も含めてビルドします。

```sh
make bonus
```

生成された object file を削除します。

```sh
make clean
```

生成された object file と `libft.a` を削除します。

```sh
make fclean
```

最初からビルドし直します。

```sh
make re
```

## 使い方

C のソースファイルでヘッダーを include します。

```c
#include "libft.h"
```

このライブラリをリンクしてコンパイルします。

```sh
cc main.c -I. -L. -lft
```

bonus の linked list 関数を使う場合は、リンクする前に `make bonus` を実行してください。

## 実装されている関数

mandatory 関数:

- 文字判定と変換: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- メモリ操作: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- 文字列操作: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- 追加の文字列関数: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- ファイルディスクリプタへの出力: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

bonus の linked list 関数:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## プロジェクト構成

```text
.
├── Makefile
├── libft.h
├── ft_*.c
├── README.md
└── README.ja.md
```

## テスト

このリポジトリには専用のテストスイートは含まれていません。簡単なビルド確認は次のコマンドで行えます。

```sh
make re
make bonus
```

必要に応じて、小さなテスト用プログラムから `libft.a` をリンクし、使用する関数を確認してください。
