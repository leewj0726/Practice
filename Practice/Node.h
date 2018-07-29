#pragma once
//  Node.hpp
//  Practice
//
//  Created by WooJin Lee on 2018. 7. 29..
//  Copyright © 2018년 WooJin Lee. All rights reserved.
//

#include <iostream>

template <class TypeT>
class Node : public TypeT
{
public:
    template <typename ParamT1>
    Node(ParamT1 param1);
    
    template <typename ParamT1, typename ParamT2>
    Node(ParamT1 param1, ParamT2 param2);
    
    template <typename ParamT1, typename ParamT2, typename ParamT3>
    Node(ParamT1 param1, ParamT2 param2, ParamT3 param3);
    
    virtual ~Node();
    Node* getLink();
    void setLink(Node *p);
    
private:
    Node* link;
};

template <class TypeT>
template <typename ParamT1>
Node<TypeT>::Node(ParamT1 nodename)
{
    
}

template <class TypeT>
template <typename ParamT1, typename ParamT2>
Node<TypeT>::Node(ParamT1 param1, ParamT2 param2)
{
    
}

template <class TypeT>
template <typename ParamT1, typename ParamT2, typename ParamT3>
Node<TypeT>::Node(ParamT1 param1, ParamT2 param2, ParamT3 param3)
: TypeT(param1, param2, param3)
{
    link = NULL;
}

template <class TypeT>
Node<TypeT>* Node<TypeT>::getLink()
{
    return link;
}

template <class TypeT>
void Node<TypeT>::setLink(Node<TypeT>* p)
{
    link = p;
}
