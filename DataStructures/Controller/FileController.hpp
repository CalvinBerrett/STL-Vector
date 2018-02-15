//
//  FileController.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 2/2/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "/Users/cber6181/Downloads/CrimeData.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};
#endif /* FileController_hpp */
