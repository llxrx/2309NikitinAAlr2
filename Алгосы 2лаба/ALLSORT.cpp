#include "ALLSORT.h"

//SELECTION SORT
void SelectionSort(int A[], int n)
{
    int i, j, count, key;
    for (i = 0; i < n - 1; i++)
    {
        count = A[i]; key = i;
        for (j = i + 1; j < n; j++)
            if (A[j] < A[key]) key = j;
        if (key != i)
        {
            A[i] = A[key];
            A[key] = count;
        }
    }
}

//INSERTION SORT
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

//BUBBLE SORT
void BubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

//MERGE SORT
void Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        aux[k++] = arr[i++];
    }

    while (j <= high) {
        aux[k++] = arr[j++];
    }
    for (int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
}

void MergeSort(int arr[], int aux[], int low, int high)
{
    if (high <= low) {
        return;
    }

    int mid = (low + ((high - low) >> 1));

    MergeSort(arr, aux, low, mid);
    MergeSort(arr, aux, mid + 1, high);

    Merge(arr, aux, low, mid, high);
}

//QUICK SORT
int partition(int arr[], int p, int r)
{
    int x = arr[r];
    int i = p - 1;
    for (int j = p; j <= r; j++)
    {
        if (arr[j] <= x) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void QuickSort(int arr[], int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        QuickSort(arr, p, q - 1);
        QuickSort(arr, q + 1, r);
    }
}

//SHELL SORT
void ShellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i], j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

//Hibbard
void ShellSort2(int arr[], int n)
{
    int k = 1;
    while (pow(2, k) - 1 <= n)
    {
        int gap = pow(2, k) - 1;
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) arr[j] = arr[j - gap];
            arr[j] = temp;
        }
        k++;
    }
}

//Knuth
void ShellSort3(int arr[], int n)
{
    int gap = 1;

    while (gap < n / 3)
    {
        gap = gap * 3 + 1;
    }

    while (gap > 0)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i], j = i;

            while (j >= gap && arr[j - gap] > temp)
            {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
        gap /= 3;
    }
}

//HEAP SORT
void Heapify(int arr[], int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < N && arr[l] > arr[largest])
        largest = l;

    if (r < N && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        Heapify(arr, N, largest);
    }
}

void HeapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        Heapify(arr, N, i);
    for (int i = N - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

//TIM SORT
void insertionSort(int arr[], int left, int right) //modified insertion sort for timsort
{
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void merge(int arr[], int l, int m, int r) //modified merge for timsort
{
    int len1 = m - l + 1, len2 = r - m;
    int* left = new int[len1];
    int* right = new int[len2];
    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < len1) {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < len2) {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void TimSort(int arr[], int n)
{
    const int RUN = 32;
    for (int i = 0; i < n; i += RUN)
        insertionSort(arr, i, min((i + RUN - 1), (n - 1)));

    for (int size = RUN; size < n; size = 2 * size) {

        for (int left = 0; left < n; left += 2 * size) {

            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (n - 1));

            if (mid < right)
                merge(arr, left, mid, right);
        }
    }
}

//INTRO SORT
void IntroSort(int arr[], int ArrSize) {
    int partitionSize = partition(arr, 0, ArrSize - 1);

    if (partitionSize < 16)
    {
        insertionSort(arr, ArrSize);
    }
    else if (partitionSize > (2 * log(ArrSize)))
    {
        HeapSort(arr, ArrSize);
    }
    else
    {
        QuickSort(arr, 0, ArrSize - 1);
    }
}