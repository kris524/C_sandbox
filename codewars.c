
#include <stdio.h>

int findMin(int numbers[], int length) {

    int min_value = numbers[0];

    for(int i=0; i<length; i++){
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
    }
    return min_value;
}

int findMax(int numbers[], int length) {

    int max_value = numbers[0];

    for(int i=0; i<length; i++){
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }
    return max_value;
}


int main(){
    int numbers[4] = {2,3,10, 1};

    int res = findMin(numbers, 4);
    int res2 = findMax(numbers, 4);

    printf("Result: %d\n", res);
    printf("Result: %d\n", res2);


    return 0;

}