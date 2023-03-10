#!//bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
rc -rc liball.a *.o
ranlib liball.a
