//
//  ArrayTester.cpp
//  DataStructures
//
//  Created by Berrett, Calvin on 2/6/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#include "ArrayTester.hpp"


void ArrayTester :: testArrayUse()
{
    Array<int> firstArray(10);
    
    for (int index = 0; index < 10; index++)
    {
        firstArray.setAtIndex(index, index);
    }
    
    for (int index = 0; index < firstArray.getSize(); index++)
    {
        cout << firstArray[index] << endl;
    }
    
    Array<int> secondArray(400);
    
    cout << secondArray.getSize() << endl;
    cout << firstArray.getSize() << endl;
    
    Array<int> thirdArray(secondArray);
    
    cout << thirdArray.getSize() << endl;
    firstArray = thirdArray;
    cout << firstArray[4] << endl;
    
    thirdArray[5] = 123;
    cout << thirdArray[5] << endl;
}

void ArrayTester :: testAdvancedArray()
{
    vector<CrimeData> test = FileController :: readCrimeDataToVector("/Users/cber6181/Downloads/crime.csv");
    int arraySize = test.size();
    
    Array<CrimeData> data(arraySize);
    for(int index = 0; index < arraySize; index++)
    {
        data[index] = test[index];
    }
    Timer vectorTimer;
    Timer arrayTimer;
    
    vectorTimer.startTimer();
    cout << test[3425] << endl;
    vectorTimer.stopTimer();
    vectorTimer.displayerInformation();
    
    arrayTimer.startTimer();
    cout << data[3425] <<endl;
    arrayTimer.stopTimer();
    arrayTimer.displayInformation();
}
