#include <stdio.h>

int string_length(char str[]) {
    int len = 0;
    for(int i=0; str[i]!='\0'; i++) {
        len++;
    }
    return len;
}

int main() {
    char str[] = "Hello World!";
    int len = string_length(str);
    printf("Length of string \"%s\" is %d\n", str, len);
    return 0;
}
