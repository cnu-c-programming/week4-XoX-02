#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[] = { 'A', 'z', '5', '!' };
    int n = sizeof(chars) / sizeof(chars[0]);

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        printf("%c - alpha:%d digit:%d upper:%c lower:%c\n",
            ch, 
            isalpha(ch),  // 알파벳 여부
            isdigit(ch),  // 숫자 여부
            toupper(ch),  // 대문자 변환
            tolower(ch)); // 소문자 변환
    }

    return 0;
}