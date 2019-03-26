//
//  NaiveBayesModel.hpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#ifndef NaiveBayesModel_hpp
#define NaiveBayesModel_hpp
#include <vector>
#include <stdio.h>
#include "Image.hpp"


struct NaiveBayesModel {
public:
    NaiveBayesModel();
    const int klaplace_const = 1;
    std::vector<std::vector<std::vector<std::vector<double>>>> probabilities;
    std::vector<std::vector<std::vector<std::vector<int>>>> count;
    void computeThevalues(std::vector<Image> &refforvect);
    void computeProbabilities(std::vector<int> countOfLables);
    
    
};

#endif /* NaiveBayesModel_hpp */
