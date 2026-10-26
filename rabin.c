//rabin
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], pat[50];
    int i, j, n, m, found = 0;
    int d = 256, q = 101;
    int h = 1, p = 0, t = 0;

    printf("Enter text: ");
    scanf("%99s", text);

    printf("Enter pattern: ");
    scanf("%49s", pat);

    n = strlen(text);
    m = strlen(pat);

    if (m > n)
    {
        printf("Pattern not found\n");
        return 0;
    }

    for (i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for (i = 0; i < m; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + text[i]) % q;
    }

    for (i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            for (j = 0; j < m; j++)
            {
                if (text[i + j] != pat[j])
                    break;
            }

            if (j == m)
            {
                printf("Pattern found at position: %d\n", i+1);
                found = 1;
            }
        }

        if (i < n - m)
        {
            t = (d * (t - text[i] * h) + text[i + m]) % q;

            if (t < 0)
                t += q;
        }
    }

    if (found == 0)
        printf("Pattern not found\n");

    return 0;
}
