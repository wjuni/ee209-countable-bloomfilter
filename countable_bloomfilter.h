#ifndef COUNTABLE_BLOOMFILTER_H
#define COUNTABLE_BLOOMFILTER_H

struct BloomFilter {
  int size;
  char *arr;
};

struct BloomFilter* bloomfilter_create (unsigned int size);

void bloomfilter_destroy (struct BloomFilter *bf);

void bloomfilter_add (struct BloomFilter *bf, const char *key);

int bloomfilter_remove (struct BloomFilter *bf, const char *key);

int bloomfilter_check (struct BloomFilter *bf, const char *key);

#endif
