#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // Запитуємо користувача про розмір масиву
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    // Виділяємо пам'ять для масиву
    int* arr = (int*)malloc(n * sizeof(int));

    // Запитуємо користувача ввести елементи масиву
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Шукаємо мінімальний та максимальний елементи та їхні позиції
    int* minPtr = arr;
    int* maxPtr = arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < *minPtr) {
            minPtr = arr + i;
        }
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }
    // Знаходимо відстань між позиціями мінімального та максимального елементів
    int distance = maxPtr - minPtr;
    // Виводимо результати
    printf("\nМінімальний елемент: %d (позиція %ld)\n", *minPtr, minPtr - arr);
    printf("Максимальний елемент: %d (позиція %ld)\n", *maxPtr, maxPtr - arr);
    printf("Відстань між позиціями: %d\n", distance);
    // Звільняємо виділену пам'ять
    free(arr);
    return 0;
}
