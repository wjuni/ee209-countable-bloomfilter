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
  printf("Does 'Hello' exist in bloomfilter? %s\n", bloomfilter_check(bf, "Hello") ? "Maybe" : "No");
  printf("Does 'Hi' exist in bloomfilter? %s\n", bloomfilter_check(bf, "Hi") ? "Maybe" : "No");
  printf("Does 'Bye' exist in bloomfilter? %s\n", bloomfilter_check(bf, "Bye") ? "Maybe" : "No");

  // Remove one element
  printf("> Remove one element.\n");
  bloomfilter_remove(bf, "Hi");

  // Check elements
  printf("> Check elements.\n");
  printf("Does 'Hello' exist in bloomfilter? %s\n", bloomfilter_check(bf, "Hello") ? "Maybe" : "No");
  printf("Does 'Hi' exist in bloomfilter? %s\n", bloomfilter_check(bf, "Hi") ? "Maybe" : "No");
  printf("Does 'Bye' exist in bloomfilter? %s\n", bloomfilter_check(bf, "Bye") ? "Maybe" : "No");

  return 0;
}
