#include<stdio.h>
#include<string.h>

void abc(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'o' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'U' || arr[i] == 'I' || arr[i] == 'O'){
            arr[i] = '-';
        }
    }
}

int main() {

    char text[] = {};
    printf("So'z kiriting:"); scanf("%[^\n]s", text);

    abc(text);
    printf("%s", text);

return 0;    
}