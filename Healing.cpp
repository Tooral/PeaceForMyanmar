//
//  Healing.cpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#include "Healing.hpp"
int Healing::count = 0;

Healing::Healing(){
    ifstream input_file;
    input_file.open("healing.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
    ++count;
}
void Healing::get_mentalhelp(){
    ifstream input_file;
    input_file.open("mental.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
void Healing::get_healthcare(){
    ifstream input_file;
    input_file.open("healthcare.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
