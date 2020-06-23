#include <iostream>
#include "SortHelper.h"
#include "SelectSort.h"
#include "InsertSort.h"




int main() {
    int n =10000;
    int *arr = SortTestHelper::generateNearOrderArray(n,10 );
    int *arr2 =SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("selectSort",SelectSort,arr,n);
    //SortTestHelper::printArray(arr,n);

    SortTestHelper::testSort("InsertSort",InsertSort,arr2,n);
    //SortTestHelper::printArray(arr2,n);
    delete [] arr;
    delete [] arr2;




    return 0;
}
