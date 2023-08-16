/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(int dataInput){
    head = new Node;
    head->data = dataInput;
    head->link = NULL ;
}

LinkedList::~LinkedList(){
    //traverse and delete nodes. Finally head is set to null
     nodePtr tempPtr;
    
        while(head->link != NULL){
            //moving head to the next Node and deleting the node
            tempPtr = head;
            head = head->link;
            delete tempPtr;
        }
}

void LinkedList::insertFirst(int dataInput){
    
    nodePtr tempPtr;
    tempPtr = new Node;
    tempPtr->data = dataInput;
    tempPtr->link = head;
    head = tempPtr;
}

void LinkedList::printList(){
    nodePtr tempPtr;
    tempPtr = head;
        while(tempPtr->link != NULL){
            cout<<"Next element: "<< tempPtr->data <<endl;
            tempPtr = tempPtr->link;
        }
    cout<<"Last element: "<< tempPtr->data <<endl;
}