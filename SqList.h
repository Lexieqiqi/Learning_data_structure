//
// Created by Lexie on 2018/11/9.
//

#ifndef TEST_SQLIST_H
#define TEST_SQLIST_H

#endif //TEST_SQLIST_H
#include <iostream>

using namespace std;

template <typename T> class SqList{
public:
    SqList(int size);
    int Length();
    int Find(T x);
    int Insert(T x,int pos);
    int IsElement(T x);
    int Delete(T x);
    bool IsEmpty();
    bool IsFull();
    T getElement(int i);
    void print();

private:
    const int maxsize;
    int currentSize;
    T *element;
};