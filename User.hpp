//
//  User.hpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/13/21.
//

#ifndef User_hpp
#define User_hpp

#include <iostream>
#include <string>
#include <ctype.h>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;
class User{
private:
    string first_name;
    string last_name;
    int age;
    string menu_choice;
    string menu_option;
public:
    User(string first_name = "", string last_name= "", int age = 0, string menu_choice = "", string menu_option = ""){
        first_name = "";
        last_name = "";
        age = 0;
        menu_choice = "";
        menu_option = "";
        ifstream input_file;
        input_file.open("user.txt");
        if(input_file){
            string line;
            while(getline(input_file, line))
                cout<< line << "\n";
            input_file.close();
        }
        cout<<endl;
    }
    void set_first_name(string first_name_param);
    string get_first_name();
    void set_last_name(string last_name_param);
    string get_last_name();
    void main_menu(int age);
    int get_menu(string menu_choice);
    friend ostream& operator<< (ostream&out, const User& name);
    friend istream & operator >> (istream &in,  User &name);
};
#endif /* User_hpp */
