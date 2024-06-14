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
        
    }
};