#pragma once
#include <iostream>
#include <chrono>
#include <iomanip>
#include <fstream>

void MergeSort(int arr[], int aux[], int low, int high);
void Merge(int arr[], int aux[], int low, int mid, int high);
void PrintMS(int ArrSize);