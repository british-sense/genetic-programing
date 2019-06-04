#include <iostream>

#include "individual.hpp"

int main(){

    Node tree;

    std::cout << tree.GetLeafNum() << std::endl;
    tree.AddLeaf(new Node());
    std::cout << tree.GetLeafNum() << std::endl;

    // for(int i = 0; i < tree->GetLeafNum(); i++){
    //     Node* n = tree->GetLeaf(i);
    //     std::cout << n->GetLeafNum() << std::endl;
    //     n->AddLeaf(new Node());
    //     std::cout << n->GetLeafNum() << std::endl;
    // }

    return 0;
}