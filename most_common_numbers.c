
#include <stdio.h>

int main() {

  char *filename = "/Users/kristiyandilov/C_sandbox-1/test.txt";
  char line[256];

  FILE *fp = fopen(filename, "r");

  if (fp == NULL) {

    printf("Error could not open file");
    return 1;
  }

  while (fgets(line, sizeof(line), fp)) {
    printf("%s", line);
  }
}
