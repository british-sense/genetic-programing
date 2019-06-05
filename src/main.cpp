#include <iostream>
#include <vector>

#include "params.hpp"
#include "individual.hpp"
#include "utils.hpp"
#include "tree.hpp"

int main(){

    Tree root;
    root.value = 10;
    for(int i = 0; i < 20; i++) root.InsertChildren(new Tree());
    root.Output();

    // std::vector<Individual> population(param::population_size);

    // for(int i = 0; i < param::population_size; i++) population[i].Init();

    // for(int g = 1; g <= param::max_generation; g++){
    
    //     std::vector<Individual> next_population(param::population_size);

    //     for(int i = 0; i < param::population_size; i += 2){
    //         OnePointCrossOver(population[i], population[i + 1], next_population[i], next_population[i + 1]);
    //         next_population[i].Mutation();
    //     }

    // }

    return 0;
}