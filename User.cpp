//
//  User.cpp
//  Peace for Myanmar
//
//  Created by Tooral Hagverdiyev on 4/13/21.
//

#include "User.hpp"
ostream& operator<< (ostream& out, const User& name){
    out<<" Full Name: "<< name.first_name <<" "<< name.last_name <<endl;
    return out;
}
istream & operator >> (istream &in,  User &name)
{
    cout<<"Enter your first name: ";
    in>>name.first_name;
    cout<<"Enter your last name: ";
    in>>name.last_name;
    return in;
}
void User::set_first_name(string first_name_param){
    first_name = first_name_param;
}
string User::get_first_name(){
    return first_name;
}
void User::set_last_name(string last_name_param){
    last_name = last_name_param;
}
string User::get_last_name(){
    return last_name;
}
void User::main_menu(int age){
    if(age < 18){
        cout<<"Choose one of these options\n"<<"Tourism:       Tourism places and more information\n"<<"Health:        Health related concerns\n"<<"Information:   More Information about coup d’ etat in Myanmar\n"<<"Donations:     Donation addresses/website links\n"<<"Save:          to save desired options into text file\n";
    }
    else if(age >= 18){
    cout<<endl;
    cout<<"Choose one of these options. Enter the name of the option (For example: protest) \n"<<
    "Protest:       Information about Protests\n"<<
    "Tourism:       Tourism places and more information\n"<<
    "Health:        Health related concerns\n"<<
    "Information:   More Information about coup d’ etat and Myanmar\n"<<
    "Job:           Job Opportunities\n"<<
    "Interview:     Interview Q/A\n"<<
    "Volunteering:  Volunteering places \n"<<
    "Work:          Preferred Work Locations\n"<<
    "Donations:     Donation addresses/website links\n"<<
    "Save:          to save desired options into text file\n";
    }
    else{
        cout<<"Invalid Option!";
    }
}
int User::get_menu(string menu_choice){
        if(menu_choice == "Protest"||menu_choice == "protest"){
            cout<<endl;
            cout<<"Choose one of these options to proceed. Enter a number between 1 and 6 \n"<<
            "1. Get Protest Locations\n"<<
            "2. Free Food Locations\n"<<
            "3. Shelter locations\n"<<
            "4. Protection numbers/ addresses\n"<<
            "5. Emergency situation\n"<<
            "6. Money Donation\n";
        }
        else if(menu_choice == "Tourism"||menu_choice == "tourism"){
            cout<<endl;
            cout<<"Choose one of these options to proceed. Enter a number between 1 and 4\n"<<
            "1. Money Donation\n"<<
            "2. Free Food Locations\n"<<
            "3. Protection numbers/ addresses\n"<<
            "4. Emergency situation\n";

        }
        else if(menu_choice == "Health"||menu_choice == "health"){
            cout<<endl;
            cout<<"Choose one of these options to proceed. Enter a number between 1 and 5 \n"<<
            "1. Get Mental Help\n"<<
            "2. Heath Care situation in Myanmar\n"<<
            "3. Free Food Locations\n"<<
            "4. Protection numbers/ addresses\n"<<
            "5. Emergency situation\n";

        }
    return 0;
}

