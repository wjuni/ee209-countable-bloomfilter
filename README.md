# EE209 Countable Bloomfilter

## APIs
```
struct BloomFilter* bloomfilter_create (unsigned int size);
void bloomfilter_add (struct BloomFilter *bf, const char *key);
int bloomfilter_remove (struct BloomFilter *bf, const char *key);
int bloomfilter_check (struct BloomFilter *bf, const char *key);
```
