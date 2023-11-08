#include "QuickSort.h"

using namespace std;
string path5 = "Sort\\QuickSort.txt";

using namespace std;

//QuickSort
void PrintQS(int ArrSize) {
    int ArrSize1 = ArrSize;
    int ArrSize2 = ArrSize;
    int ArrSize3 = ArrSize;
    int ArrSize4 = ArrSize;

    ofstream out1;
    locale loc("rus");
    cout.imbue(loc);
    out1.imbue(loc);
    out1.open(path5, ios::app);
    out1 << "Array Size:\t" << ArrSize << "\n";
    out1 << setfill('-') << setw(121) << "\n";

    /*
    out1 << "Sort\n";
    for (int i = 0; ArrSize1 <= 200000; i++)
    {
        int* Arr1 = new int[ArrSize1];
        for (int k = 0; k < 5; k++)
        {

            cout << setfill('-') << setw(121) << "\n";
            cout << ArrSize1 << " + " << k + 1 << " Sort Array: ";
            for (int j = 0; j < ArrSize1; j++)
            {
                Arr1[j] = j;
                //out1 << Arr1[j] << " ";
            }
            auto start = chrono::high_resolution_clock::now();
            //QuickSort(Arr1, 0, ArrSize1 - 1);
            QuickSort(Arr1, 1, ArrSize1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() << "\n";
            out1 << duration.count() << endl;

            cout << "\nResult\n";

            for (int g = 0; g < ArrSize1; g++)
            {
                out1 << Arr1[g] << " ";
            }
        }
        delete[] Arr1;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize1 += 10000;
    }

    out1 << "Half\n";
    for (int i = 0; ArrSize2 <= 200000; i++)
    {
        int* Arr2 = new int[ArrSize2];
        for (int k = 0; k < 5; k++)
        {

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
            //QuickSort(Arr2, 0, ArrSize2 - 1);
            QuickSort(Arr2, 0, ArrSize2-1);
            //qsl(Arr2, ArrSize2);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() << "\n";
            out1 << duration.count() << endl;

            for (int g = 0; g < ArrSize2; g++)
            {
                out1 << Arr2[g] << " ";
            }

        }
        delete[] Arr2;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize2 += 10000;
    }
    */


    out1 << "Reverse\n";
    for (int i = 0; ArrSize3 <= 200000; i++)
    {
        int* Arr3 = new int[ArrSize3];
        for (int k = 0; k < 5; k++)
        {
            cout << setfill('-') << setw(121) << "\n";
            cout << ArrSize3 << " Reverse Sort Array: ";
            int ha = 1;
            for (int j = 0; j < ArrSize3; j++)
            {
                Arr3[j] = ArrSize3 - j - 1;
                //out1 << Arr3[j] << " ";
            }
            cout << "\n";

            auto start = chrono::high_resolution_clock::now();
            QuickSort(Arr3, 0, ArrSize3-1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() << "\n";
            out1 << duration.count() << endl;

            for (int g = 0; g < ArrSize3; g++)
            {
                //out1 << Arr3[g] << " ";
            }
        }
        delete[] Arr3;
        ArrSize3 += 10000;
    }

    out1 << "Random\n";
    for (int i = 0; ArrSize4 <= 200000; i++)
    {
        int* Arr4 = new int[ArrSize4];
        for (int k = 0; k < 5; k++)
        {

            cout << setfill('-') << setw(121) << "\n";
            cout << "4)Random Sort Array: ";
            for (int j = 0; j < ArrSize4; j++)
            {
                Arr4[j] = rand();
            }
            cout << "\n";

            auto start = chrono::high_resolution_clock::now();
            //QuickSort(Arr4, 0, ArrSize4 - 1);
            QuickSort(Arr4, 0, ArrSize4-1);
            auto end = chrono::high_resolution_clock::now();
            chrono::duration<float> duration = end - start;
            cout << "Duration: " << duration.count() << "\n";
            out1 << duration.count() << endl;

            for (int g = 0; g < ArrSize4; g++)
            {
                out1 << Arr4[g] << " ";
            }
        }
        delete[] Arr4;
        cout << setfill('-') << setw(121) << "\n\n\n";
        ArrSize4 += 10000;
    }
}