//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 3/27/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
    BinaryTreeNode<int> testTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
