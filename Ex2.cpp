#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int arrM[] = {5, 6, 8, 7, 9, 1};
    int arrN [] = {9, 7, 4, 3, 2, 5, 10, 12, 13};
    
    int x = 0;
    
    bool checkM = false;
    bool checkN = false;
    
    printf("Input Number: ");
    scanf("%d", &x);
    
    for(int i = 0; i < 6; i++) {
        if(arrM[i] == x){
            checkM = true;
        }
    }
    
    for(int i = 0; i < 9; i++) {
        if(arrN[i] == x){
            checkN = true;
        }
    }
    
    if(checkM == true) {
        printf("Number %d Found in arrM...\n", x);
    }else{
        printf("Number %d Not found in arrM !!!\n", x);
    }
    
    if(checkN == true) {
        printf("Number %d Found in arrN...\n", x);
    }else{
        printf("Number %d Not found in arrN !!!\n", x);
    }
    
    return 0;
}
