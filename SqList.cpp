//
// Created by Lexie on 2018/11/9.
//

#include "SqList.h"
#include <iostream>


using namespace std;


template <typename T> SqList<T>::SqList(int size)
        :maxsize(size)
{
    element = new T[maxsize];
}

template <typename T>
int SqList<T>::Length(){
    return currentSize;
}

template <typename T>
int SqList<T>::Find(T x){
    int flag = 0;
    for(int i = 0;i < maxsize;i++){
        if(element[i]==x){
            return i;
            flag = 1;
        }
    }
    if(flag == 0){
        return -1;
    }
}

template <typename T>
int SqList<T>::Insert(T x,int pos){
    if(currentSize == maxsize){
        cout << "The list is full.";
        return -1;
    }
    if(pos < 0||pos > currentSize){
        return -1;
    }
    else{
        for(int i = pos;i < currentSize;i++){
            element[i] = element[i-1];
        }
        element[pos-1] = x;
        currentSize = currentSize + 1;
        return x;
    }
}

template <typename T>
int SqList<T>::IsElement(T x){
    int flag = 0;
    for(int i = 0;i < currentSize;i++){
        if(element[i] == x){
            flag = 1;
            return i;
        }
    }
    if(flag == 0){
        cout << "No such element in this sequence list."<<endl;
        return -1;
    }
}

template <typename T>
int SqList<T>::Delete(T x){
    int flag = 0;
    for(int i = 0;i < currentSize; i++){
        if(element[i] == x){
            flag = 1;
            for(int j = i; j < currentSize;j++){
                element[j] = element[j+1];
            }
            break;
        }
    }
    currentSize = currentSize - 1;
    if(flag == 0){
        cout << "No element in this sequence list,can not delete"<<endl;
        return -1;
    }
}

template <typename T>
bool SqList<T>::IsEmpty(){
    if(currentSize == 0){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
bool SqList<T>::IsFull(){
    if(currentSize == maxsize){
        return true;
    }
    else{
        return false;
    }
};

template <typename T>
T SqList<T>::getElement(int p){
    return element[p-1];
}

template <typename T>
void SqList<T>::print(){
    for(int i = 0;i < currentSize; i++){
        cout << element[i]<<endl;
    }
}