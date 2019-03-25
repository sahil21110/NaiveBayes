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


struct NaiveBayesModel {
public:
    NaiveBayesModel();
    std::vector<std::vector<std::vector<std::vector<int>>>> probabilities;
    void computeThevalues();
    
    
    
};

#endif /* NaiveBayesModel_hpp */
