#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_rand_nums(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 9;
    }    
}

int Findmax(int arr[], int n, int index) {
    if(index == n - 1) {
        return index;
    }

    int max = Findmax(arr, n, index + 1);

    if(arr[max] < arr[index]) {
        printf("%d ", arr[max]);
        return max;
    }
    printf("%d ", arr[index]);
    return index;
}

int main() {
    srand(time(0));

    int n, index = 0;
    printf("n = "); scanf("%d", &n);
    int arr[n];

    fill_rand_nums(arr, n);
    printf("\n%d\n", Findmax(arr, n, index));

return 0;    
}