//
// Created by apple on 2020/6/22.
//
#include "SortHelper.h"
#ifndef ALGO_INSERTSORT_H
#define ALGO_INSERTSORT_H


template<typename T>
void InsertSort(T arr[],int n){
    //插入排序

    for (int i = 1; i < n; i++) {
        //  寻找第i个元素插入的位置
        int MiddleNum = arr[i];
        int j;
        //cout << "i:" << i <<endl;
        for (j = i; j > 0 && arr[j-1]>MiddleNum  ; j--) {

            //swap(arr[j],arr[j-1]); //一次交换为三次赋值,相对来说更耗时
            arr[j] = arr[j-1];

        }

        //cout << MiddleNum << "  "  << j <<endl;
        arr[j] = MiddleNum;
        //SortTestHelper::printArray(arr,n);
    }

}
#endif //ALGO_INSERTSORT_H
