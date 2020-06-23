//
// Created by apple on 2020/6/20.
//

#ifndef UNTITLED1_SORTTESTHELPER_H
#define UNTITLED1_SORTTESTHELPER_H

#include <iostream>
#include <ctime>
#include <cassert>
#include <string>
#include <cassert>
using namespace std;

namespace  SortTestHelper{
    int* GenerateRandomArray(int n, int rangeL, int rangeR){
        assert(rangeL<rangeR);
        int *arr = new int[n];
        srand(time(NULL));
        for(int i = 0;i<n;i++){
            arr[i] = rand()%(rangeR-rangeL+1) +rangeL;
        }

        return arr;
    }

    template<typename T>
    void printArray(T arr[],int n){
        for(int i=0;i<10;i++){
            cout <<arr[i]<<" ";
        }
        cout << endl;
        return;
    }

    template<typename T>
    bool isSorted(T arr[],int listNum){
        for (int i = 0; i < listNum - 1; ++i) {
            if (arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }

    template<typename T>
    void testSort(string sortName, void(*sort)(T[],int), T arr[],int listNum){
        //传入函数的指针
        clock_t startTime = clock();
        sort(arr,listNum);
        clock_t endTime = clock();

        //cout << startTime << "  " << endTime  << "  "  << CLOCKS_PER_SEC <<endl;
        assert(isSorted(arr,listNum));
        cout << sortName << ":" << double(endTime-startTime) / CLOCKS_PER_SEC <<"s"<<endl;
        //CLOCKS_PER_SED 每秒钟时钟周期运行的个数
        return;

    }

    int* copyIntArray(int a[],int n){
        int* arr = new int[n];
        copy(a,a+n,arr);
        //copy是std标准库,传入头指针,尾指针,和新数组
        return arr;
    }

    int* generateNearOrderArray(int arrayNum,int swapTime){
        //近乎有序的数组
        int *arr = new int[arrayNum];
        for (int i = 0; i <arrayNum ; ++i) {
            arr[i] = i;
        }
        srand(time(NULL));
        for (int j = 0; j < swapTime; ++j) {
            int posX = rand()%arrayNum;
            int posY = rand()%arrayNum;
            swap(arr[posX],arr[posY]);
        }
        return arr;
    }


}


#endif //UNTITLED1_SORTTESTHELPER_H
