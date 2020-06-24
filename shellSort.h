//
// Created by apple on 2020/6/23.
//
#include "SortHelper.h"
#ifndef ALGO_SHELLSORT_H
#define ALGO_SHELLSORT_H

template<typename T>
    void ShellSort(T arr[],int n){
        int h=1;
        while (h<n/3){
            h=3*h+1;
        }

    while (h>=1){
        //cout << "h:" << h <<endl;
        for (int j = h; j <n ; ++j) {
            int current = arr[j];
            //cout << "current:" << current << endl;
            int i;
            for (i = j; i >=h && current<arr[i-h] ; i -=h) {
                arr[i] = arr[i-h];
                }
            arr[i] = current;
            //SortTestHelper::printArray(arr,n);
            }
        h /= 3;

        }

    }

#endif //ALGO_SHELLSORT_H
