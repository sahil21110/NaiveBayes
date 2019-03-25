//
//  Number.hpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#ifndef Number_hpp
#define Number_hpp

#include <stdio.h>

class Number {
    
public:
    Number();
    //int** pixels = new int*[28];
    
    
    static int const kVector_size = 28;
    int label;
    static void initializeVector();
};

#endif /* Number_hpp */
