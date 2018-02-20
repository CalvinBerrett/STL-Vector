//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Berrett, Calvin on 2/15/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <Node.hpp>

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type>v * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    void setNextNode(LinearNode * next);
    LinearNode<Type> * getNextNode();
};
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_hpp */
