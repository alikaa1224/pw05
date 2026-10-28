#include <stdio.h>

int main(void){
    double mas[8];
    double cumulative[8];
    double sum = 0;
    for(int i = 0; i <8 ; i++){
        if (i < 3){
            mas[i] = 1;
        }
        else{
            mas[i] = mas[i - 2] + mas[i - 3];
            
        }
        sum += mas[i];
        cumulative[i] = sum;
    } 
    for (int j = 0; j < 8; j++) {
        printf("%.2f ", mas[j]);
    }
    printf("\n"); 
    for (int j = 0; j < 8; j++) {
        printf("%.2f ", cumulative[j]);
    }
    printf("\n"); 

    return 0;
}
