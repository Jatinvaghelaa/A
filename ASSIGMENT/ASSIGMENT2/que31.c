#include <stdio.h>
#include <string.h>

void string_reverse(char str[]) {
    int len = strlen(str);
    for(int i=0; i<len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int string_is_palindrome(char str[]) {
    int len = strlen(str);
    for(int i=0; i<len/2; i++) {
