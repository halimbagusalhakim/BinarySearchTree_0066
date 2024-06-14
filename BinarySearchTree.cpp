#include <iostream>
#include <string>
using namespace std;

class Node {
    string info;
    Node* leftchild;
    Node* rightchild;

    //cconstructor for the node class
    Node(string i, Node* l, Node* r) {
        info = i;
        leftchild = l;
        rightchild = r;
    }

};

class BinaryTree {
Public:
    Node* ROOT;

    BinaryTree() {
        ROOT = NULL; //initializing ROOT to null
    }
    void insert(string element) //insert a node in teh binary search tree
    {
        Node* newNode = new Node(element, NULL, NULL);
        newNode->info = element; // assign value to the data field of the new node
        newNode->leftchild = NULL // make the left child of the nw node point to NULL
        newNode->rightchild = NULL // make the right child of the nw node point to null

        Node* parent = NULL;
        Node* current Node = NULL;
        search(element, parent, currentNode);//locate the node which will be the parent of the node to be inserted

        if(parent == NULL)//if the parent is NULL(TREE is empty) 
        {
            ROOT = newNode;//mark the new node as root
            return;
        }
        
    }
};