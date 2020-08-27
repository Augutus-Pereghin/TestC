#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  printf("Hello World\n");
  char* name = readline("enter your name: ");
  printf("Hello, %s!" , name);
  return 0;
}