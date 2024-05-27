

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int* create_array_map(char* str) {

  int* ascii_array = malloc(256 * sizeof(int));  

  for (int t = 0; str[t] != '\0'; t++) {

    int asciiValue = (int)str[t];
    ascii_array[asciiValue] += 1;
  }
  return ascii_array;
}

bool anagram(char first_string, char second_string) {


  int* first_arr = create_array_map(first_string); 
  int* second_arr = create_array_map(second_string); 

}
