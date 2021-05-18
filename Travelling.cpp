//
//  Travelling.cpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#include "Travelling.hpp"

int Travelling::count = 0;

Travelling::Travelling(){
    ifstream input_file;
    input_file.open("travelling.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
    ++count;
}
int Travelling::donate_money(int donations, string choice){
   
    if (choice == "yes") {
        if(donations >= 0){
            cout<<endl;
            cout<<"thank you for donating money for the country, because you are tourist, 10% of your donation amount will be added to your donation and it will be donated to organizatons and the country \n";
            int total = donations + donations*0.1;
            cout<<"the amount that will be donated is "<< total<<endl;
        }
    }
    return 0; 
}
int Travelling::random_gift(){
        srand((unsigned)time(NULL));
        int random;
        random = (rand()%10)+1;
    return random;
}
void Travelling::get_gift(int random){
    if(random == 1){
        cout<<"you won a tedy bear/n";
    }
    else if(random == 2){
        cout<<"you won a coupone for 50$"<<endl;
    }
    else if(random == 3){
        cout<<" you won a toy car"<<endl;
    }
    else if(random == 4){
        cout<<" sorry, today is not your lucky day!"<<endl;
    }
    else if(random == 5){
        cout<<"BINGO! you won our 100$ big prize!"<<endl;
    }
    else if(random == 6){
        cout<<" sorry, today is not your lucky day!"<<endl;
    }
    else if (random == 7){
        cout<<"you won a pack of snacks"<<endl;
    }
    else if (random == 8){
        cout<<"sorry, today is not your lucky day!"<<endl;
    }
    else if (random == 9){
        cout<<"for each one of your donate, you will get extra 5$ donation from us"<<endl;
    }
    else if (random == 10){
        cout<<"BINGO! you won another trip from us!"<<endl;
    }
}
