//
//  NaiveBayesModel.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include "NaiveBayesModel.hpp"
//#include "Image.hpp"
NaiveBayesModel::NaiveBayesModel() {
    std::vector<std::vector<std::vector<std::vector<int>>>> temp(28, std::vector<std::vector<std::vector<int>>>(28, std::vector<std::vector<int>>
                                                                          (10, std::vector<int>
                                                                           (2))));
    std::vector<std::vector<std::vector<std::vector<double>>>> temp2(28, std::vector<std::vector<std::vector<double>>>(28, std::vector<std::vector<double>>
                                                                                                                (10, std::vector<double>
                                                                                                                 (2))));
    count = temp;
    probabilities = temp2;
    
}

void NaiveBayesModel::computeThevalues(std::vector<Image> &refforvect)  {
    for (int i = 0; i < refforvect.size(); i++) {
        int label = refforvect[i].label;
        for (int j = 0; j < refforvect[i].pixels.size(); j++) {
            for (int q = 0; q <  refforvect[i].pixels[j].size(); q++) {
                if (refforvect[i].pixels[j][q] == '#' || refforvect[i].pixels[j][q] == '*') {
                    count[j][q][label][1]++;
                }
                if (refforvect[i].pixels[j][q] == ' ') {
                    count[j][q][label][0]++;
                }
            }
        }
    }
}

void NaiveBayesModel:: computeProbabilities(std::vector<int> countOfLables) {
    for (int i = 0; i < count.size(); i++) {
        for (int j = 0; j < count[i].size(); j++) {
            for (int m = 0; m < 10; m++){
                probabilities[i][j][m][0] = (count[i][j][m][0] + (2*klaplace_const) / (countOfLables[m]));
                probabilities[i][j][m][1] = (count[i][j][m][1] + (2*klaplace_const) / (countOfLables[m]));
            }
                
        }
    }
}
