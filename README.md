# `_printf`

### **_Prototype:_**

int _printf(const char *, ...);

######  `_printf` is a customized C function based on the original function `printf`. This is our first big proyect as Holberton School students C#17.
### **Examples**



| Input | Output |
| ------ | ------ |
| _printf("%s\n", 'Hello!'); | Hello! |
| _printf("The last letter of Holberton is %c\n", 'n'); | The last letter of Holberton is n|
| _printf("%d\n"); | 7000 |
| _printf("My hand has %i fingers\n", 5); | My hand has 5 fingers |
| _printf("Address: %p\n", addr); | Address: 0x7ffe637541f0 |

### **General Requirements**

 - Allowed editors: vi, vim, emacs
 - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 - You are not allowed to use global variables
 - No more than 5 functions per file
 
### **Authorized functions and macros**
``write (man 2 write)``
``malloc (man 3 malloc)``
``free (man 3 free)``
``va_start (man 3 va_start)``
``va_end (man 3 va_end)``
``va_copy (man 3 va_copy)``
``va_arg (man 3 va_arg)``

### **Mandatory Tasks**
- [x] Write function that produces output with conversion specifiers c, s, and %.
- [x] Handle conversion specifiers d, i.
- [x] Create a man page for your function.

### **Advanced Tasks**
- [x] Handle conversion specifier b.
- [x] Handle conversion specifiers u, o, x, X.
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
- [x] Handle conversion specifier S.
- [x] Handle conversion specifier p.
- [ ] Handle flag characters +, space, and # for non-custom conversion specifiers.
- [ ] Handle length modifiers l and h for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the 0 flag character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier r that prints the reversed string.
- [x] Handle the custom conversion specifier R that prints the rot13'ed string.
- [ ] All above options should work well together.
 

### Files

| File |  Description  |
|------|---------------|
| _printf.c | Contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);.  The format string is composed of zero or more directives. See man 3 printf for more detail.  _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.  |
|_putchar.c|Contains the function _putchar, which writes a character to stdout. |
|main.h|Contains all function prototypes used for _printf. |
|man_3_printf|Manual page for the custom _printf function. |
|print_chars.c|Contains the functions print_c, print_s, print_S, and print_r which handle the conversion specifiers c, s, S, and r, respectively, as well as hex_print, which prints a char's ascii value in uppercase hex. |
|_print_numbers.c|Contains the functions print_i and print_d, which handle the conversion specifiers i and d, respectively. |
|_print_hex.c|Contains the functions print_hex, which prints an unsigned int in hexidecimal form, print_x, print_X, and _print_p, which handle the conversion specifiers x, X, and p, respectively. |
|print_unsigned_int.c|Contains the functions print_u, print_o, and print_b, which handle the conversion specifiers u, o, and b, respectively.|
|_print_rot13.c|Contains the function print_R, which handles the conversion specifier R.|

### **By:**
#### [Franco Trenche](https://www.linkedin.com/in/franco-trenche-375a33209/)
#### [Juan Manuel Reyes](https://www.linkedin.com/in/juan-reyes-469185201/)
