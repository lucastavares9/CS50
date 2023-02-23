
#include <stdio.h>

int main(void)
{
    // Ask name and print hello world if name asked 
    char answer = get_string("what's your name? ");
    printf("hello, %s\n", answer);