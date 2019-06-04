#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <algorithm>

#include "node.hpp"
#include "individual.hpp"

void OnePointCrossOver(Node* n1, Node* n2){
    std::swap(n1, n2);
}


#endif