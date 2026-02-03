#include <stdio.h>

int main() {
    int n, i;
    int temp[100];

    printf("Enter number of readings: ");
    scanf("%d", &n);

    printf("Enter temperature readings:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }

    printf("Stored temperature readings:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
