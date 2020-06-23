//
// Created by apple on 2020/6/22.
//

#ifndef ALGO_SELECTSORT_H
#define ALGO_SELECTSORT_H
template<typename T>
void SelectSort(T arr[], int n){
    //选择排序
    for(int i=0;i<n;i++) {
        int minIndex = i;
        for (int k = i+1; k < n ; k++)
            if (arr[k] < arr[minIndex]) {
                minIndex = k;
            }
        swap(arr[minIndex], arr[i]);
    }
}
#endif //ALGO_SELECTSORT_H
