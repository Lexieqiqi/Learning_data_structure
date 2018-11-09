//
// Created by Lexie on 2018/11/9.
//
#include <iostream>
#include "SqList.h"
using namespace std;

int main(){
    SqList<int> *sq = new SqList<int>(10);
    for(int i = 0;i < 10;i++){
        sq->Insert(1,i);
    }
    sq->print();
}


