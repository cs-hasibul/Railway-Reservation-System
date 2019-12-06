#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
void buy_ticket()
{
    fstream hasan2;
    hasan2.open("Train_Schedule_Details.txt",ios::in);
    char from [15];
    char schedule[15];
    char to [15];
    char train_name[15];
    char time[15];
    char cost[15];
    char a[15];
    char name[15];
    char seat_no[15];
    char seat_class[15];
    char date[15];
    cout<<endl;
    cout<<endl;
    cout<<" Enter the Route No: ";
    cin.ignore();
    cin.getline(a,15);
    int x=0;
    while(!hasan2.eof())
    {
        hasan2.getline(schedule,15,'|');
        hasan2.getline(from,15,'|');
        hasan2.getline(to,15,'|');
        hasan2.getline(train_name,15,'|');
        hasan2.getline(time,15,'|');
        hasan2.getline(cost,15);
        if(strcmp(schedule, a)==0)
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t"<<"\t"<<"\t"<<" ...... Passenger Information ........"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;

            cout<<endl;
            cout<<" Name: ";
            cin.getline(name,15);
            cout<<endl;
            cout<<" Seat Class: ";
            cin.getline(seat_class,15);
            cout<<endl;
            cout<<" Seat No: ";
            cin.getline(seat_no,15);
            cout<<endl;
            cout<<" Date: ";
            cin.getline(date,15);
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<".........Welcome........"<<endl;
            cout<<"........Your Ticket is Ready......"<<endl;

            ofstream hasan1(" Train Ticket.txt");
            hasan1<<endl;
            hasan1<<"\t"<<"\t"<<"--- Bangladesh Railway Ticket ---"<<endl;
            hasan1<<endl;
            hasan1<<endl;
            hasan1<<"        *************************************"<<endl;
            hasan1<<endl;
            hasan1<<" Name: "<<name<<endl;
            hasan1<<endl;
            hasan1<<" From: "<<from<<endl;
            hasan1<<endl;
            hasan1<<" To: "<<to<<endl;
            hasan1<<endl;
            hasan1<<" Train Name: "<<train_name<<endl;
            hasan1<<endl;
            hasan1<<" Time: "<<time<<endl;
            hasan1<<endl;
            hasan1<<" Class: "<< seat_class<<endl;
            hasan1<<endl;
            hasan1<<" Seat No: "<<seat_no<<endl;
            hasan1<<endl;
            hasan1<<" Date: "<<date<<endl;
            hasan1<<endl;
            hasan1<<" Cost: "<<cost<<endl;
            hasan1<<endl;
            hasan1<<endl;
            hasan1<<endl;
            hasan1<<"\t"<<"\t"<<"\t"<<"\t"<<"-------- Thank You -------- "<<endl;
            hasan1<<"\t"<<"\t"<<"\t"<<"\t"<<"--- Have a Safe Journey --- "<<endl;

            x=1;
            break;
        }

    }
    if(x==0)
    {
        cout<<endl;
        cout<<endl;
        cout<<" Sorry ! Not Matched ......."<<endl;

    }
    hasan2.close();

}

void delete_routes()
{

    fstream hasan2;
    fstream hasan;

    hasan2.open("Train_Schedule_Details.txt",ios::in);
    hasan.open("hasan.txt",ios::out);
    char from [15];
    char route[15];
    char to [15];
    char train_name[15];
    char time[15];
    char cost[15];
    char a[15];
    cin.ignore();
    cout<<endl;
    cout<<endl;
    cout<<" Enter the Route No. Delete : ";
    cin.getline(a,15);
    while(!hasan2.eof())
    {
        hasan2.getline(route,15,'|');
        hasan2.getline(from,15,'|');
        hasan2.getline(to,15,'|');
        hasan2.getline(train_name,15,'|');
        hasan2.getline(time,15,'|');
        hasan2.getline(cost,15);
        if(strcmp(route,a)==0)
        {
            continue;
        }
        else
        {
            hasan<< route<<'|'<<from<<'|'<<to<<'|'<<train_name<<'|'<<time<<'|'<<cost<<endl;
        }


    }
    hasan.close();
    hasan2.close();

    hasan2.open("Train_Schedule_Details.txt",ios::out);
    hasan.open("hasan.txt",ios::in);
    while(!hasan.eof())
    {
        hasan.getline(route,15,'|');
        hasan.getline(from,15,'|');
        hasan.getline(to,15,'|');
        hasan.getline(train_name,15,'|');
        hasan.getline(time,15,'|');
        hasan.getline(cost,15);
        hasan2<< route<<'|'<<from<<'|'<<to<<'|'<<train_name<<'|'<<time<<'|'<<cost<<endl;
    }
    hasan.close();
    hasan2.close();
    remove("hasan.txt");
    cout<<endl;
    cout<<endl;
    cout<<" Your Train Schedule is Successfully Delete  ...."<<endl;
}


void display_routes()
{
    char from [15];
    char route[15];
    char to [15];
    char train_name[15];
    char time[15];
    char cost[15];

    fstream hasan2;
    hasan2.open("Train_Schedule_Details.txt",ios::in);
    cout<<endl;
    cout<<endl;
    cout<<" "<<" Route No"<<"\t"<<"From"<<"\t"<<"\t"<<"  To"<<"\t"<<"\t"<<"  Train Name"<<"\t\t"<<" Time"<<"\t\t"<<" Cost"<<endl;
    cout<<endl;
    while(!hasan2.eof())
    {
        hasan2.getline(route,15,'|');
        hasan2.getline(from,15,'|');
        hasan2.getline(to,15,'|');
        hasan2.getline(train_name,15,'|');
        hasan2.getline(time,15,'|');
        hasan2.getline(cost,15);
        cout<<endl;
        cout<<"    "<<route<<"\t"<<"\t"<<from <<"\t"<<"\t "<<to<<"\t"<<"\t"<<   train_name<<"\t"<<"\t"<<    time<<"\t"<<"\t"<<cost<<endl;

    }
}
void search_routes(   )
{

    fstream hasan2;
    hasan2.open("Train_Schedule_Details.txt",ios::in);
    char from [15];
    char route[15];
    char to [15];
    char train_name[15];
    char time[15];
    char cost[15];
    char a[15];
    cout<<endl;
    cout<<endl;
    cout<<" Enter the Route No. for searching: ";
    cin.ignore();
    cin.getline(a,15);
    int x=0;
    while(!hasan2.eof())
    {
        hasan2.getline(route,15,'|');
        hasan2.getline(from,15,'|');
        hasan2.getline(to,15,'|');
        hasan2.getline(train_name,15,'|');
        hasan2.getline(time,15,'|');
        hasan2.getline(cost,15);
        if(strcmp(route, a)==0)
        {
            cout<<endl;
            cout<<endl;
            cout<<" "<<" Route No"<<"\t"<<"From"<<"\t"<<"    To"<<"\t"<<"\t"<<"     Train Name"<<"\t"<<"\t"<<"Time"<<"\t"<<"Cost"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"    "<<route<<"\t"<<"\t"<<from <<"\t"<<" "<<to<<"\t"<<train_name<<"\t"<<"\t"<<" "<<time<<"\t"<<"\t"<<cost<<endl;

            x=1;
            break;
        }

    }
    if(x==0)
    {
        cout<<endl;
        cout<<endl;
        cout<<" Sorry ! Not matched ..."<<endl;
    }
    hasan2.close();
}
void  insert_routes()
{

    char from [15];
    char route[15];
    char to [15];
    char train_name[15];
    char time[15];
    char cost[15];
    fstream hasan2;
    hasan2.open("Train_Schedule_Details.txt", ios::app);
    cin.ignore();
    cout<<endl;
    cout<<endl;
    cout<<" Route No: ";
    cin.getline(route,15);
    cout<<endl;
    cout<<" From: ";
    cin.getline(from,15);
    cout<<endl;
    cout<<" To: ";
    cin.getline(to,15);
    cout<<endl;
    cout<<" Train Name: ";
    cin.getline(train_name,15);
    cout<<endl;
    cout<<" Time: ";
    cin.getline(time,15);
    cout<<endl;
    cout<<" Cost: ";
    cin.getline(cost,15);
    cout<<endl;
    cout<<endl;
    hasan2<< route<<'|'<<from<<'|'<<to<<'|'<<train_name<<'|'<<time<<'|'<<cost<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" ...Train Schedule Inserting Has Been Successfully Done ..."<<endl;
    hasan2.close();
}
void modify_routes()
{
    fstream hasan2;
    fstream hasan;

    hasan2.open("Train_Schedule_Details.txt",ios::in);
    hasan.open("hasan.txt",ios::out);
    char from [15];
    char route[15];
    char to [15];
    char train_name[15];
    char time[15];
    char cost[15];
    char a[15];
    cin.ignore();
    cout<<endl;
    cout<<endl;
    cout<<" Enter the Route No. to Update : ";
    cin.getline(a,15);
    while(!hasan2.eof())
    {
        hasan2.getline(route,15,'|');
        hasan2.getline(from,15,'|');
        hasan2.getline(to,15,'|');
        hasan2.getline(train_name,15,'|');
        hasan2.getline(time,15,'|');
        hasan2.getline(cost,15);
        if(strcmp(route,a)==0)
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t"<<"\t"<<"\t"<<" ___ New Train Schedule Inserting ___"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<" Route No: ";
            cin.getline(route,15);
            cout<<endl;
            cout<<" From: ";
            cin.getline(from,15);
            cout<<endl;
            cout<<" To: ";
            cin.getline(to,15);
            cout<<endl;
            cout<<" Train Name: ";
            cin.getline(train_name,15);
            cout<<endl;
            cout<<" Time: ";
            cin.getline(time,15);
            cout<<endl;
            cout<<" Cost: ";
            cin.getline(cost,15);
            cout<<endl;
            cout<<endl;
            hasan<< route<<'|'<<from<<'|'<<to<<'|'<<train_name<<'|'<<time<<'|'<<cost<<endl;
        }
        else
        {
            hasan<< route<<'|'<<from<<'|'<<to<<'|'<<train_name<<'|'<<time<<'|'<<cost<<endl;
        }


    }
    hasan.close();
    hasan2.close();

    hasan2.open("Train_Route_Details.txt",ios::out);
    hasan.open("hasan.txt",ios::in);
    while(!hasan.eof())
    {
        hasan.getline(route,15,'|');
        hasan.getline(from,15,'|');
        hasan.getline(to,15,'|');
        hasan.getline(train_name,15,'|');
        hasan.getline(time,15,'|');
        hasan.getline(cost,15);
        hasan2<< route<<'|'<<from<<'|'<<to<<'|'<<train_name<<'|'<<time<<'|'<<cost<<endl;
    }
    hasan.close();
    hasan2.close();
    remove("hasan.txt");
    cout<<endl;
    cout<<endl;
    cout<<"Your Modifying is successfully Done ..."<<endl;
}
void login()
{
     string username="";
    char ch;
    bool loginsuccess =false;

    do
    {
        char pass[10];
        int i = 0;
        char a;
        cout<<endl;
        cout<<endl;
        cout<<"------------Please Enter Your Username and Password--------------"<<endl;
        cout<<endl;
        cout<<"Enter Your Username: ";
        cin>>username;
         cout<<endl;
        cout<<"Enter Your Password: ";

        for(i=0;;)
        {
            a=getch();
            if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))

            {
                pass[i]=a;
                ++i;
                cout<<"*";
            }
            if(a=='\b'&&i>=1)

            {
                cout<<"\b \b";
                --i;
            }
            if(a=='\r')
            {
                pass[i]='\0';
                break;
            }
        }

        string password(pass);

        if(username=="Hasan3137" && password=="18103137")
        {
            cout<<endl;
            cout<<endl;
            cout<<"..............Welcome........"<<endl;
            cout<<endl;
            cout<<" ..... Log in Successful .........."<<endl;
            cout<<endl;
            cout<<endl;
            loginsuccess =true;
            system("pause");
        }
        else
        {
            cout<<endl;
            cout<<endl;
            cout<<" Sorry ! Your Username or Password is Incorrect ....."<<endl;
        }
    }
    while(!loginsuccess);
}

int main()
{
    int r,enter;


    cout<<endl;
    cout<<"                                  "<<endl;
    cout<<"                                  ____   "<<endl;
    cout<<"                                 |____|"<<endl;
    cout<<"                         ____    __||__    ____    "<<endl;
    cout<<"                        |_  _|  |______|  |_  _|   "<<endl;
    cout<<"                          ||       ||       || "<<endl;
    cout<<"                          ||       ||       || "<<endl;
    cout<<"                          ||   B   ||   A   || "<<endl;
    cout<<"                          ||       ||       || "<<endl;
    cout<<"                          ||_______||_______||    "<<endl;
    cout<<"                            -------  -------   "<<endl;
    cout<<"                                  ----    "<<endl;
    cout<<"                                       "<<endl;
    cout<<endl;
    cout<< "             ==================================================================\n";
    cout<< "             ==================================================================\n";
    cout<< "             ==================================================================\n";
    cout<< "             == Welcome to Bangladesh Railway Ticket Reservation System      ==\n";
    cout<< "             ==                                                              ==\n";
    cout<< "             ==                                       Md Hasibul Hasan       ==\n";
    cout<< "             ==                                             ID:18103137      ==\n";
    cout<< "             ==                                                              ==\n";
    cout<< "             ==================================================================\n";
    cout<< "             ==================================================================\n";
    cout<< "             =================================================================="<<endl;
login();
start:
menu:

    cout<<endl;
    cout<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"..... Main Menu ...... "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" 1. Insert Train Schedule Details"<<endl;
    cout<<endl;
    cout<<" 2. Search Train Schedule Details"<<endl;
    cout<<endl;
    cout<<" 3. Display Train Schedule Details"<<endl;
    cout<<endl;
    cout<<" 4. Modify Train Schedule Details"<<endl;
    cout<<endl;
    cout<<" 5. Delete Train Schedule Details"<<endl;
    cout<<endl;
    cout<<" 6. Buy a Ticket"<<endl;
    cout<<endl;
mhhh:
    cout<<endl;
    cout<<" Enter Your Choice: ";
    cin>>r;
    switch (r)
    {
    case 1 :
    {
        insert_routes();

        break;
    }

    case 2:
    {
        search_routes();
        break;
    }

    case 3:
    {
        display_routes();
        break;
    }

    case 4 :
    {
        modify_routes();

        break;
    }

    case 5 :
    {
        delete_routes();
        break;
    }
    case 6 :
    {

        display_routes();
        buy_ticket();
        break;

    }

    default :
    {
        cout<<endl;
        cout<<endl;
        cout<<" ---- Press The Correct Button ----"<<endl;
        goto mhhh;
    }


    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" .......Go to Main Menu ......."<<endl;
    cout<<endl;
    cout<<"   1.Yes   2.No"<<endl;
    cout<<endl;
    cout<<" Enter Your Choice: ";
    cin>>enter;
    if(enter==1)
    {
        goto menu;
    }


}


