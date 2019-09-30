# EE209 Countable Bloomfilter

## APIs
```
struct BloomFilter* bloomfilter_create (unsigned int size);
void bloomfilter_add (struct BloomFilter *bf, const char *key);
int bloomfilter_remove (struct BloomFilter *bf, const char *key);
int bloomfilter_check (struct BloomFilter *bf, const char *key);
```

## Your Task
### 1. Clone repository (Download sources)
```
$ git clone https://github.com/wjuni/ee209-countable-bloomfilter
$ cd ee209-countable-bloomfilter
```
### 2. Fill in the blanks
You need to fill in blanks in file `countable_bloomfilter.c`.
```
$ emacs countable_bloomfilter.c
```
### 3. Compile and run
Just type `make` into bash shell to compile `example`, and type `./example` to run the example.
```
$ make
$ ./example
```
