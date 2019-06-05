#ifndef TREE_HPP
#define TREE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

#include "params.hpp"

class Tree{

    // member variable
    public:
    int value;
    Tree* parent;
    std::vector<Tree*> children;

    // member function
    public:
    Tree(){
    
    }

    Tree(int value) : value(value){

    }

    void InsertChildren(Tree* child){
        child->value = children.size();
        child->parent = this;
        if(children.size() < param::k_size){
            children.emplace_back(child);
        }else{
            std::uniform_int_distribution<int> range(0, param::k_size - 1);
            children[range(param::mt)]->InsertChildren(child);
        }
    }

    void DeleteChildren(Tree* n){
        children.erase(std::find(children.begin(), children.end(), n));
    }

    Tree* FindChildren(int value){
        return children.front();
    }

    Tree* GetChildren(int index){
        if(GetChildrenNum() < index) return nullptr;
        else return children.at(index);
    }

    int GetChildrenNum(){
        return children.size();
    }

    int GetChildDepth(int depth = 0){
        if(parent == nullptr) return depth;
        parent->GetChildDepth(depth + 1);
        return -1;
    }

    int GetTreeDepth(){
        // dfs->max_depth
        return -1;
    }

    void Output(){
        std::cout << value << std::endl;
        for(int i = 0; i < GetChildrenNum(); i++) children.at(i)->Output(); 
    }

};

#endif