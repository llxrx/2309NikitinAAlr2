#pragma once
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>

using namespace std;

void SelectionSort(int A[], int n);
void insertionSort(int arr[], int n);
void BubbleSort(int arr[], int n);
void Merge(int arr[], int aux[], int low, int mid, int high);
void MergeSort(int arr[], int aux[], int low, int high);
int partition(int arr[], int p, int r);
void QuickSort(int arr[], int p, int r);
void ShellSort(int arr[], int n);
void ShellSort2(int arr[], int n);
void ShellSort3(int arr[], int n);
void Heapify(int arr[], int N, int i);
void HeapSort(int arr[], int N);
void insertionSort(int arr[], int left, int right);
void merge(int arr[], int l, int m, int r);
void TimSort(int arr[], int n);
void IntroSort(int arr[], int ArrSize);