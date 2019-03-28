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
    std::ifstream testing_file;
    testing_file.open("/Users/sahil_21/Downloads/testimages.txt");
    
    
    std::string for_storage;
    
    int count = 1;
    int i = 0;
    while (!testing_file.eof()) {
        
        //std::cout<< "inner loop";
        for (int p = 0; p < testImages[i].pixels.size(); p++) {
            getline(testing_file, for_storage);
            //std::cout<<for_storage;
            //std::cout<<std::endl;
            for (int m = 0; m < testImages[i].pixels[p].size(); m++) {
                if (for_storage[m] == ' ') {
                    testImages[i].pixels[p][m] = ' ' ;
                    //std::cout<<training_data[i].pixels[p][m];
                }
                if (for_storage[m] == '#' || for_storage[m] == '+') {
                    testImages[i].pixels[p][m] = '#';
                    //std::cout<<training_data[i].pixels[p][m];
                    
                }
                
            }
            //std::cout<<std::endl;
            
            
        }
        
        
        if (count % 28 == 0) {
            i++;
        }
        count ++;
    }
    
}




