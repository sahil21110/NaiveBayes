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

struct Image{
    
public:
    Image();
    std::vector<std::vector<int>> pixels;
    int const kVector_size = 28;
    int label;
    static void initializeVector();
};

#endif /* Number_hpp */
