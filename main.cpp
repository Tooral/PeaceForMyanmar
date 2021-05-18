//  Peace for Myanmar
// This project has been created by Tural Hagverdiyev


#include <iostream>
#include <string>
#include <ctype.h>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "Action.hpp"
#include "Healing.hpp"
#include "User.hpp"
#include "Protesting.hpp"
#include "Travelling.hpp"

using namespace std;

void get_string(string& s){
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void get_int(int& i){
    cin >> i;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    User user;
    Action act;
    
    string first_name;
    string last_name;
    string choice;
    int rand;
    int donations;
    int menu_option;
    int age;
    
    
    cin>>user;
    cout<<"Enter Your Age: ";
    get_int(age);
    
    string again = "yes";
while(again == "yes") {
    if(age > 0){
    user.main_menu(age);
    }
    else{
        cout<<"Wrong input!";
        break;
    }
    cout<<endl;
    cout<<"Enter your choice:";
    get_string(choice);
    
    cout<<endl;
    if(choice == "protest" || choice == "Protest"){
        Protesting prst;
        user.get_menu(choice);
        
        cout<<endl;
        cout<<"Enter your choice: ";
        get_int(menu_option);
        
        if (menu_option == 1) {
            cout<<endl;
            prst.get_protest();
            cout<<endl;
        }
        else if(menu_option==2){
            cout<<endl;
            prst.get_free_food();
            cout<<endl;
        }
        else if (menu_option == 3){
            cout<<endl;
            prst.get_free_shelter();
            cout<<endl;
        }
        else if (menu_option == 4){
            cout<<endl;
            prst.get_protection();
            cout<<endl;
        }
        else if (menu_option == 5){
            cout<<endl;
            prst.get_help_emergency();
            cout<<endl;
        }
        else if (menu_option == 6){
            cout<<endl;
            cout<<"Would you like to donate some money for people suffering from this sitauion in myanmar?(yes/no): ";
            get_string(choice);
            if (choice == "yes") {
                cout<<"How much would you consider donating?(enter a number) :  ";
                get_int(donations);
                cout<<"Right Donation places/websites have been found for you!"<<endl;
                cout<<endl;
                prst.donate_money(donations, choice);
                cout<<endl;
            }
            else if(choice == "no"){
                cout<<"Thank you for honesty! \n";
            }
            else{
                cout<<"Invalid choice!"<<endl;
            }
        }
        else{
            cout<<"Invalid choice!"<<endl;
            break;
        }
    }
    else if(choice == "tourism" || choice == "Tourism"){
        Travelling trv;
        user.get_menu(choice);
        rand = trv.random_gift();
        cout<<endl;
        cout<<"Enter your choice: ";
        get_int(menu_option);
        
        if(menu_option==1){
            string draw;
            cout<<endl;

            cout<<"Would you like to donate some money for people suffering from this sitauion in myanmar?(yes/no): ";
            get_string(choice);
            if (choice == "yes") {
                cout<<"How much would you consider donating?(enter a number) :  ";
                get_int(donations);
                cout<<"Are you planning on donating more?(yes/no) ";
                get_string(choice);
                trv.donate_money(donations, choice); 
                if (donations >= 0) {
                    ifstream input_file;
                    input_file.open("donate.txt");
                    if(input_file){
                        string line;
                        while(getline(input_file, line))
                            cout<< line << "\n";
                        input_file.close();
                    }
                    cout<<endl;
                    cout<<"Thank you for being kind and open to help people that are in need of your help!\n";
                    cout<<"Therefore, as a thank you gift, you have won a lucky draw chance from us\n";
                    cout<<"would you like to play and see your lucky draw? will display your gift once you say yes! :";
                    get_string(draw);
                    cout<<endl;
                    if(draw == "yes" || draw == "Yes"){
                        trv.get_gift(rand);
                        cout<<endl;
                    }
                    else{
                        cout<<"Invalid choice!";
                    }
                }
                else{
                    cout<<"Invalid choice!"<<endl;
                }
            }
            else if(choice == "no"){
                cout<<"Thank you for honesty! ";
            }
            else{
                cout<<"Invalid choice!"<<endl;
            }
        }
            
        else if(menu_option==2){
            cout<<endl;
            trv.get_free_food();
            cout<<endl;
        }
        else if (menu_option == 3){
            cout<<endl;
            trv.get_protection();
            cout<<endl;
        }
        else if (menu_option == 4){
            cout<<endl;
            trv.get_help_emergency();
            cout<<endl;
        }
        else {
            cout<<"Wrong input! Choose something else!"<<endl;
            break;
        }
            
    }
    else if(choice == "health" || choice == "Health"){
        Healing hlt;
        user.get_menu(choice);
        cout<<endl;
        cout<<"Enter your choice: ";
        get_int(menu_option);
        
        if(menu_option==1){
            cout<<endl;
            hlt.get_mentalhelp();
            cout<<endl;
        }
        else if(menu_option==2){
            cout<<endl;
            hlt.get_healthcare();
            cout<<endl;
        }
        else if (menu_option == 3){
            cout<<endl;
            hlt.get_free_food();
            cout<<endl;
        }
        else if (menu_option == 4){
            cout<<endl;
            hlt.get_protection();
            cout<<endl;
        }
        else if (menu_option == 5){
            cout<<endl;
            hlt.get_help_emergency();
            cout<<endl;
        }
        else {
            cout<<"Wrong input! Choose something else!"<<endl;
            break;
        }
            
    }
    else if (choice == "Information"||choice == "information"){
        cout<<endl;
        act.get_information();
        cout<<endl;
    }
    
    else if (choice == "Job"||choice == "job"){
        cout<<endl;
        act.get_work();
        cout<<endl;
    }
    
    else if (choice == "Interview"||choice == "interview"){
        cout<<endl;
        string interview;
        cout<<"Would you like to answer some questions about Myanmar situation? Your Opinion is very  valuable!(yes/no): ";
        get_string(interview);
        if (interview == "yes") {
            cout<<endl;
            act.get_interview(interview);
            act.set_interview();
            cout<<endl;
       }
        else{
           cout<<"Wrong input!"<<endl;
       }
    }
    
    else if (choice == "Volunteering"||choice == "volunteering"){
        string volunteering;
        cout<<endl;
        cout<<"Would you like to see volunteering opportunities in capital city? (yes/no) ";
        get_string(volunteering);
        if (volunteering == "yes" || volunteering == "no") {
            cout<<endl;
            act.volunteering_places(volunteering);
            cout<<endl;
        }
        else{
            cout<<"Wrong input! Choose something else!"<<endl;
        }
    }
    
    else if (choice == "Work"||choice == "work"){
        string working;
        cout<<endl;
        cout<<"Would you like to see jobs in capital city? (yes/no) ";
        get_string(working);
        if (working == "yes" || working == "no") {
            cout<<endl;
            act.get_work_locations(working);
            cout<<endl;
        }
        else{
            cout<<"Wrong input! Choose something else!"<<endl;
        }
    }
    
    else if(choice == "Donations"||choice == "donations"){
        cout<<"Do you want to donate money to the country? (yes/no) ";
        get_string(choice);
        cout<<"What amount are you considering? (enter a number) ";
        get_int(donations);
        cout<<endl;
        act.donate_money(donations, choice);
        cout<<endl;
        act.get_donation();
        cout<<endl;
    }
    
    else if (choice == "save"||choice == "Save"){
        ofstream output_file;
        output_file.open("save.txt", ios::app);
        if(output_file){
            string output;
            output_file <<user<<endl;
            output_file <<" Your age is "<<age<<endl;
            output_file.close();
        }
        string save = "yes";
        while(save == "yes"){
            cout<<endl;
            cout<<"You can save Food, Shelter, Protest, Protection, Work, Mental Health, Information, Donations, Emergency, to save files enter their exact names. What would you like to save to a file? : ";
            getline(cin, choice);
            
            save_file(act, choice);
            cout<<"do you want to add more? (yes/no) ";
            get_string(save);
            cout<< endl;
        }
    }
    else {
        cout<<"Wrong input! "<<endl;
        break;
    }
        cout<<" Do you want to go back to main menu?(yes/no): ";
        cin >> again;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<endl;
}
    string summary;
    cout<<" Would you like to have summary of your program usage? PS Only big menu options have been taken into account! (yes/no) ";
    cin>> summary;
    cout<<endl;
    if(summary == "yes" || summary == "Yes"){
        cout<<"Please re-enter your name \n";
        cout<<endl;
        cout<<"First Name: ";
        get_string(first_name);
        user.set_first_name(first_name);
        cout<<"Last Name: ";
        get_string(last_name);
        user.set_last_name(last_name);
        cout<<endl;
        
        int count1 = Healing::get_count();
        int count2 = Protesting::get_count();
        int count3 = Travelling::get_count();
        cout<<"FULL NAME: " << user.get_first_name() << " " << user.get_last_name()<<endl;
        cout<<endl;
        
        ofstream output_file;
        
        if (count1 >= 1) {
            cout<<"Health option has been used: " << count1<< " time(s)"<<endl;
            cout<<endl;
            ofstream output_file;
            output_file.open("save.txt", ios::app);
            if(output_file){
                string output;
                output_file<<"Summary of Health option, It has been used: " << count1<< " time(s)"<<endl;
                output_file << "\n\n";
                output_file.close();
            }
        }
        if (count2 >= 1){
            cout<<"Protest option has been used: " << count2<< " time(s)"<<endl;
            cout<<endl;
            ofstream output_file;
            output_file.open("save.txt", ios::app);
            if(output_file){
                string output;
                output_file<<"Summary of protest option, It has been used: " << count2<< " time(s)"<<endl;
                output_file << "\n\n";
                output_file.close();
            }
        }
        if (count3 >= 1){
            cout<<"Tourism option has been used: " << count3<< " time(s)"<<endl;
            cout<<endl;
            ofstream output_file;
            output_file.open("save.txt", ios::app);
            if(output_file){
                string output;
                output_file<<"Summary of Tourism option, It has been used: " << count3<< " time(s)"<<endl;
                output_file << "\n\n";
                output_file.close();
            }
        }
        if (count1 == 0 && count2 == 0 && count3 == 0 ) {
            cout<<"None of options were used!";
            ofstream output_file;
            output_file.open("save.txt", ios::app);
            if(output_file){
                string output;
                output_file<<"SUMMARY of program usage: \n";
                output_file<<"None of options were used!";
                output_file << "\n\n";
                output_file.close();
            }
        }
            
    }
    cout<<"Thank you for using this program, Have a great day!\n\n";
    return 0;
}
