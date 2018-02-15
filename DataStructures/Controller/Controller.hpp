//
//  Controller.hpp
//  STL-Vector
//
//  Created by Berrett, Calvin on 1/29/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"

class Controller
{
private:
    void findMaxAndMin();
public:
    void start();
};
#endif /* Controller_hpp */
