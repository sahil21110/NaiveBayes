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
    void ClassifyImages();
    std::vector<double> posterior_probabilties;
    std::vector<Image> testImages;
    void ComputeposteriorProbabilities(std::vector<std::vector<std::vector<std::vector<double>>>> some);
    void storeImages();
    
    // void ClassifyImages();
    
                  



};
 //std::vector<double> posteriorprobs;
                  
                  


#endif /* Classifier_hpp */
