#include<stdio.h>

void even(int n){
    if(n % 2 == 0)
        printf("%d ", n);
    if(n > 1)
        even(n - 1);
}

int main() {

    int n;
    printf("n = "); scanf("%d", &n);

    even(n - 1);

return 0;    
}