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
#include "Image.cpp"
//#include "StringParser.hpp"
#include <vector>
    


    //using namespace std;
std::vector<std::vector<std::vector<std::vector<int>>>> count_of_all(28, std::vector<std::vector<std::vector<int>>>
                                                                     (28, std::vector<std::vector<int>>
                                                                      (10, std::vector<int>
                                                                       (2))));

   
    
   
    
    
    
    
    
    int main(int argc, const char * argv[]) {
        
        
        
        std::vector<Image> training_data(5000, Image());
        std::ifstream training_labels;
        std::ifstream training_file;
        
        //training_labels.open("/Users/sahil_21/Downloads/traininglabels.txt");
        //training_file.open("/Users/sahil_21/Downloads/trainingimages.txt");
        
        
        std::string for_storage;
        
        
        
        while (getline(training_file, for_storage)) {
            int i = 0;
            for (int j = 0; j < 28; i++) {
                
                
            }
            
        }
        return 0;
        
    }
    
    
    
    void calculateThevals(std::vector<Image> &ref_Vector) {
       
        
        
        
        
    }
    
    
    //function to store  data from the text files into the vector.
    
    
    
    
    
    
    
    

