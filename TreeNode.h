//
// Created by Alexandra Schmitt on 5/9/22.
//

#ifndef FMS2_TREENODE_H
#define FMS2_TREENODE_H

#pragma once

#include "Node.h"
#include <vector>


//TreeNode class template definition
template< class Type >
class TreeNode
{
private:
    Type type;
    //TreeNode* parent;
    std::vector< TreeNode > children;
public:
    TreeNode();
    TreeNode(const Type& type);
    void addChild(const Type& type);
    void delChild(const Type& type);
    void setValue(const Type& type);
    Type getValue();
    const Type& getValue() const;
    std::vector< TreeNode >& getChildren(){
        return this->children;
    }
    const std::vector< TreeNode >& getChildren() const{
        return this->children;
    }
    //void setParent(TreeNode * parent);
    //Type getParent();
};

template< class Type >
TreeNode<Type> :: TreeNode(){
    //Default constructor
}

template< class Type >
TreeNode<Type> :: TreeNode(const Type& type){
    this->type = type;
}

template< class Type >
void TreeNode<Type> :: addChild(const Type& type){
    this->children.push_back( lstdTreeNode( type ) );}

template< class Type >
void TreeNode<Type> :: delChild(const Type& type){
    for ( int i = 0 ; i < this->children.size() ; ++i )
    {
        if ( this->children.at(i).t == type )
        {
            this->children.erase( this->children.begin()+i );
            return;
        }
    }
}

template< class Type >
void TreeNode<Type> :: setValue(const Type& type){
    this->type = type;}

template< class Type >
Type TreeNode<Type> :: getValue(){
    return this->type;
}

template< class Type >
const Type& TreeNode<Type> :: getValue() const{
    return this->type;
}



#endif //FMS2_TREENODE_H

/*
 * References:
 *
 * https://gist.github.com/pingpoli/eb564d6767e03243ea029ee479f914a3
 * https://levelup.gitconnected.com/a-template-tree-class-in-c-7be9b4834e09
 * https://www.youtube.com/watch?v=fAz_Y8IJkdg&t=313s
 */

