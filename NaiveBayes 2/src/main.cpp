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
#include "Image.hpp"
//#include "StringParser.hpp"
#include <vector>
    


    //using namespace std;

    
     std::vector<Image> training_data(5000, Image());
     void StoreImageData();
    
    int main(int argc, const char * argv[]) {
        
        StoreImageData();
        
        
        //std::cout<< training_data[0].pixels.size();
       for (int i = 0; i < 28; i++) {
            for (int j = 0 ; j < 28; j++) {
                std::ifstream ifile;
                training_data[i].pixels[i][j];
            }
        }
//
//        std::ifstream training_labels;
//        std::ifstream training_file;
//
//        training_labels.open("/Users/sahil_21/Downloads/traininglabels.txt");
//        training_file.open("/Users/sahil_21/Downloads/trainingimages.txt");
//
//
//        std::string for_storage;
        //int i = 0;
        
        
        
        
       // std::vector<Image> training_data(5000, Image());
        
       return 0;
    }

    void StoreImageData() {
        std::ifstream training_labels;
        std::ifstream training_file;
        
        training_labels.open("/Users/sahil_21/Downloads/traininglabels.txt");
        training_file.open("/Users/sahil_21/Downloads/trainingimages.txt");
        
        
        std::string for_storage;
        
        int count = 1;
        int i = 0;
        while (!training_file.eof()) {
            
            //std::cout<< "inner loop";
            for (int p = 0; p < training_data[i].pixels.size(); p++) {
                getline(training_file, for_storage);
                //std::cout<<for_storage;
                        for (int m = 0; m < training_data[i].pixels[p].size(); m++) {
                            if (for_storage[m] == ' ') {
                                training_data[i].pixels[p][m] = ' ' ;
                            }
                            if (for_storage[m] == '#' || for_storage[m] == '+') {
                                training_data[i].pixels[p][m] = '#';
                                
                            }
                            
                        }
                        
                    }
                    
           
            if (count % 28 == 0) {
                i++;
            }
             count ++;
        }
    
    }


    
    
    

    
    
    //function to store  data from the text files into the vector.
    
    
    
    
    
    
    
    

