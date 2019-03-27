//
//  Filemaker.hpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/26/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#ifndef Filemaker_hpp
#define Filemaker_hpp
#include <string>
#include <stdio.h>
#include <fstream>

class file_maker {
public:
    static void addToFile(std::string s);
private:
    static void makeFile();
};


#endif /* Filemaker_hpp */
