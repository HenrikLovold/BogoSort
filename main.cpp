//
//  main.cpp
//  Bogo
//
//  Created by Henrik Løvold on 06.11.13.
//  Copyright (c) 2013 Henrik Løvold. All rights reserved.
//

#include <iostream>
#include <vector>
#include <time.h>
#include "BogoSorter.h"

using namespace std;

int main(int argc, const char * argv[])
{
    BogoSorter a;
    vector<int> b{2, 1, 3, 6, 5, 7, 4, 9, 8, 10};
    vector<int> *c;
    
    cout << "Clocks per sec: " << CLOCKS_PER_SEC << endl;
    
    clock_t start = clock();
    
    c = a.bogoSort(&b);
    
    double end = (double)(clock() - start)/CLOCKS_PER_SEC;
    
    
    for(int i = 0; i < b.size(); i++){
        cout << c->at(i) << endl;
    }
    
    cout << "Sorted the array of " << b.size() << " elements in " << end << " seconds." << endl;
    
    return 0;
}

