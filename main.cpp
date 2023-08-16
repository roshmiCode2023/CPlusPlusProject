/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: roshmi
 *
 * Created on August 8, 2023, 1:04 PM
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "LinkedList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout <<"Please type your name.."<<endl;
    string userName;
    getline(cin, userName);
    cout<< "Welcome to the C++ coding World!"<< endl;
    
    cout<< "Hello " << userName << ", input number to create a Linked list"<< endl;
    int dataInput;
    cin>> dataInput;
    
    cout<< "Data input " << dataInput << endl;
    //Create a linked list
    LinkedList myIntList = LinkedList(dataInput);
    myIntList.insertFirst(10);
    myIntList.insertFirst(20);
    myIntList.insertFirst(30);
    myIntList.printList();
    // Create an empty vector
    
    cout <<"Adding to a vector list: "<< endl;
    vector<int> vect;
  
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
  
    for (int x : vect)
        cout << x << " ";
    
    
    
    return 0;
}

