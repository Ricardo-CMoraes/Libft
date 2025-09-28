# 📚 Libft – 42 C Library

Libft is the **first project at 42 School**, where students build their own C standard library from scratch.
The goal is to reimplement essential functions from `<string.h>`, `<ctype.h>`, and other standard libraries, while also developing additional utility functions that are commonly useful in C projects.

---

## 🚀 Features

* **Part 1 – Standard C Library Functions**

  * Functions from `<ctype.h>` (e.g. `ft_isalpha`, `ft_isdigit`, …)
  * Functions from `<string.h>` (e.g. `ft_strlen`, `ft_memcpy`, …)
  * Functions from `<stdlib.h>` (e.g. `ft_atoi`, …)

* **Part 2 – Additional Functions**

  * String manipulation helpers (`ft_substr`, `ft_strjoin`, `ft_split`, …)
  * Memory and string allocation (`ft_calloc`, `ft_strdup`, …)

* **Bonus Part – Linked List Functions**

  * Singly linked list implementation with utilities:

    * `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
    * `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
    * `ft_lstmap`.

---

## 📂 Project Structure

```
.
├── libft.h         # Header file with function prototypes
├── Makefile        # Compilation rules
├── *.c             # Implementation files
└── README.md       # Project documentation
```

---

## 🛠️ Compilation

You can compile the library using the provided **Makefile**:

```sh
make        # Compile libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile the library
```

This will generate a `libft.a` static library file.

---

## 📖 Usage

To use **libft** in your C project:

```c
#include "libft.h"

int main(void)
{
    char str[] = "Hello, Libft!";
    ft_putstr_fd(str, 1);
    return (0);
}
```

Compile with:

```sh
gcc main.c -L. -lft -o my_program
```

---

## ✅ Testing

It’s recommended to test Libft with external testers:

* [libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Libft War Machine](https://github.com/yyang42/moulitest)
* [libftTester](https://github.com/Tripouille/libftTester)

---

## 📜 License

This project is part of the **42 School curriculum** and is intended for educational purposes.
Feel free to use it as a reference, but do not copy-paste for your own evaluation 🚫.
