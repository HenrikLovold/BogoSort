//
//  BogoSorter.h
//  Bogo
//
//  Created by Henrik Løvold on 06.11.13.
//  Copyright (c) 2013 Henrik Løvold. All rights reserved.
//

#ifndef __Bogo__BogoSorter__
#define __Bogo__BogoSorter__

#include <iostream>
#include <vector>
#include <random>

class BogoSorter {
public:
    std::vector<int>* bogoSort(std::vector<int>* a);
    std::vector<int> shuffle(std::vector<int> a);
    void shufftest();
};

#endif /* defined(__Bogo__BogoSorter__) */
