//
//  TestingStackAndQueues.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 3/23/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef TestingStackAndQueues_hpp
#define TestingStackAndQueues_hpp

#include "Timer.hpp"
#include "FileController.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "List.hpp"
#include <iostream>

using namespace std;

class TestingStackAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};

#endif /* TestingStackAndQueues_hpp */
