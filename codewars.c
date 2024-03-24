
#include <stdio.h>

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



   printf("\nAfter sorting the list is: \n");
   for(int n = 0 ; n < 5; n++ ) {   
      printf("%d ", numbers[n]);
   }

    return 0;

}