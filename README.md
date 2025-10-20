# 📚 Libft

Libft is the first project at [42] school that introduces you to the fundamentals of C programming and the process of building your own static library.  
You reimplement standard C library functions and add your own utilities to use in future projects.

---
## 🧠 Purpose

This project helps you:
- Understand how C library functions work under the hood.
- Improve your skills in memory management and pointer manipulation.
- Learn how to create, compile, and use a **static library** (`.a` file).
- Write clean and reusable code following **Norminette** standards.

---

### 🔹 Mandatory Part
Core functions that reproduce standard C library behavior.

| Category | Functions |
|-----------|------------|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| String manipulation | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` |
| Memory handling | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi`, `ft_itoa` |
| Character case | `ft_tolower`, `ft_toupper` |
| File descriptors | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |

---

### 🔸 Bonus Part
Additional functions to handle **linked lists**.

| Category | Functions |
|-----------|------------|
| Creation & addition | `ft_lstnew_bonus`, `ft_lstadd_front_bonus`, `ft_lstadd_back_bonus` |
| Information | `ft_lstsize_bonus`, `ft_lstlast_bonus` |
| Deletion & iteration | `ft_lstdelone_bonus`, `ft_lstclear_bonus`, `ft_lstiter_bonus`, `ft_lstmap_bonus` |

---
## ⚙️ Compilation

To compile the library:
```bash
make
```
This creates the static library file:
libft.a

make clean     # Remove object files
make fclean    # Remove object files and libft.a
make re        # Rebuild the entire library

---

## 🧩 Usage
To use your library in another project:
```bash
gcc main.c -L. -lft -I .
```
In your C file:
```bash
#include "libft.h"
```
## 🧪 Example
```C
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```
Compile with:
```bash
gcc main.c libft.a -I .
```

