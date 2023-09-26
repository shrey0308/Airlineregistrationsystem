#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management 
{
    public:

        Management()
        {
            mainMenu();
        }
};


class Details
{
    public:
        
        static string name,gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"Enter the customer ID:";
            cin>>cId;
            cout<<"Enter the name :";
            cin>>name;
            cout<<"\nEnter the age :";
            cin>>age;
            cout<<"\n Address :";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;


        }

};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe", "Turkey"};

            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Airlines"<<endl;
            cout<<"Press the number of the country of which you want to book the flight:";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    {
                        cout<<"___________________Welcome to Dubai Emirates________________\n"<<endl;

                        cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. DUB - 498"<<endl;
                        cout<<"\t08-01-2023 8:00AM 10hrs Rs. 14000"<<endl;
                        cout<<"1. DUB - 658"<<endl;
                        cout<<"\t09-01-2023 4:00AM 12hrs Rs. 10000"<<endl;
                        cout<<"1. DUB - 508"<<endl;
                        cout<<"\t11-01-2023 8:00AM 10hrs Rs. 9000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 14000;
                            cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }

                        else if(choice1==2)
                        {
                            charges=14000;
                            cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==3)
                        {
                            charges=9000;
                            cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else
                        {
                            cout<<"Invalid input ,shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                        break;
            


                    } 

                    case 2:
                    {
                        cout<<"___________________Welcome to Canada Airlines________________\n"<<endl;

                        cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. CA - 198"<<endl;
                        cout<<"\t09-01-2023 2:00AM 20hrs Rs. 34000"<<endl;
                        cout<<"1. CA - 158"<<endl;
                        cout<<"\t11-01-2023 6:00AM 23hrs Rs. 29000"<<endl;
                        cout<<"1. CA - 208"<<endl;
                        cout<<"\t14-01-2023 12:00AM 21hrs Rs. 40000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 34000;
                            cout<<"\nYou have successfully booked the flight CA-198"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }

                        else if(choice1==2)
                        {
                            charges=29000;
                            cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==3)
                        {
                            charges=40000;
                            cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else
                        {
                            cout<<"Invalid input ,shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                        break;




                    }

                    case 3:
                    {
                        cout<<"___________________Welcome to UK Airways_______________\n"<<endl;

                        cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. UK - 798"<<endl;
                        cout<<"\t12-01-2023 10:00AM 14hrs Rs. 44000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 44000;
                            cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }

                        else
                        {
                            cout<<"Invalid input ,shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                        break;


                    }

                    case 4: 
                    {
                        cout<<"___________________Welcome to US Airways________________\n"<<endl;

                        cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. US - 567"<<endl;
                        cout<<"\t10-01-2023 9:00AM 22hrs Rs. 37000"<<endl;
                        cout<<"1. US - 659"<<endl;
                        cout<<"\t09-01-2023 11:00AM 24hrs Rs. 39000"<<endl;
                        cout<<"1. US - 548"<<endl;
                        cout<<"\t11-01-2023 4:00AM 21hrs Rs. 42000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 37000;
                            cout<<"\nYou have successfully booked the flight US-567"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }

                        else if(choice1==2)
                        {
                            charges=39000;
                            cout<<"\nYou have successfully booked the flight US - 659"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==3)
                        {
                            charges=42000;
                            cout<<"\nYou have successfully booked the flight US - 548"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else
                        {
                            cout<<"Invalid input ,shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                        break;


                    }
                    case 5:
                    {
                        cout<<"___________________Welcome to Australian Airlines________________\n"<<endl;

                        cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. AUS - 798"<<endl;
                        cout<<"\t18-01-2023 9:00AM 20hrs Rs. 44000"<<endl;
                        cout<<"1. AUS - 158"<<endl;
                        cout<<"\t19-01-2023 4:00AM 22hrs Rs. 34000"<<endl;
                        cout<<"1. DUB - 708"<<endl;
                        cout<<"\t17-01-2023 8:00AM 21hrs Rs. 42000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 44000;
                            cout<<"\nYou have successfully booked the flight AUS-798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }

                        else if(choice1==2)
                        {
                            charges=34000;
                            cout<<"\nYou have successfully booked the flight AUS - 158"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==3)
                        {
                            charges=42000;
                            cout<<"\nYou have successfully booked the flight AUS - 708"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else
                        {
                            cout<<"Invalid input ,shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                        break;


                    }
                    default :
                    {
                        cout<<"Invalid input, Shifting you to the main menu "<<endl;
                        //mainMenu();
                        //break;
                    }
            }
        }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:

        void Bill()
        {
            string destinations = "";
            ofstream outf("records.txt");
            {
                outf<<"______________Shreyansh Airlines______________"<<endl;
                outf<<"______________Ticket____________________"<<endl;
                outf<<"_________________________________________"<<endl;

                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\tDescription"<<endl<<endl;

                if(registration::choice==1)
                {
                    destinations="Dubai";
                }
                else if(registration::choice==2)
                {
                    destinations="Canada";
                }
                else if(registration::choice==3)
                {
                    destinations="UK";
                }
                else if(registration::choice==4)
                {
                    destinations="US";
                }
                else if(registration::choice==5)
                {
                    destinations="Australia";
                }
                
                outf<<"Destination\t\t"<<destinations<<endl;
                outf<<"Flight Cost: \t\t"<<registration::charges<<endl;

            }
            outf.close();

        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                     Shreyansh Airlines \n"<<endl;
    cout<<"\t_____________________Main Menu_______________"<<endl;

    cout<<"\t____________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;

    cout<<"\t\t Press 1 to add the Customer Details        \t"<<endl;
    cout<<"\t\t Press 2 for Flight Registration            \t"<<endl;
    cout<<"\t\t Press 3 for Ticket and Charges             \t"<<endl;
    cout<<"\t\t Press 4 to Exit                            \t"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;
    cout<<"\t________________________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"_______________Customers_______________\n"<<endl;
            d.information();
            cout<<"Press 1  to go back to Main Menu ";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;

        }
        
        case 2:
            {
                cout<<"___________Book a flight using this system_______________\n"<<endl;
                r.flights();
                break;
            }

            case 3:
            cout<<"________GET YOUR TICKET_________\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";

            cin>>back;
                
                if(back==1)
                {
                    t.dispBill();
                    cout<<"Press any key to go back to main menu: ";
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                else
                {
                    mainMenu();
                }
                break;
    
    case 4:
    {
        cout<<"\n\n\t_________Thank you__________"<<endl;
        break;

    }
    
    default :
        {
            cout<<"Invalid input, Please try again\n"<<endl;
            //mainMenu();
            break;
        }
  
}

}




int main() {
    Management Mobj;
    //return 0;
}
