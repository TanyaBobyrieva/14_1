#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // �������� ����������� ��� ����� ������
    printf("������ ����� ������: ");
    scanf("%d", &n);
    // �������� ���'��� ��� ������
    int* arr = (int*)malloc(n * sizeof(int));

    // �������� ����������� ������ �������� ������
    printf("������ �������� ������:\n");
    for (int i = 0; i < n; i++) {
        printf("������� %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // ������ ��������� �� ������������ �������� �� ��� �������
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
    // ��������� ������� �� ��������� ���������� �� ������������� ��������
    int distance = maxPtr - minPtr;
    // �������� ����������
    printf("\n̳�������� �������: %d (������� %ld)\n", *minPtr, minPtr - arr);
    printf("������������ �������: %d (������� %ld)\n", *maxPtr, maxPtr - arr);
    printf("³������ �� ���������: %d\n", distance);
    // ��������� ������� ���'���
    free(arr);
    return 0;
}
