#include <iostream>
#include "SortHelper.h"
#include "selectSort.h"
#include "insertSort.h"
#include "shellSort.h"
#include "mergeSort.h"


int main() {
    int n =100000;
    int *arr = SortTestHelper::generateRandomArray(n,1,n);
    int *arr2 =SortTestHelper::copyIntArray(arr,n);
    int *arr3 = SortTestHelper::copyIntArray(arr,n);
    int *arr4 = SortTestHelper::copyIntArray(arr,n);
    //SortTestHelper::printArray(arr,n);
    SortTestHelper::testSort("mergeSort",MergeSort,arr4,n);
    SortTestHelper::testSort("selectSort",SelectSort,arr3,n);
    SortTestHelper::testSort("insertSort",InsertSort,arr2,n);
    SortTestHelper::testSort("shellSort",ShellSort,arr,n);
    //SortTestHelper::printArray(arr,n);


    //SortTestHelper::printArray(arr2,n);

    delete [] arr;
    delete [] arr2;




    return 0;
}
