# libft

日本語版: [README.ja.md](README.ja.md)

`libft` is a 42 school C project that rebuilds a small standard-library-style toolkit as a static library. It provides character checks, memory utilities, string helpers, allocation helpers, file-descriptor output functions, and optional singly linked-list utilities.

## Features

- Builds a static library named `libft.a`.
- Provides public declarations through `libft.h`.
- Includes reimplementations of common libc-style functions such as `ft_strlen`, `ft_memmove`, `ft_strdup`, `ft_split`, and `ft_atoi`.
- Includes extra utility functions such as `ft_substr`, `ft_strjoin`, `ft_itoa`, and `ft_putnbr_fd`.
- Supports bonus linked-list functions through the `bonus` Makefile target.

## Prerequisites

- A C compiler available as `cc`
- `make`
- `ar`, usually included with standard C development tools

## Build

Build the mandatory library:

```sh
make
```

Build the library with bonus linked-list functions:

```sh
make bonus
```

Clean generated object files:

```sh
make clean
```

Remove generated object files and `libft.a`:

```sh
make fclean
```

Rebuild from scratch:

```sh
make re
```

## Usage

Include the header in your C source:

```c
#include "libft.h"
```

Compile your program with this library:

```sh
cc main.c -I. -L. -lft
```

If your program uses the linked-list bonus functions, run `make bonus` before linking.

## Available Functions

Mandatory functions:

- Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Memory utilities: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- String utilities: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Additional string helpers: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- File-descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

Bonus linked-list functions:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Project Structure

```text
.
├── Makefile
├── libft.h
├── ft_*.c
├── README.md
└── README.ja.md
```

## Testing

This repository does not include a dedicated test suite. A quick build check is:

```sh
make re
make bonus
```

You can also link `libft.a` from a small test program to verify the specific functions you use.
