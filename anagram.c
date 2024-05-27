

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int *create_array_map(char *str) {

  int *ascii_array = malloc(256 * sizeof(int));

  for (int t = 0; str[t] != '\0'; t++) {

    int asciiValue = (int)str[t];
    ascii_array[asciiValue] += 1;
  }
  return ascii_array;
}

bool anagram(char* first_string, char* second_string) {

  int *first_arr = create_array_map(first_string);
  int *second_arr = create_array_map(second_string);

  for (int i = 0; i < 256; i++) {
    if (first_arr[i] != second_arr[i]) {
      return false;
    }
  }
  free(first_arr);
  free(second_arr);
  return true;
}

int main() { 

  bool res = anagram("ABC", "BCAD"); // returns 0
  printf("%d\n", res);


  bool res2 = anagram("ABC", "BCA"); // returns 1
  printf("%d\n", res2);


}
