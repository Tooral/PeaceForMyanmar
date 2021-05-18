//
//  Action.hpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#ifndef Action_hpp
#define Action_hpp

#include <iostream>
#include <string>
#include <ctype.h>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;
class Action {
protected:
    int donations;
    string choice;
private:
    string volunteering;
    string interview;
    string working;
public:
  Action( int donations = 0, string volunteering ="", string interview = "", string working = ""){
      donations = 0;
      volunteering ="";
      interview = "";
      working = "";
}
    void get_interview(string interview);
    void set_interview();
    void get_information();
    void get_free_food();
    void get_free_shelter();
    void get_protection();
    void get_help_emergency();
    void get_work();
    void get_work_locations(string working);
    void volunteering_places(string volunteering);
    void get_donation();
    virtual int donate_money(int donations, string choice);
    friend void save_file(Action act, string choice);
};

#endif /* Action_hpp */
