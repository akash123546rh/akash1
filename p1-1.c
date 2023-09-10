// #include <stdio.h>
// #include <stdlib.h>

// void bubbleSort(int arr[], int n) {
// 	int i,j;
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // Swap arr[j] and arr[j+1]
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
// }

// int main() {
// 	int i;
//    FILE *inputFile = fopen("input.txt", "r");
//    FILE *outputFile = fopen("output.txt", "w");

//    if (inputFile == NULL || outputFile == NULL) {
//        perror("Error opening files");
//        return 1;
//    }

//    int n;
//    fscanf(inputFile, "%d", &n);

//    int *arr = (int *)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        perror("Memory allocation error");
//        return 1;
//    }

//    for (i = 0; i < n; i++) {
//        fscanf(inputFile, "%d", &arr[i]);
//    }

//    fclose(inputFile);

//    bubbleSort(arr, n);

//    for (i = 0; i < n; i++) {
//        fprintf(outputFile, "%d ", arr[i]);
//    }

//    fclose(outputFile);
//    free(arr);

//    return 0;
// }

//selection sort

//#include <stdio.h>
//#include <stdlib.h>
//
//void selectionSort(int arr[], int n) {
//	int i,j;
//    for (i = 0; i < n - 1; i++) {
//        int minIndex = i;
//        for (j = i + 1; j < n; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//        if (minIndex != i) {
//            // Swap arr[i] and arr[minIndex]
//            int temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//    }
//}
//
//int main() {
//	int i;
//    FILE *inputFile = fopen("input.txt", "r");
//    FILE *outputFile = fopen("output.txt", "w");
//
//    if (inputFile == NULL || outputFile == NULL) {
//        perror("Error opening files");
//        return 1;
//    }
//
//    int n;
//    fscanf(inputFile, "%d", &n);
//
//    int *arr = (int *)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        perror("Memory allocation error");
//        return 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        fscanf(inputFile, "%d", &arr[i]);
//    }
//
//    fclose(inputFile);
//
//    selectionSort(arr, n);
//
//    for (i = 0; i < n; i++) {
//        fprintf(outputFile, "%d ", arr[i]);
//    }
//
//    fclose(outputFile);
//    free(arr);
//
//    return 0;
//}

//insertion sort

//#include <stdio.h>
//#include <stdlib.h>
//
//void insertionSort(int arr[], int n) {
//	int i;
//    for (i = 1; i < n; i++) {
//        int key = arr[i];
//        int j = i - 1;
//
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//int main() {
//	int i;
//    FILE *inputFile = fopen("input.txt", "r");
//    FILE *outputFile = fopen("output.txt", "w");
//
//    if (inputFile == NULL || outputFile == NULL) {
//        perror("Error opening files");
//        return 1;
//    }
//
//    int n;
//    fscanf(inputFile, "%d", &n);
//
//    int *arr = (int *)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        perror("Memory allocation error");
//        return 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        fscanf(inputFile, "%d", &arr[i]);
//    }
//
//    fclose(inputFile);
//
//    insertionSort(arr, n);
//
//    for (i = 0; i < n; i++) {
//        fprintf(outputFile, "%d ", arr[i]);
//    }
//
//    fclose(outputFile);
//    free(arr);
//
//    return 0;
//}

//merge sort

//#include <stdio.h>
//#include <stdlib.h>
//
//void merge(int arr[], int left, int middle, int right) {
//	int i,j,k;
//    int n1 = middle - left + 1;
//    int n2 = right - middle;
//
//    int L[n1], R[n2];
//
//    for (i = 0; i < n1; i++)
//        L[i] = arr[left + i];
//    for (j = 0; j < n2; j++)
//        R[j] = arr[middle + 1 + j];
//
//    i = 0, j = 0, k = left;
//
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) {
//            arr[k] = L[i];
//            i++;
//        } else {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[], int left, int right) {
//    if (left < right) {
//        int middle = left + (right - left) / 2;
//
//        mergeSort(arr, left, middle);
//        mergeSort(arr, middle + 1, right);
//
//        merge(arr, left, middle, right);
//    }
//}
//
//int main() {
//	int i;
//    FILE *inputFile = fopen("input.txt", "r");
//    FILE *outputFile = fopen("output.txt", "w");
//
//    if (inputFile == NULL || outputFile == NULL) {
//        perror("Error opening files");
//        return 1;
//    }
//
//    int n;
//    fscanf(inputFile, "%d", &n);
//
//    int *arr = (int *)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        perror("Memory allocation error");
//        return 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        fscanf(inputFile, "%d", &arr[i]);
//    }
//
//    fclose(inputFile);
//
//    mergeSort(arr, 0, n - 1);
//
//    for (i = 0; i < n; i++) {
//        fprintf(outputFile, "%d ", arr[i]);
//    }
//
//    fclose(outputFile);
//    free(arr);
//
//    return 0;
//}

//quick sort

//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//	int j;
//    int pivot = arr[high];
//    int i = (low - 1);
//
//    for (j = low; j <= high - 1; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
//
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high);
//
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//
//int main() {
//	int i;
//    FILE *inputFile = fopen("input.txt", "r");
//    FILE *outputFile = fopen("output.txt", "w");
//
//    if (inputFile == NULL || outputFile == NULL) {
//        perror("Error opening files");
//        return 1;
//    }
//
//    int n;
//    fscanf(inputFile, "%d", &n);
//
//    int *arr = (int *)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        perror("Memory allocation error");
//        return 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        fscanf(inputFile, "%d", &arr[i]);
//    }
//
//    fclose(inputFile);
//
//    quickSort(arr, 0, n - 1);
//
//    for (i = 0; i < n; i++) {
//        fprintf(outputFile, "%d ", arr[i]);
//    }
//
//    fclose(outputFile);
//    free(arr);
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void heapify(int arr[], int n, int i) {
//    int largest = i;
//    int left = 2 * i + 1;
//    int right = 2 * i + 2;
//
//    if (left < n && arr[left] > arr[largest])
//        largest = left;
//
//    if (right < n && arr[right] > arr[largest])
//        largest = right;
//
//    if (largest != i) {
//        swap(&arr[i], &arr[largest]);
//        heapify(arr, n, largest);
//    }
//}
//
//void heapSort(int arr[], int n) {
//	int i;
//    for (i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i);
//
//    for (i = n - 1; i > 0; i--) {
//        swap(&arr[0], &arr[i]);
//        heapify(arr, i, 0);
//    }
//}
//
//int main() {
//	int i;
//    FILE *inputFile = fopen("input.txt", "r");
//    FILE *outputFile = fopen("output.txt", "w");
//
//    if (inputFile == NULL || outputFile == NULL) {
//        perror("Error opening files");
//        return 1;
//    }
//
//    int n;
//    fscanf(inputFile, "%d", &n);
//
//    int *arr = (int *)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        perror("Memory allocation error");
//        return 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        fscanf(inputFile, "%d", &arr[i]);
//    }
//
//    fclose(inputFile);
//
//    heapSort(arr, n);
//
//    for (i = 0; i < n; i++) {
//        fprintf(outputFile, "%d ", arr[i]);
//    }
//
//    fclose(outputFile);
//    free(arr);
//
//    return 0;
//}









