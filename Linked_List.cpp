//
// Created by Lexie on 2018/11/8.
//

#include "Linked_List.h"
//定义结构体，用来表示链表所存储的内容
//任务序号数No，按照重要程度划分的颜色
typedef struct Node{
    int No;
    struct Node* next;
}*DNode;

class Duty_List{
private: DNode head,tail;
public: Duty_List(){
        head = NULL;
        tail = NULL;
    }
public: void createNode(int No){
        DNode temp = new Node;
        temp->No = No;
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else{
            tail->next = n;
            tail = n;
        }
    }
public: void insertNode(int No,int p){
        DNode previous = new Node;
        DNode current = new Node;
        DNode temp = new Node;
        temp->No = No;
        int pos = 1;
        temp->No = No;
        if(head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else if(p = 1){
            head = temp;

        }
        else{
            if(pos!=p-1){

            }
        }

    }
public :void display(){
        DNode temp = new Node;
        temp = head;
        while(temp != NULL){
            cout << temp->No <<" ";
            temp = temp->next;
        }
    }
};