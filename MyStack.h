/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   MyStack.h
 * Author: roshmi
 *
 * Created on August 9, 2023, 1:05 PM
 */
#pragma once


#include <sstream>
#include <string>
#include <vector>


using namespace std;

class MyStack{
private:    
    vector<int> vect;
    
public:
    MyStack(void);
    ~MyStack(void);  
    
    void push(int);
    int top();
    int pop();
    string toString();
};
 /* MYSTACK_H */

