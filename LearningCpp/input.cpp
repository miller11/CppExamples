//
//  input.cpp
//  LearningCpp
//
//  Created by Ross Miller on 2/23/13.
//  Copyright (c) 2013 Ross Miller. All rights reserved.
//


#include <iostream>

using namespace std;

int main()
{
    int thisisanumber;
    
    cout<<"Please enter a number: ";
    cin>> thisisanumber;
    cin.ignore();
    cout<<"You entered: "<< thisisanumber <<"\n";
    cin.get();
}
