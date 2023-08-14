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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout <<"Please type your name.."<<endl;
    string userName;
    getline(cin, userName);
    cout<< "Hello "<< userName << " to the Coding World!"<< endl;
    
    // Create an empty vector
    vector<int> vect;
  
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
  
    for (int x : vect)
        cout << x << " ";
    
    return 0;
}

