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
#include <fstream>
#include <iostream>
/*This class stores the model for a given set of images and stores them in the probabilities.
*/

struct NaiveBayesModel {
public:
    NaiveBayesModel();
    
    //Constant used for `smoothening.
    const int klaplace_const = 1;
    
   //Vector to store the  probability that a pixel belonging to a particular class may be off or on.
    std::vector<std::vector<std::vector<std::vector<double>>>> probabilities;
    
    //Vector to store the number of pixels in state.
    std::vector<std::vector<std::vector<std::vector<int>>>> count;
    
    //Method to store the number of pixels in state in the count vector.
    void ComputeThevalues(std::vector<Image> &refforvect);
    
    
    //Method to store the probabilities in the vector.
    void ComputeProbabilities(std::vector<int> countOfLables);
    
    //Method to store the model onto a file
    void LoadModelOntoAfile();
    
};

#endif /* NaiveBayesModel_hpp */
