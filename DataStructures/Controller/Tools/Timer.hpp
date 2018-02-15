//
//  Timer.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 2/6/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
