/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "MyStack.h"

MyStack::MyStack(): vect(){
}
MyStack::~MyStack(){
    vect.clear();
}
//push to the top of the stack
 void MyStack::push(int val){
     vect.push_back(val);
 }
 //peek at the top
 int MyStack::top(){
     return vect.back();
 }
 //pop the top element
 int MyStack::pop(){
     int last = vect.back();
      vect.pop_back();
      return last;
 }
 
 //print stack details
 string MyStack::toString(){
     ostringstream temp; 
     string str;
     for (int x : vect){
          temp << x;
          temp <<":";
     } 
     str = temp.str();
     return str;          
 }