//
//  Number.hpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#ifndef Number_hpp
#define Number_hpp
#include <vector>
#include <stdio.h>
/*
Structure to store each image individually. Each images struct contatins a 28 x 28 vector and a classifictaion array used for classification of the
 image.
*/
struct Image{
    
public:
    Image();
    
    //Vector to store the images in each image
    std::vector<std::vector<char>> pixels;
    
    //Constant for iterations
    int const kVector_size = 28;
    
    //Label of each images
    int label;
    
    //Method to store the vector.
    static void initializeVector();
    
    //Classification of each vector based on probabilities
    std::vector<double> classfication;
};

#endif /* Number_hpp */
