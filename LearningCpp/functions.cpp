//
//  functions.cpp
//  LearningCpp
//
//  Created by Ross Miller on 2/23/13.
//  Copyright (c) 2013 Ross Miller. All rights reserved.
//

#include <iostream>

using namespace std;

int mult ( int x, int y );

int main()
{
    int x;
    int y;
    
    cout<<"Please input two numbers to be multiplied: ";
    cin>> x >> y;
    cin.ignore();
    cout<<"The product of your two numbers is "<< mult ( x, y ) <<"\n";
    cin.get();
    
    return 1;
}

int mult ( int x, int y )
{
    return x * y;
}
