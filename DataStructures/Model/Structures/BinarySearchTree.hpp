//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 3/29/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
BinaryTreeNode<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: ~BinarySearchTree()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode<Type> * getRoot()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * root)
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * node)
{
    
}

template <class Type>
int BinaryTreeNode<Type> :: getSize()
{
    
}

template <class Type>
int BinaryTreeNode<Type> :: getHeight()
{
    
}

template <class Type>
bool BinaryTreeNode<Type> :: isComplete()
{
    
}

template <class Type>
bool BinaryTreeNode<Type> :: isBalanced()
{
    
}

template <class Type>
bool BinaryTreeNode<Type> :: contains(Type value)
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftNode();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightNode();
            }
            else
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}

template <class Type>
void BinaryTreeNode<Type> :: remove(Type value)
{
    
}



#endif /* BinarySearchTree_hpp */
