#include "MergeSort.h"

using namespace std;
string path4 = "Sort\\MergeSort.txt";

/*
void Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;

    // пока есть элементы в левом и правом рядах
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
        }
    }

    // копируем оставшиеся элементы
    while (i <= mid) {
        aux[k++] = arr[i++];
    }

    while (j <= high) {
        aux[k++] = arr[j++];
    }

    // Вторую половину копировать не нужно (поскольку остальные элементы
    // уже находятся на своем правильном месте во вспомогательном массиве)

    // копируем обратно в исходный массив, чтобы отразить порядок сортировки
    for (int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
}

void MergeSort(int arr[], int aux[], int low, int high)
{
    // базовый вариант
    if (high <= low) {        // если размер прогона <= 1
        return;
    }

    // найти середину
    int mid = (low + ((high - low) >> 1));

    // рекурсивно разделяем прогоны на две половины до тех пор, пока размер прогона не станет <= 1,
    // затем объединяем их и возвращаемся вверх по цепочке вызовов

    MergeSort(arr, aux, low, mid);          // разделить/объединить левую половину
    MergeSort(arr, aux, mid + 1, high);     // разделить/объединить правую половину

    Merge(arr, aux, low, mid, high);        // объединить два полупрогона.
}
*/

void PrintMS(int ArrSize) {
    int ArrSize1 = ArrSize;
    int ArrSize2 = ArrSize;
    int ArrSize3 = ArrSize;
    int ArrSize4 = ArrSize;
    ofstream out1;
    out1.open(path4, ios::app);
    out1 << "Array Size:\t" << ArrSize << "\n";
    out1 << setfill('-') << setw(121) << "\n";

    out1 << "Sort\n";
    for (int i = 0; ArrSize1 <= 110; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            int* Arr1 = new int[ArrSize1];
            int* aArr1 = new int[ArrSize1];
            cout << setfill('-') << setw(121) << "\n";
            cout << "1)Sort Sort Array: ";
            for (int j = 0; j < ArrSize1; j++)
            {
                Arr1[j] = j;
                //out1 << Arr1[j] << " ";
            }
            auto start = chrono::high_resolution_clock::now();
            MergeSort(Arr1, aArr1, 0, ArrSize1 - 1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            cout << "\nResult\n";
            for (int g = 0; g < ArrSize1; g++)
            {
                //out1 << Arr1[g] << " ";
            }

            delete[] Arr1;
            delete[] aArr1;
        }
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize1 += 10;
    }

    out1 << "Half\n";
    for (int i = 0; ArrSize2 <= 200000; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            int* Arr2 = new int[ArrSize2];
            int* aArr2 = new int[ArrSize2];
            cout << setfill('-') << setw(121) << "\n";
            cout << "2)Half Sort Array: ";
            int ha = 1;
            for (int j = 0; j < ArrSize2; j++)
            {
                int HalfArr = (ArrSize2 * 10) / 100;
                if (j == HalfArr * ha && ArrSize2 > 20) {
                    Arr2[j] = rand();
                    ha++;
                    //cout << Arr2[i] << " ";
                    continue;
                }
                if (j == HalfArr && ArrSize2 < 20) {
                    Arr2[j] = rand();
                    //cout << Arr2[i] << " ";
                    continue;
                }
                Arr2[j] = j;
                //cout << Arr2[i] << " ";
            }
            cout << "\n";

            auto start = chrono::high_resolution_clock::now();
            MergeSort(Arr2, aArr2, 0, ArrSize2 - 1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            for (int g = 0; g < ArrSize2; g++)
            {
                //out1 << Arr2[g] << " ";
            }

            delete[] Arr2;
            delete[] aArr2;
        }
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize2 += 10000;
    }
    


    out1 << "Reverse\n";
    for (int i = 0; ArrSize3 <= 200000; i++)
    {
        int* Arr3 = new int[ArrSize3];
        int* aArr3 = new int[ArrSize3];
        for (int k = 0; k < 5; k++)
        {
            cout << setfill('-') << setw(121) << "\n";
            cout << "3)Reverse Sort Array: ";
            int ha = 1;
            for (int j = 0; j < ArrSize3; j++)
            {
                Arr3[j] = ArrSize3 - j - 1;
                //cout << Arr3[i] << " ";
            }
            cout << "\n";

            auto start = chrono::high_resolution_clock::now();
            MergeSort(Arr3, aArr3, 0, ArrSize3 - 1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            for (int g = 0; g < ArrSize3; g++)
            {
                //cout << Arr3[g] << " ";
            }
        }
        delete[] Arr3;
        delete[] aArr3;
        ArrSize3 += 10000;
    }

    out1 << "Random\n";
    for (int i = 0; ArrSize4 <= 110; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            int* Arr4 = new int[ArrSize4];
            int* aArr4 = new int[ArrSize4];
            cout << setfill('-') << setw(121) << "\n";
            cout << "4)Random Sort Array: ";
            for (int j = 0; j < ArrSize4; j++)
            {
                Arr4[j] = rand();
            }
            cout << "\n";

            auto start = chrono::high_resolution_clock::now();
            MergeSort(Arr4, aArr4, 0, ArrSize4 - 1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            delete[] Arr4;
            delete[] aArr4;
        }
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize4 += 10;
    }
}