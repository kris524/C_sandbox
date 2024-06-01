
#include <stdio.h>
#include <stdlib.h>

int main() {

  char *filename = "/Users/kristiyandilov/C_sandbox-1/test.txt";
  char line[256];

  FILE *fp = fopen(filename, "r");

  if (fp == NULL) {

    printf("Error could not open file");
    return 1;
  }

  int actual_size = 0;
  int initial_capacity = 10;
  int *array = (int *)malloc(initial_capacity * sizeof(int));

  while (fgets(line, sizeof(line), fp)) {
    array[actual_size] = atoi(line);
    actual_size++;
  }
}
