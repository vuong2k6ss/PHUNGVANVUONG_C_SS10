#include <stdio.h>

int main() {
    int x, y;
    printf("nhap so dong: ");
    scanf("%d", &x);
    printf("nhap so cot: ");
    scanf("%d", &y);
    int arr[x][y];
    printf("nhap gia tri cho mang 2 chieu:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("nhap arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int temp;
    for (int i = 0; i < x - 1; i++) {
        for (int j = i + 1; j < x; j++) {
            if (arr[i][i] > arr[j][j]) {
                temp = arr[i][i];
                arr[i][i] = arr[j][j];
                arr[j][j] = temp;
            }
        }
    }
    printf("mang 2 chieu sau khi sap xep duong cheo chinh:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

