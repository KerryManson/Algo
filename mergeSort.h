//
// Created by apple on 2020/6/23.
//

#ifndef ALGO_MERGESORT_H
#define ALGO_MERGESORT_H
//归并排序,可将并归排序和插入排序结合起来使用,当越有序插入算法速度越快



#include "SortHelper.h"
#include "insertSort.h"

template<typename T>
void __Merge(T arr[],int l,int mid, int r){


    int* copyArr = new int[r-l+1];

    for (int i = l; i < r+1; i++) {
        copyArr[i-l] = arr[i];
    }

    int i = l,j=mid+1;
//    cout << "START SORT" <<endl;
//    cout << "copyArray:" ;
//    SortTestHelper::printArray(copyArr,10);
    for (int k = l; k <= r ; k++) {
        if (i>mid){
            arr[k] = copyArr[j-l];
            j++;
        } else if (j>r){
            arr[k] = copyArr[i-l];
            i++;
        }
        else if (copyArr[i-l]>=copyArr[j-l]){
            arr[k] = copyArr[j-l];
            j++;

        } else{
            arr[k] = copyArr[i-l];
            i++;
        }
//        cout << "i:" << i<< "  j:" <<  j << endl;
//        SortTestHelper::printArray(arr,10);


    }


}



template<typename T>
void __Mergesort(T arr[],int l,int r){
    //这里可做优化,当数量少于一定数量时用插入排序速度更快,因为数量越少,有序的可能性越大
//    if(l>=r){
//        return;
//    }
    if (r-l<15){
        InsertSortInMerge(arr,l,r);
        return;
    }

    int mid = (l+r)/2;
//    cout << "排序前:" << "  l:" << l << "  r:" << r << "  mid:"<<mid <<endl;
//    SortTestHelper::printArray(arr,r-l+1);
    __Mergesort(arr,l,mid);
    __Mergesort(arr,mid+1,r);
    if (arr[mid]>arr[mid+1]){
        __Merge(arr,l,mid,r);

    }
//    cout << "排序后:" << "  l:" << l << "  r:" << r <<"  mid:"<< mid <<endl;
//    SortTestHelper::printArray(arr,r-l+1);


}

template<typename T>
void MergeSort(T arr[],int n){
//    cout << "原始数组";
//    SortTestHelper::printArray(arr,n);
    __Mergesort(arr,0,n-1);
}

#endif //ALGO_MERGESORT_H
