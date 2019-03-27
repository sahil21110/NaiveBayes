//
//  Filemaker.cpp
//  NaiveBayes 2
//
//  Created by sahil sashi on 3/26/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include "Filemaker.hpp"
using namespace std;

/**
 * This creates a file with the specified name. If a file already exists under that name then
 *
 */
void file_maker::makeFile() {
    ifstream ifile("calculations.txt");
    if (ifile) {
        return;
    }
    std::ofstream output("calculations.txt");
}

/**
 * This function adds the string given in into the calculations.txt file
 * @param s the string to be added in
 */
void file_maker::addToFile(std::string s) {
    makeFile();
    std::ofstream outfile;
    outfile.open("calculations.txt", std::ios_base::app);
    outfile << s + " ";
}
