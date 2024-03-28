
#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>
#include <math.h>

int compare(const void * a, const void * b){
    return (*(int *)a - *(int *) b );
}


int sum(const int numbers[/*length*/], int length)
{
    qsort(numbers, length, sizeof(int), compare);
    int sum = 0;

    for(int i = 1; i<length-1; i++){
        sum+= numbers[i];
    }

    return sum;

} 


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


void powers_of_two (size_t n, uint64_t powers[n + 1])
{
   int num = 2;
   for(int i=0; i<n+1; i++){
        
        powers[i] = pow(num, i);
   }
//    return powers;
}




int main(){
    int numbers[5] = {2,3,10, 1, 1};

    int res = findMin(numbers, 4);
    int res2 = findMax(numbers, 4);

    printf("Result: %d\n", res);
    printf("Result: %d\n", res2);

    // int size = sizeof(numbers) / sizeof(numbers[0]);
    // qsort(numbers, size, sizeof(int), compare);

    int sum1 = sum(numbers, 5);
    printf("Result: %d\n", sum1);



    return 0;

    int n = 2;
    uint64_t new_numbers = powers_of_two(n, numbers);

   printf("\nthe list is: \n");
   for(int n = 0 ; n < 3; n++ ) {   
      printf("%d ", new_numbers[n]);
   }


}