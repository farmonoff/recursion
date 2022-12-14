#include<stdio.h>

int len(int n){
    if(n < 9){
        return 1;
    }
    return 1 + len(n / 10); 
}


int main() {

    int n;
    printf("n = "); scanf("%d", &n);

    printf("%d xonali", len(n));

return 0;    
}