#include<stdio.h>

void toq(int n){
    if(n > 0)
        toq(n - 1);
    if(n % 2)
        printf("%d ", n);
}

int main() {

    int n;
    printf("n = "); scanf("%d", &n);

    toq(n - 1);

return 0;    
}