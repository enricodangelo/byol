#include <stdio.h>

void sayHelloWhile(int n) {
  while (n > 0) {
    puts("Hello, world!");
    n--;
  }
}

void sayHelloFor(int n) {
  for (int i = 0; i < n; i++) {
    puts("Hello, world!");
  }
}

int main(int argc, char** argv) {
  int n = 5;
  puts("WHILE:");
  sayHelloWhile(n);
  puts("FOR:");
  sayHelloFor(n);
  return 0;
}
