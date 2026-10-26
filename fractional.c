#include <stdio.h>

int main()
{
    int W, weight = 0, n, i;

    printf("Enter capacity W: ");
    scanf("%d", &W);

    printf("Enter number of items: ");
    scanf("%d", &n);

    int w[n];
    float v[n], x[n], ratio[n];

    printf("Enter item weights:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &w[i]);

    printf("Enter item values:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &v[i]);

    for (i = 0; i < n; i++) {
        ratio[i] = v[i] / w[i];
        x[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                float temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = v[i];
                v[i] = v[j];
                v[j] = temp;

                int tempW = w[i];
                w[i] = w[j];
                w[j] = tempW;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (weight + w[i] <= W) {
            x[i] = 1;
            weight = weight + w[i];
        }
        else {
            x[i] = (float)(W - weight) / w[i];
            weight = W;
            break;
        }
    }

    float profit = 0;

    for (i = 0; i < n; i++) {
        profit = profit + x[i] * v[i];
    }

    printf("Fractions of items: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", x[i]);
    }

    printf("\nMaximum profit: %.2f\n", profit);

    return 0;
}