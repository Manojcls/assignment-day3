#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, j, len;
    int max_freq = 0;
    char max_char;

    printf("Enter any string: ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        int freq = 1;

        for(j = i+1; j < len; j++)
        {
            if(str[i] == str[j] && str[i] != ' ')
            {
                freq++;
            }
        }

        if(freq > max_freq)
        {
            max_freq = freq;
            max_char = str[i];
        }
    }

    printf("Highest frequency character is '%c' with frequency %d.\n", max_char, max_freq);

    return 0;
}

