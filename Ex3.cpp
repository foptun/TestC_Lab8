// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int number[] = {8, 5, 1, 2, 5, 9, 4, 4, 8, 5, 1, 1, 8, 9, 4, 5, 1, 8, 5, 1};
    
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i = 0; i < 20; i++){
        
        arr[number[i] - 1]++;
        
    }
    
    for(int i = 0; i < 9; i++){
        if(arr[i] > 0) {
            printf("%d: ", (i+1));
            for(int j = 0; j < arr[i]; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}
