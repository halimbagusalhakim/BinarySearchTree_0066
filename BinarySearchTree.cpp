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