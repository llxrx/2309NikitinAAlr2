#include "HeapSort.h"

using namespace std;
string path7 = "Sort\\HeapSort.txt";

void PrintHS(int ArrSize) {
    int ArrSize1 = ArrSize;
    int ArrSize2 = ArrSize;
    int ArrSize3 = ArrSize;
    int ArrSize4 = ArrSize;

    ofstream out1;
    locale loc("rus");
    cout.imbue(loc);
    out1.imbue(loc);
    out1.open(path7, ios::app);
    out1 << "Array Size:\t" << ArrSize << "\n";

    //out1.close();

    out1 << "Sort\n";
    for (int i = 0; ArrSize1 <= 110; i++)
    {
        int* Arr1 = new int[ArrSize1];
        for (int k = 0; k < 5; k++)
        {

            cout << setfill('-') << setw(121) << "\n";
            cout << "1)Sort Sort Array: ";
            for (int j = 0; j < ArrSize1; j++)
            {
                Arr1[j] = j;
                //out1 << Arr1[j] << " ";
            }
            auto start = chrono::high_resolution_clock::now();
            HeapSort(Arr1, ArrSize1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            cout << "\nResult\n";
            /*for (int g = 0; g < ArrSize1; g++)
            {
                out1 << Arr1[g] << " ";
            }*/


        }
        delete[] Arr1;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize1 += 10;
    }
    cout << "\n";
    cout << setfill('-') << setw(123) << "\n\n\n";

    out1 << "Half\n";
    for (int i = 0; ArrSize2 <= 110; i++)
    {
        int* Arr2 = new int[ArrSize2];
        for (int k = 0; k < 5; k++)
        {

            cout << setfill('-') << setw(121) << "\n";
            cout << "1)Half Sort Array: ";
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
            auto start = chrono::high_resolution_clock::now();
            HeapSort(Arr2, ArrSize2);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            cout << "\nResult\n";
            /*for (int g = 0; g < ArrSize2; g++)
            {
                out1 << Arr2[g] << " ";
            }*/


        }
        delete[] Arr2;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize2 += 10;
    }
    cout << "\n";
    cout << setfill('-') << setw(123) << "\n\n\n";

    out1 << "Reverse\n";
    for (int i = 0; ArrSize3 <= 110; i++)
    {
        int* Arr3 = new int[ArrSize3];
        for (int k = 0; k < 5; k++)
        {

            cout << setfill('-') << setw(121) << "\n";
            cout << "1)Reverse Sort Array: ";
            for (int j = 0; j < ArrSize3; j++)
            {
                Arr3[j] = ArrSize3 - j - 1;
                //cout << Arr3[i] << " ";
            }
            auto start = chrono::high_resolution_clock::now();
            HeapSort(Arr3, ArrSize3);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            cout << "\nResult\n";
            /*for (int g = 0; g < ArrSize3; g++)
            {
                out1 << Arr3[g] << " ";
            }*/


        }
        delete[] Arr3;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize3 += 10;
    }
    cout << "\n";
    cout << setfill('-') << setw(123) << "\n\n\n";

    out1 << "Random\n";
    for (int i = 0; ArrSize4 <= 110; i++)
    {
        int* Arr4 = new int[ArrSize4];
        for (int k = 0; k < 5; k++)
        {

            cout << setfill('-') << setw(121) << "\n";
            cout << "1)Random Sort Array: ";
            for (int j = 0; j < ArrSize4; j++)
            {
                Arr4[j] = rand();
            }
            auto start = chrono::high_resolution_clock::now();
            HeapSort(Arr4, ArrSize4);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() * 1000000000 << "\n";
            out1 << duration.count() * 1000000000 << endl;

            cout << "\nResult\n";
           /* for (int g = 0; g < ArrSize4; g++)
            {
                out1 << Arr4[g] << " ";
            }*/


        }
        delete[] Arr4;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize4 += 10;
    }
    cout << "\n";
    cout << setfill('-') << setw(123) << "\n\n\n";
}