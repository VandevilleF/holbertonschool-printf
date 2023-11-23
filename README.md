
# _printf



<p align="center">
<p> Language :</p>
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" />
</p>


## Description

This is a a custom version of the printf fuction, which have the most basic functionalities such as printing a string, a character and also printing an integer number.

## Requirements

- Ubuntu 20.04.06 LTS

- include header file ```"main.h"```

- compilation line : ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c```

- ```gcc (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0)```

## How it's working
- Using a composite data type such as struct which will contain the declaration of a char pointer *specifier and a pointer to a function called *print, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (specifier) and the format.



## Exemple

#### main file
```c
#include  "main.h"

int  main(void)
{
    _printf("Hello, World!");

return (0);

}
```

#### output

```sh
Hello,  World
```

## How to download it

- Use the command ```git clone``` in your Linux/Unix terminal.


```Bash
git  clone  https://github.com/VandevilleF/holbertonschool-printf.git
```

## How to start

- To compile the code, and execute it, enter this command line :

```Bash 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## How to try it
This is a main you can use to tested out the _ptrintf function

```C
#include  <stdio.h>
#include  <stdlib.h>
#include  <stdarg.h>
#include  <string.h>
#include  "main.h"
/**
* main - Entry point
*
* Return: Always 0
*/

int  main(void)
{

int  len;
int  len2;

len  =  _printf("Let's try to printf a simple sentence.\n");
len2  =  printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("%d, %d\n", len, len2);
len  =  _printf("Character:[%c]\n", 'H');
len2  =  printf("Character:[%c]\n", 'H');
_printf("%d, %d\n", len, len2);
len  =  _printf("String:[%s]\n", "I am a string !");
len2  =  printf("String:[%s]\n", "I am a string !");
_printf("%d, %d\n", len, len2);
len  =  _printf("Percent:[%%%%%%%%%%]\n");
len2  =  printf("Percent:[%%%%%%%%%%]\n");
_printf("%d, %d\n", len, len2);
len  =  _printf("falche Negative:[%d]\n", -762534);
len2  =  printf("vrai Negative:[%d]\n", -762534);
_printf("%d, %d\n", len, len2);
len  =  _printf("falchePositive:[%d]\n", 762534);
len2  =  printf("vrai Positive:[%d]\n", 762534);
_printf("%d, %d\n", len, len2);
len  =  _printf("falchePositive:[%i]\n", 762534);
len2  =  printf("vrai Positive:[%i]\n", 762534);
_printf("%d, %d\n", len, len2);
return (0);

}
```
compile and run the executable

```
user@ubuntu:~/holbertonschool-printf$  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
user@ubuntu:~/holbertonschool-printf$  ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
39, 39
Character:[H]
Character:[H]
14, 14
String:[I am a string !]
String:[I am a string !]
25, 25
Percent:[%%%%%]
Percent:[%%%%%]
16, 16
falche Negative:[-762534]
vrai Negative:[-762534]
26, 24
falchePositive:[762534]
vrai Positive:[762534]
24, 23
falchePositive:[762534]
vrai Positive:[762534]
24, 23
user@ubuntu:~/holbertonschool-printf$
```

You can open a man page and get more information about it.

```Bash
user@ubuntu:~/holbertonschool-printf$  man  ./man_3_printf
```

## Versions
This is the lastest version of our printf

**Last stable version :** (https://github.com/VandevilleF/holbertonschool-printf.git)

## Authors

*  **BOURHLEF  Yacine**  _alias_ [@Jak-Shyrak](https://github.com/Jak-Shyrak)
*  **VANDEVILLE Florian**  _alias_ [@VandevilleF](https://github.com/VandevilleF)

## License

No liscence - This project has been created for educational purpose for  [Holberton School FR](https://www.holbertonschool.fr/)