//
// Created by Alexandra Schmitt on 5/9/22.
//

/////// ********* GeneralTree.h *********///////
///////-------------------------------------///////
#ifndef FMS2_TREE_h
#define FMS2_TREE_h

#include <iostream>

using namespace std;

class Tree{
public:
    struct TreeNode{
        int int_transactionID, int_totalNumChildren;
        TreeNode *ptr_nextChild;
    };

    //initialize root
    TreeNode *root;

    Tree(){
        int int_totalNumChildren = 0;
    }

    ~Tree(){
        clear();
    }

    void clear(){
        //point to the node to be deleted
        TreeNode *tmp;
        //used to visit each node in the tree.
        //We start with the first actual node off of "root"
        TreeNode *traverse = root->ptr_nextChild;

        //while the tree is not empty
        while(traverse != NULL){
            //store the current node
            tmp = traverse;
            //visit the next node
            traverse = traverse->ptr_nextChild;
            //free the memory taken up by the current node
            delete tmp;
        }
    }

    void addChildren(int *tranID, int cNo){
        int int_totalNumChildren = cNo;
        TreeNode *genTree = new TreeNode[int_totalNumChildren];

        for(int i=0; i<int_totalNumChildren; i++){
            genTree->int_transactionID = tranID[i];
        }
    }

    void PrintTree(TreeNode *tree) {
        /* .: Print all the items in the tree to which root points...the item in the root is printed first, followed by its children :: as long as the root is not empty :. */
        if (tree != NULL){
            cout << tree->int_transactionID << " ::- " << tree->int_totalNumChildren << endl;
            // Print children
            PrintTree(tree->ptr_nextChild);
        }
    }

    void deleteChild(TreeNode *ChildPtr){
    }
};

#endif
