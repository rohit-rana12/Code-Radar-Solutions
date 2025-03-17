#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    scanf("%d", &n);
    char arr[n][100]; 
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}

void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
       
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}