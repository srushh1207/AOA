//rabin
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], pat[50];
    int i, j, n, m, found = 0;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter pattern: ");
    scanf("%s", pat);

    n = strlen(text);
    m = strlen(pat);

    for (i = 0; i <= n - m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pat[j])
                break;
        }

        if (j == m)
        {
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (found == 0)
        printf("Pattern not found\n");

    return 0;
}