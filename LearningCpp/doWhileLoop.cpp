//
//  doWhileLoop.cpp
//  LearningCpp
//
//  Created by Ross Miller on 2/23/13.
//  Copyright (c) 2013 Ross Miller. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int x;
    
    x = 0;
    do {
        // "Hello, world!" is printed at least one time
        //  even though the condition is false
        cout<<"Hello, world!\n";
    } while ( x != 0 );
    cin.get();
    
    return 1;
}