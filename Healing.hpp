//
//  Healing.hpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#ifndef Healing_hpp
#define Healing_hpp

#include <iostream>
#include "Action.hpp"
#include <iostream>
#include <ctype.h>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;
class Healing : public Action{
private:
    static int count;
public:
    Healing();
    void get_mentalhelp();
    void get_healthcare();
    static int get_count(){
        return count;
    }
};

#endif /* Healing_hpp */
