/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   LinkedList.h
 * Author: jaydi
 *
 * Created on August 14, 2023, 2:53 PM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

struct Node{
    int data;
    Node* link;
};

typedef Node* nodePtr;

class LinkedList{
    
private:
    nodePtr head;
    
public:
    LinkedList(int data);
    ~LinkedList();
    void insertFirst(int data);
    void printList();
};

#endif /* LINKEDLIST_H */

