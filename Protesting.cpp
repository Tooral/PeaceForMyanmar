//
//  Protesting.cpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#include "Protesting.hpp"
int Protesting::count = 0;

Protesting::Protesting(){
    ifstream input_file;
    input_file.open("protesting.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
    ++count;
}
void Protesting::get_protest(){
        ifstream input_file;
        input_file.open("protest.txt");
        if(input_file){
            string line;
            while(getline(input_file, line))
                cout<< line << "\n";
            input_file.close();
        }
    
}
int Protesting::donate_money(int donations, string choice){
    if (choice == "yes") {
        if (donations >= 0) {
            ifstream input_file;
            input_file.open("donate.txt");
            if(input_file){
                string line;
                while(getline(input_file, line))
                    cout<< line << "\n";
                input_file.close();
            }
        }
        else{
            cout<<"thank you for everything!";
        }
    }
    return  0;
}
