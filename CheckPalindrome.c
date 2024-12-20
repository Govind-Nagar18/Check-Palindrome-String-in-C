#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int palindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("%s, is a palindrome String\n", str);
    }
    else
    {
        printf("%s, is not a palindrome String\n", str);
    }

    return 0;
}
