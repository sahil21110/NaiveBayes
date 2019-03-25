//
//  NaiveBayesModel.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include "NaiveBayesModel.hpp"
NaiveBayesModel::NaiveBayesModel() {
    std::vector<std::vector<std::vector<std::vector<int>>>> temp(28, std::vector<std::vector<std::vector<int>>>
                                                                         (28, std::vector<std::vector<int>>
                                                                          (10, std::vector<int>
                                                                           (2))));
    count = temp;
}

NaiveBayesModel::computeThevalues() {
    
}
