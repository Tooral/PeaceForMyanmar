//
//  Travelling.hpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#ifndef Travelling_hpp
#define Travelling_hpp

#include <iostream>
#include "Action.hpp"
#include <string>
#include <ctype.h>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;
class Travelling : public Action{
private:
    int random;
    static int count;
public:
    Travelling();
    void get_gift(int random);
    int random_gift();
    int donate_money(int donations, string choice);
    static int get_count(){
        return count;
    }
};




#endif /* Travelling_hpp */
