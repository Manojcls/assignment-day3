#include <stdio.h>
#include <string.h>

void reverse_string(char*);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse_string(str);

    printf("Reversed string is: %s\n", str);

    return 0;
}

void reverse_string(char *str)
{
    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
        i++;
        j--;
    }
}

