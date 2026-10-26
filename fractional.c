//fractional
#include <stdio.h>

int main()
{
    int W, weight = 0, n, i;

    printf("Enter capacity W: ");
    scanf("%d", &W);

    printf("Enter number of items: ");
    scanf("%d", &n);

    int w[n];
    float v[n], x[n];

    printf("Enter item weights:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &w[i]);

    printf("Enter item values in the same ratio order:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &v[i]);

    for (i=0;i<n;i++)
        x[i]=0;

    for (i=o;i<n;i++)
    {
        if(weight+w[i]<=W)
        {
            x[i]=1
            weight +=w[i];
        }
        else
        {
            x[i]=(W-weight)/w[i];
            break;
        }
    }
    printf("Fractions of items : ")
    for(i=0;i<n;i++)
        printf("%f", x[i]);

    return 0;

}