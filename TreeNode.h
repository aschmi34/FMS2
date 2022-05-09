//
// Created by Alexandra Schmitt on 5/9/22.
//

#ifndef FMS2_TREENODE_H
#define FMS2_TREENODE_H

//forward declaration of class Tree
template< typename NODETYPE > class Tree;

//TreeNode class template definition
template< typename NODETYPE >
class TreeNode
{
    freind class Tree< NODETYPE >;
public:
    //constructor
    TreeNode( const NODETYPE &d)
        : date(d)//tree node data
};

#endif //FMS2_TREENODE_H

