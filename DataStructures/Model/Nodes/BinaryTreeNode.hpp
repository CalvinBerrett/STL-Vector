//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 3/27/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"
template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;

public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightNode(BinaryTreeNode<Type> * right);
    void setLeftNode(BinaryTreeNode<Type> * left);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
    BinaryTreeNode<Type> * getRightNode();
};
    
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}
#endif /* BinaryTreeNode_hpp */
