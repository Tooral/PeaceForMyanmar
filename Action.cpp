//
//  Action.cpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/17/21.
//

#include "Action.hpp"

void save_file(Action act, string choice){
    ifstream input_file;
    ofstream output_file;
    if (choice == "protest"|| choice == "Protest") {
        input_file.open("protest.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about PROTEST \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "food" || choice == "Food" ){
        input_file.open("food.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about FOOD \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "shelter" || choice == "Shelter"){
        input_file.open("shelter.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about SHELTER \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "protection" || choice == "Protection"){
        input_file.open("protection.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about PROTECTION \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "emergency" || choice == "Emergency" ){
        input_file.open("emergency.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about EMERGENCY \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "donations" || choice == "Donations" ){
        input_file.open("donate.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about DONATIONS \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "health" || choice == "Health" ){
        input_file.open("health.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about HEALTH \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "information" || choice == "Information" ){
        input_file.open("information.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about INFORMATION \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "mental health" || choice == "Mental health" || choice == "Mental Health" || choice == "mental Health" ){
        input_file.open("mental.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about MENTAL HEALTH \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else if (choice == "work" || choice == "Work" ){
        input_file.open("work.txt");
        output_file.open("save.txt", ios::app);
        if(input_file && output_file){
            string line;
            string output;
            output_file<<"Information about WORK \n"<<endl;
            while(input_file >> line){
                output_file << " "<< line;
            }
            output_file << "\n\n";
            input_file.close();
            output_file.close();
        }
    }
    else{
        cout<<"Wrong input! Such an option not avaliable!\n";
    }
}
void Action::get_interview(string interview){
    if(interview == "yes"){
        cout<<"You will be asked only three questions\n"<<endl;
        cout<<"First question is about your knowledge about Civil War going on in Myanmar\n"<<endl;
        cout<<"Were you aware of this situation before you used this program?\n"<<endl;
        cout<<"Do you think this situation has to be spread around people and make everyone knowledgeable about it?\n"<<endl;
        cout<<"Would you donate some money for this country?\n"<<endl;
        cout<<"You can enter your answers for each question \n";
    }
    else{
        cout<<"Thank you! Have a great day!";
    }
}
void Action::get_information(){
    ifstream input_file;
    input_file.open("information.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
void Action::set_interview(){
    vector <string> interview;
    string answer1;
    string answer2;
    string answer3;
    
    cout<<"Enter your answer for 1st(First) question: ";
    getline(cin, answer1);
    interview.push_back(answer1);
    cout<<"Enter your answer for 2nd(Second) question: ";
    getline(cin, answer2);
    interview.push_back(answer2);
    cout<<"Enter your answer for 3rd(Third) question: ";
    getline(cin, answer3);
    interview.push_back(answer3);
    cout<<endl;
    cout<<"Thank you for answering the questions, Your answers will be displayed\n";
    cout<<"Your Answers are: "<<"\n"<<answer1 <<" \n"<<answer2<<" \n"<<answer3;
    ofstream file;
        file.open("save.txt", ios::app);
        for(int i=0;i<interview.size(); ++i){
            int j = i + 1;
            file<<"Your interview answer"<< " "<< j <<" is: \n";
            file<<interview[i]<<endl;
        }
    file<<"\n\n";
    file.close();
}
   

void Action::get_free_food(){
    ifstream input_file;
    input_file.open("food.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
    
}
void Action::get_free_shelter(){
    ifstream input_file;
    input_file.open("shelter.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
void Action::get_protection(){
    ifstream input_file;
    input_file.open("protection.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}

void Action::get_help_emergency(){
    ifstream input_file;
    input_file.open("emergency.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
void Action::get_work(){
    ifstream input_file;
    input_file.open("work.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
void Action::get_work_locations(string working){
    if(working == "yes"){
        ifstream input_file;
        input_file.open("capital.txt");
        if(input_file){
            string line;
            while(getline(input_file, line))
                cout<< line << "\n";
            input_file.close();
        }
    }
    else{
        cout<<"Unable to find any jobs outside of capital city due to economic crises that protests have created!";
    }
}
void Action::volunteering_places(string volunteering){
    if (volunteering == "yes") {
        ifstream input_file;
        input_file.open("volunteering.txt");
        if(input_file){
            string line;
            while(getline(input_file, line))
                cout<< line << "\n";
            input_file.close();
        }
    }
    else{
        cout<<"Cannot find any other volunteering places, due to country government regulations!";
    }
}
void Action::get_donation(){
    ifstream input_file;
    input_file.open("donate.txt");
    if(input_file){
        string line;
        while(getline(input_file, line))
            cout<< line << "\n";
        input_file.close();
    }
}
int Action::donate_money(int donations,string choice){
    
    vector <int> donation ;
    if (choice == "yes" || choice == "Yes") {
        donation.push_back(donations);
        cout<<" amount of money you want to donate is this : ";
        for (int i = 0; i< donation.size(); i++) {
            cout<< donation.at(i);
        }
    }
    else{
        cout<<"Thank you for choosing this option from menu!";
    }
    return 0;
}
