#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    static int i = 0;
    static int len = 0;
    if (len == 0) {
        len = strlen(str);
    }
    if (i < len/2) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
        i++;
        reverseString(str);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    reverseString(str);
    printf("Reverse string is: %s", str);
    return 0;
}
