
#include <stdio.h>


int multiple_of(int limit) {
    int total = 0;
    for (int i=0; i<limit; i++){
        if(i%3 ==0 || i%5==0){
            total+=i;
        }
    }
    return total;
}


int main(){
    int total = multiple_of(1000);
    printf("%d", total);

}