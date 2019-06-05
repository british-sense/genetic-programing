#ifndef PARAMS_HPP
#define PARAMS_HPP

#include <random>

namespace param{
    int population_size = 100;
    int max_generation = 100;
    int max_trial = 1;
    int max_depth = 10;
    int initial_min_depth = 4;
    int initial_max_depth = 6;
    int k_size = 2;
    std::vector<std::string> terminal_symbol;
    std::vector<std::string> non_terminal_symbol;

    // simbolic regression
    // terminal_symbol = {"0.1", "0.2", "0.3", "0.4", "0.5", "0.6", "0.7", "0.8", "0.9", "1.0"};
    // non_terminal_symbol = {"+", "-", "*", "/"};

    // santa-fe-trail
    // terminal_symbol = {"IF", "PR2", "PR3"};
    // non_terminal_symbol = {"S", "L", "R"};

    std::mt19937 mt;
}

#endif