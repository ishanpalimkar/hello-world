#include<stdio.h>

int main()
{
    // add functionality to get a msg from user and print it
    char str[MAX_LIMIT];
    printf("Enter the msg you want to print");
    fgets(str, MAX_LIMIT, stdin);
    printf("%s", str);
    return 0;
}
