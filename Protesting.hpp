//
//  Protesting.hpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#ifndef Protesting_hpp
#define Protesting_hpp

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
class Protesting : public Action {
private:
    static int count;
public:
    Protesting();
    void get_protest();
    int donate_money(int donations, string choice);
    static int get_count(){
        return count;
    }
};


#endif /* Protesting_hpp */
