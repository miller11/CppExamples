//
//  pointers.cpp
//  LearningCpp
//
//  Created by Ross Miller on 2/23/13.
//  Copyright (c) 2013 Ross Miller. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int x;            // A normal integer
    int *p;           // A pointer to an integer
    
    p = &x;           // Read it, "assign the address of x to p"
    cout<< "Please enter a number: ";
    cin>> x;          // Put a value in x, we could also use *p here
    cin.ignore();
    cout<< *p <<"\n"; // Note the use of the * to get the value
    cin.get();
}