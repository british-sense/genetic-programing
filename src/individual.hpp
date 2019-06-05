#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP

#include <string>

#include "tree.hpp"

class Individual{

    // member variable 
    Tree* gene;
    double fitness;

    // member fanction
    public:
    Individual(){

    }

    void Init(){
        Evaluate();
    }

    void Evaluate(){
        // simbolic regression
    }

    void Mutation(){

    }

    int MaxDepth(){
        return 0;
    }

    int Size(){
        return 0;
    }
};

#endif