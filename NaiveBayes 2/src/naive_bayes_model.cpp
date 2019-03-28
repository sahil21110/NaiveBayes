//
//  NaiveBayesModel.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include "NaiveBayesModel.hpp"

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

void NaiveBayesModel::ComputeThevalues(std::vector<Image> &refforvect)  {
    for (int i = 0; i < refforvect.size(); i++) {
        int label = refforvect[i].label;
        for (int j = 0; j < refforvect[i].pixels.size(); j++) {
            for (int q = 0; q <  refforvect[i].pixels[j].size(); q++) {
                if (refforvect[i].pixels[j][q] == true) {
                    count[j][q][label][1]++;
                }
                if (refforvect[i].pixels[j][q] == false) {
                    count[j][q][label][0]++;
                }
            }
        }
    }
}

void NaiveBayesModel:: ComputeProbabilities(std::vector<int> countOfLables) {
    for (int i = 0; i < count.size(); i++) {
        for (int j = 0; j < count[i].size(); j++) {
            for (int m = 0; m < 10; m++){
               probabilities[i][j][m][0] = (count[i][j][m][0] + (2*klaplace_const) / (countOfLables[m]));
               probabilities[i][j][m][1] = (count[i][j][m][1] + (2*klaplace_const) / (countOfLables[m]));
            }
                
        }
    }
}

void NaiveBayesModel::LoadModelOntoAfile() {
    std::ofstream output_model;
    
    output_model.open("calculations.txt");
    while(!output_model.eof()) {
        for (int i = 0; i < count.size(); i++) {
            for (int j = 0; j < count[i].size(); j++) {
                for (int m = 0; m < 10; m++){
                    std::cout<< probabilities[i][j][m][0];
                    std::cout << probabilities[i][j][m][1];
                   }
                
            }
        }
    }
    
    
}
