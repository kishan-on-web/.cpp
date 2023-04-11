#include<iostream>
#include <conio.h>
using namespace std;

int main(){
	
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t -: BANK MANAGMENT SYSTEM :-\n";
	cout<<"\t\t\t\t  ---------------------------------------\n\n";
	cout<<"\t\t\t\t\t-: Designed N Programed By :-\n";
	cout<<"\t\t\t\t  ---------------------------------------\n";
	cout<<"\t\t\t\t\t      KISHAN R KEVADIYA\n\n\n";
	cout<<"\t\t\t\t\t       -: Trainere :-\n";
	cout<<"\t\t\t\t  ---------------------------------------\n";
	cout<<"\t\t\t\t\t        RAJAN SHIROYA\n\n\n\n\n\n";
	
	cout<<" \t\t\t\t\tPRESS ENY KEY TO  CONTINUE......";
    getch();
    system("CLS");
    
    cout<<"\n\n\n\n";
    cout<<"\t\t\t==============================================================================\n";
    cout<<"\t\t\t\t-: Press A to Login as Administrator Or S to Login a STAFF :-\n";
    cout<<"\t\t\t==============================================================================\n\n\n";
	
	char n;
	cout<<"\t\t\t\t\t\t\t\t";
	cin>>n;
	string name,email;
	int ac_no,phone;
	
	switch(n){
		case 'A':
			system("CLS");
			cout<<"\t\t\t\t  ---------------------------------------\n";
			cout<<"\t\t\t\t\t   Welcome To Administrator\n";
			cout<<"\t\t\t\t  ---------------------------------------\n\n\n";
			
			cout<<"\t\t\t\t\t\t  System Crash\n\n\n\n";
			break;
		
		case 'S':
			system("CLS");
			cout<<"\n\n\n\t\t------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\t\t\t-: Welcome As STAFF :-\n";
			cout<<"\t\t------------------------------------------------------------------------------\n\n";
			cout<<"\t\t\t\tEnter The Name Of STAFF :\t\t";
			cin>>name;
			cout<<"\t\t\t\tEnter The Account Number Of STAFF :\t";
			cin>>ac_no;
			cout<<"\t\t\t\tEnter The Phone Number Of STAFF :\t";
			cin>>phone;
			cout<<"\t\t\t\tEnter The E-mail Of STAFF :\t\t";
			cin>>email;
			
			system("CLS");
			cout<<"\n\n\n\t\t\t=====================================================================\n";
			cout<<"\t\t\t   Name           :"<<name<<endl;
			cout<<"\t\t\t   Account No.    :"<<ac_no<<endl;
			cout<<"\t\t\t   Phone No.      :"<<name<<endl;
			cout<<"\t\t\t   E-mail         :"<<email<<endl;
			cout<<"\t\t\t=====================================================================\n\n\n";
			cout<<"\t\t\t\t\t Press[1] to Deposite the Money\n";
			cout<<"\t\t\t\t\t Press[2] to Tranfer the Money\n";
			cout<<"\t\t\t\t\t Press[3] to Withdraw the Money\n\n\n";
			
			int second;
			cout<<"\t\t\t\t\t\t\t\t";
			cin>>second;
			
			int balance = 400000,d;
			switch(second){
				case 1:
					system("CLS");
					cout<<"\n\n\n\t\t\t---------------------------------------------------------------------\n";
					cout<<"\t\t\t\t\t\t   Deposite the money\n";
					cout<<"\t\t\t---------------------------------------------------------------------\n\n\n";
					cout<<"\t\t\t\t Your actual Balance is :-        "<<balance<<"\n\n";
					cout<<"\t\t\t\t How Many Amaount you Deposite :- ";
					cin>>d;
					cout<<"\n\n\t\t\t\t congrates your ammount has deposite successfully\n\n";
					cout <<"\t\t\t\t Your Account Balance is  :-     "<<balance+d<<"\n\n\n\n";
					break;
				case 2:
					system("CLS");
					cout<<"\t\t\t\t  ---------------------------------------\n";
					cout<<"\t\t\t\t\t   Server Down please try again\n";
					cout<<"\t\t\t\t  ---------------------------------------\n\n\n";
					break;
				case 3:
					system("CLS");
					cout<<"\n\n\n\t\t\t---------------------------------------------------------------------\n";
					cout<<"\t\t\t\t\t\t   Deposite the money\n";
					cout<<"\t\t\t---------------------------------------------------------------------\n\n\n";
					cout<<"\t\t\t\t Your actual Balance is :-        "<<balance<<"\n\n";
					cout<<"\t\t\t\t How Many Amaount you Deposite :- ";
					cin>>d;
					cout<<"\n\n\t\t\t\t congrates your ammount has deposite successfully\n\n";
					cout <<"\t\t\t\t Your Account Balance is  :-     "<<balance-d<<"\n\n\n\n";
					break;
			}
			break;
	}
	
	return 0;
}
