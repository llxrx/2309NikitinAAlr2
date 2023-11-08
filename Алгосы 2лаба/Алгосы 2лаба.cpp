#include <iostream>
#include <chrono>
#include <locale>
#include "Func.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "ShellSort.h"
#include "ShellSort2.h"
#include "ShellSort3.h"
#include "HeapSort.h"
#include "TimSort.h"
#include "IntroSort.h"
#include "ALLSORT.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    locale loc("rus");
    cout.imbue(loc);
    int choice, ArrSize, AmountArr;

        cout << "Enter array size: ";
        cin >> ArrSize;
        if (ArrSize < 0) cout << "Array Size can't be less than 0!";
    
        while (true) {
        cout << "\n\n";   
    
        cout << "Select an operation:\n";
        cout << "1. Selection Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Bubble Sort\n";
        cout << "4. Merge Sort\n";
        cout << "5. Quick Sort\n";
        cout << "6. Shell Sort\n";
        cout << "7. Shell Sort2\n";
        cout << "8. Shell Sort3\n";
        cout << "9. Heap Sort\n";
        cout << "10. TimSort\n";
        cout << "11. IntroSort\n";

        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n";

        switch (choice) {

        case(1): {
            PrintSS(ArrSize);
            break;
        }
        case(2): {
            PrintIS(ArrSize);
            break;
        }
        case(3): {
            PrintBS(ArrSize);
            break;
        }
        case(4): {
            PrintMS(ArrSize);
            break;
        }
        case(5): {
            PrintQS(ArrSize);
            break;
        }
        case(6): {   
            PrintShS(ArrSize);
            break;
        }
        case(7): {
            PrintShS2(ArrSize);
            break;
        }
        case(8): {
            PrintShS3(ArrSize);
            break;
        }
        case(9): {
            PrintHS(ArrSize);
            break;
        }
        case(10): {
            PrintTS(ArrSize);
            break;
        }
        case(11): {
            PrintInS(ArrSize);
        }
        case(0): exit(0);
        default: cout << "Error!\n\n";
        }
    }
}