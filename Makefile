CC=gcc

.PHONY: clean
all: example

example: example.c countable_bloomfilter.c  murmurhash.c
	$(CC) -o $@ -g -Wall -Werror -Wno-unused-variable -pedantic -std=c99 $^

clean:
	rm -f example
