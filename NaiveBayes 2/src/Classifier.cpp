//
//  Classifier.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include "Classifier.hpp"
#include <fstream>

void  Classifier::ComputeposteriorProbabilities(std::vector<std::vector<std::vector<std::vector<double>>>> probabilities) {
    for (int i = 0; i < testImages.size(); i++) {
        double product_probability = 1.0;
        for (int j = 0; j < testImages[i].pixels.size(); j++) {
            for (int m = 0; m < testImages[i].pixels[j].size(); m++) {
                
                if (testImages[i].pixels[j][m] == false) {
                    product_probability *= probabilities[j][m][testImages[i].label][0];
                }
                if (testImages[i].pixels[j][m] == true) {
                    product_probability *= probabilities[j][m][testImages[i].label][1];
                }
                
                
            }
            testImages[i].classfication.push_back(product_probability);
        }
    }
    
}

void Classifier::storeImages() {
    
    std::ifstream test_labels;
    std::ifstream testing_file;
    
    test_labels.open("/Users/sahil_21/Downloads/traininglabels.txt");
    testing_file.open("/Users/sahil_21/Downloads/trainingimages.txt");
    
    
    std::string for_storage;
    
    
    while (testing_file.eof()) {
        while (getline(testing_file, for_storage)) {
            int i = 0;
            for (int j = 0; j < testImages.size(); i++) {
                for (int p = 0; p < testImages[j].pixels.size(); p++) {
                    for (int m = 0; m < testImages[j].pixels[m].size(); m++) {
                        if (for_storage[m] == ' ') {
                            testImages[j].pixels[p][m] = false;
                        }
                        if (for_storage[m] == '#' || for_storage[m] == '*') {
                            testImages[j].pixels[p][m] = true;
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
}




