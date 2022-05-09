
//
// Created by Alexandra Schmitt on 5/9/22.
//

#ifndef FMS2_NODE_H
#define FMS2_NODE_H

template <class Type>
class Node
{
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node(){
    //Default constructor
}

template <class Type>
Node<Type> :: Node(Type Data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type Data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

#endif //FMS2_NODE_H
