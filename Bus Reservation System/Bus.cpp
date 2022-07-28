#include<bits/stdc++.h>

using namespace std;

int dd=0;
vector<string>bus;
void name()
{
    cout<<endl;
    cout<<"\t                                           ^^~ BUS RESERVATION SYSTEM ~^^ "<<endl<<endl;
}

void mainIndex()
{
    cout<<"\t\t                                          ---- INDEX ----"<<endl<<endl;
    cout<<"\t\t                                            1. Sit Booking."<<endl;
    cout<<"\t\t                                            2. viewBookSit"<<endl;
    cout<<"\t\t                                            3. Cancle Booking."<<endl;
    cout<<"\t\t                                            4. Sit Availablility"<<endl;
    cout<<"\t\t                                            5. Exit."<<endl;

}

void BookingSit()
{

    string s;

    string a,c,d,e,n,f,serial,m;
    cout<<endl;

    cout<<"                                                    Enter Serial Number: ";
    cin>>serial;
    string file =  serial + ".txt";
    ifstream read;
    read.open(file.c_str());
    getline(read,m,' ');



    if(serial == m)
    {
        cout<<"                                                sit already booked "<<endl;

    }
    else
    {

        ofstream busList;
        string      filename = serial + ".txt";
        busList.open(filename.c_str(),ios::app);
        cout<<"                                                    Enter Sit Number : ";
        cin>>a;
        cout<<"                                                    Enter Pacenger Nick Name : ";
        cin>>n;
        cout<<"                                                   Enter Started Time : ";
        cin>>c;
        cout<<"                                                    Enter Arival Time : ";
        cin>>d;
        cout<<"                                                    Enter  From : ";
        cin>>e;
        cout<<"                                                    Enter  To : ";
        cin>>f;

        busList << serial <<" "<<a<<" "<<n<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
        dd++;
    }
}


void viewBookSit()
{
    string m,serial;
    cout<<endl;
    cout<<"                                                    Enter Serial Number: ";
    cin>>serial;
    string file =  serial + ".txt";
    ifstream read;
    read.open(file.c_str());
    getline(read,m,' ');

    if(serial == m)
    {

        string a,n,c,d,e,f,s;
        ifstream readR;
        readR.open(file.c_str());

        getline(readR,s,' ') ;
        getline(read,a,' ') ;
        getline(read,n,' ') ;
        getline(read,c,' ') ;
        getline(read,d,' ') ;
        getline(read,e,' ') ;
        getline(read,f,'\n') ;
        cout<<"\n\t\t\t\t\t           Booking sit details for serial "<<s<<" is: "<<endl;
        cout<<"\n\t\t\t\t\t           "<<s<<" "<<a<<" "<<n<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<endl;

    }

    else cout<<"                                     Not Serial Found"<<endl;

}



void CancleBooking()
{
    int ss;
    char file[100];
    cout<<"\n\t\t\t\t                       Enter Serial You Want Cancle  format (serial.txt):  ";
    scanf(" %[^\n]s",file);
//  gets(file);

    ss=remove(file);
    if(ss==0)
    {
        cout<<"                                                         Booking Cancle Successfully"<<endl;
        dd--;
    }
    else
    {
        cout<<endl;
        cout<<"\n\n\t\t\t\t                        File Not Found!"<<endl;
    }

}

void exitFunction()
{
    exit(0);
}
void sitable()
{
     cout<<"                                                "<<60-dd<<endl;
}
int main()
{
    system("  Color 80  ");
    name();
    // loadBusList();
    int a;
    bool exit = false;
    while(!exit)
    {
        mainIndex();
        cout<<endl;
        cout << "\t\t                                            Choose an option: ";
        cin >> a;
        switch(a)
        {
        case 1:
            BookingSit();
            break;
        case 2:
            viewBookSit();
            break;
        case 3:
            CancleBooking();
            break;
        case 4:
            sitable();
            break;
        case 5:
            exitFunction();
            break;
        default:
            cout<<"Please Choose from index."<<endl;
        }

    }
    return 0;
}

