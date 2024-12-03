#include <stdio.h>

int main() {
    int n, m;
    printf("nhap so dong n: ");
    scanf("%d", &n);
    printf("nhap so cot m: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    for (int j = 0; j < m; j++)
        for (int i = 0; i < n - 1; i++)
            for (int k = 0; k < n - 1 - i; k++)
                if (arr[k][j] > arr[k + 1][j]) {
                    int temp = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temp;
                }
    printf("\nmang sau khi sap xep theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}

