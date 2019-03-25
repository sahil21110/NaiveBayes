//
//  main.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//


    //
    
#include <iostream>
#include <fstream>
#include "Number.hpp"
#include "StringParser.hpp"
#include <vector>
    
    
    
    using namespace std;
    int main(int argc, const char * argv[]) {
        vector<vector<vector<vector<int>>>> count_of_all(28, vector<vector<vector<int>>>
                                                         (28, vector<vector<int>>
                                                          (10, vector<int>
                                                           (2))));
        
        vector<vector<vector<vector<double>>>> probablities_of_all(28, vector<vector<vector<double>>>
                                                                   (28, vector<vector<double>>
                                                                    (10, vector<double>
                                                                     (2))));
        
        
        std::vector<Number> training_data(5000, Number());
        std::ifstream training_labels;
        std::ifstream training_file;
        
        training_labels.open("/Users/sahil_21/Downloads/traininglabels.txt");
        training_file.open("/Users/sahil_21/Downloads/trainingimages.txt");
        
        
        std::string for_storage;
        
        //maintaining the count for each pixel
        
        while (getline(training_file, for_storage)) {
            
            
        }
        
        
        
        return 0;
        
    }
    
    
    
    void calculateThevals(std::vector<Number> &ref_Vector) {
        
        
        
        
        
    }
    
    
    //function to store  data from the text files into the vector.
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

}
