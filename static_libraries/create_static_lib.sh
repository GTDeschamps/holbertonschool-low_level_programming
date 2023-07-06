#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-isupper.c
ar -rc liball.a 0-isupper.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-memset.c
ar -rc liball.a 0-memset.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-strcat.c
ar -rc liball.a 0-strcat.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-atoi.c
ar -rc liball.a 100-atoi.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-isdigit.c
ar -rc liball.a 1-isdigit.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-memcpy.c
ar -rc liball.a 1-memcpy.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-strncat.c
ar -rc liball.a 1-strncat.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strchr.c
ar -rc liball.a 2-strchr.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strlen.c
ar -rc liball.a 2-strlen.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strncpy.c
ar -rc liball.a 2-strncpy.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-islower.c
ar -rc liball.a 3-islower.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-puts.c
ar -rc liball.a 3-puts.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-strcmp.c
ar -rc liball.a 3-strcmp.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-strspn.c
ar -rc liball.a 3-strspn.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-isalpha.c
ar -rc liball.a 4-isalpha.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-strpbrk.c
ar -rc liball.a 4-strpbrk.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-strstr.c
ar -rc liball.a 5-strstr.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-abs.c
ar -rc liball.a 6-abs.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-strcpy.c
ar -rc liball.a 9-strcpy.o
ranlib liball.a

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c
ar -rc liball.a _putchar.o
ranlib liball.a
