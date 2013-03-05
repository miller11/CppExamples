//
//  whileLoop.cpp
//  LearningCpp
//
//  Created by Ross Miller on 2/23/13.
//  Copyright (c) 2013 Ross Miller. All rights reserved.
//

#include <iostream>

using namespace std; // So we can see cout and endl

int main()
{
    int x = 0;  // Don't forget to declare variables
    
    while ( x < 10 ) { // While x is less than 10
        cout<< x <<endl;
        x++;             // Update x so the condition can be met eventually
    }
    cin.get();
    
    return 1;
}
