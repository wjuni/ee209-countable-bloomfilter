#include <stdio.h>
#include "countable_bloomfilter.h"

int main() {
  // Initialize Bloomfilter with size = 32
  printf("> Initialize Bloomfilter.\n");
  struct BloomFilter *bf = bloomfilter_create(32);


  // Add two elements
  printf("> Add Two elements.\n");
  bloomfilter_add(bf, "Hello");
  bloomfilter_add(bf, "Hi");

  // Check elements
  printf("> Check elements.\n");
  printf("How many 'Hello' in bloomfilter? %d\n", bloomfilter_check(bf, "Hello"));
  printf("How many 'Hi' in bloomfilter? %d\n", bloomfilter_check(bf, "Hi"));
  printf("How many 'Bye' in bloomfilter? %d\n", bloomfilter_check(bf, "Bye"));

  // Remove one element
  printf("> Remove one element.\n");
  bloomfilter_remove(bf, "Hi");

  // Check elements
  printf("> Check elements.\n");
  printf("How many 'Hello' in bloomfilter? %d\n", bloomfilter_check(bf, "Hello"));
  printf("How many 'Hi' in bloomfilter? %d\n", bloomfilter_check(bf, "Hi"));
  printf("How many 'Bye' in bloomfilter? %d\n", bloomfilter_check(bf, "Bye"));

  return 0;
}
