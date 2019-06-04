#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Node{

    // member variable
    int id;
    std::vector<Node*> leaf;

    // member function
    public:
    Node(){

    }

    void AddLeaf(Node* n){
        leaf.emplace_back(n);
    }

    void DeleateLeaf(Node* n){
        leaf.erase(std::find(leaf.begin(), leaf.end(), n));
    }

    Node* GetLeaf(int n){
        return leaf.at(n);
    }

    int GetLeafNum(){
        return leaf.size();
    }

};

#endif