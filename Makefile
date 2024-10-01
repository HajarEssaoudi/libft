NAME = libft.a
CC=gcc
AR=ar
RA=ranlib
CFLAGS= -c -Wall -Werror -Wextra
 all: libft.a

libft.a:
	$(CC) $(CFLAGS) *.c
	$(AR) -rc libft.a *.o
	$(AR) -t libft.a
	$(RA) libft.a
	rm -rf *.o

clean:
	rm -rf *.o
fclean:
	rm -rf *.o
	rm -rf *.a
re:
	ls
