#include <stdio.h>
#define HEIGHT 5

int main(void){
for (int i = 1;i <= 5; i++){
    for(int j = 1; j<= 5; j++){
        int s = j * i;
        printf("%d\t", s);
    }
    printf("\n");
}
     return 0;
}
