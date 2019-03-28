//
//  Classifier.hpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#ifndef Classifier_hpp
#define Classifier_hpp
#include <vector>
#include <stdio.h>
#include "Image.hpp"
class Classifier {
public:
    //Method to classify images.
    void ClassifyImages();
    
    //Vector to store the posterior probabilities
    std::vector<double> posterior_probabilties;
    
    //Vector to store the test images
    std::vector<Image> testImages;
    
    //Method to store the probabilities that a given image belongs to a class.
    void ComputeposteriorProbabilities(std::vector<std::vector<std::vector<std::vector<double>>>> some);
   
    //Method to store the images in the vector.
    void storeImages();
    
};

                  
                  


#endif /* Classifier_hpp */
