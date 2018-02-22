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
#include "/Users/cber6181/C++/STL-Vector/DataStructures/Model/Structures/LinkedList.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};

LinkedList<CrimeData> FileController :: readdataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(datafile. currentCSVLine, '/r');
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimes;
}
#endif /* FileController_hpp */
