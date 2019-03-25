//
//  Number.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/25/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include "Image.hpp"

Image::Image(){
    std::vector<std::vector<int>> temp(28, std::vector<int>(28));
    pixels = temp;
}
