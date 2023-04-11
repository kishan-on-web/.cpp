#include<iostream>
#include <conio.h>
using namespace std;

main(){
	
	int t,f;
	f=200000;
	cout <<"\n\n\n\n\n\t\t\t\t--:BANK MANAGMENT SYSTEM :--\n";
	cout <<"\t\t\t\t-----------------------------\n";
	cout<< "\t\t\t\t--:Desinged N Programed by :--\n";
	cout <<"\t\t\t\t-----------------------------\n";
	cout<< "\t\t\t\t--:      RAJAN SHIROYA     :--\n";
	cout << "\n\n";
	cout<< "\t\t\t\t--:          TRAINER        :--\n";
	cout <<"\t\t\t\t-----------------------------\n";
	cout<< "\t\t\t\t--:      KISHAN KEVADIYA     :--\n\n\n\n";
	
	cout<<" \t\t\t\t PRESS ENY KEY TO  CONTINUE......";
    getch();
		
	system("CLS");
	cout<<"\n\n\n\n\n";
	char input;
	cout <<"\t\t\t==========================================================\n\n";
	
	cout<<"\t\t\t--:Press A to Log in As administrator or S to log in a staff :-\n\n";
	cout <<"\t\t\t==========================================================\n\n";
	cin>>input;
	string name,email;
	int ac,mob;

	switch(input){
	
		case 'A' :
			cout<< "WElCOME To administrator";
			break;
		
		case 'S' :
			system("CLS");
			cout <<"\n\n\n\n\t\t\t==========================================================\n\n";
			cout <<" \t\t\t\t          WElCOME As Staff\n";
			cout <<"\t\t\t==========================================================\n\n";
			cout<<"\t\t\t\tEnter The name of staff              : ";
			cin >> name;
			cout<<"\t\t\t\tEnter The Account Number  of staff   : ";
			cin >> ac;
			cout<<"\t\t\t\tEnter The Phone Number  of staff     : ";
			cin >> mob;
			cout<<"\t\t\t\tEnter The Email  of staff            : ";
			cin >> email;
			system("CLS");
			cout <<"\t\t\t==========================================================\n\n";
			cout<<" \t\t\t\tName            :"<<name <<endl;
			cout<<" \t\t\t\tAccount number  :"<<ac <<endl;
			cout<<" \t\t\t\tPhone number    :"<<mob <<endl;
			cout<<" \t\t\t\tE-mail          :"<<email <<endl;
			cout <<"\t\t\t==========================================================\n\n\n\n";
			cout<<"\t\t\t\t press[1] to deposite the money\n";
			cout<<"\t\t\t\t press[2] to Tranfer the money\n";
			cout<<"\t\t\t\t press[3] to withdraw the money\n";
			int two;
			cin>>two;
			
			switch(two){
				case 1:
						system("CLS");
						cout <<"\t\t\t==========================================================\n";
						cout<<"\t\t\t\t         deposite the money\n";
						cout <<"\t\t\t==========================================================\n\n\n\n";
						cout<<"\t\t\t\t Your actual amount is :-" <<f <<endl;
						cout<<"\t\t\t\t How many amaount you deposite :-";
						cin>>t;
						cout<<"\t\t\t\t congrates your ammount has deposite successfully\n";
						cout <<"\t\t\t\t Your Account Balance is  :- "<<f+t;
						break;
				case 2:
					cout <<"Server Down please try again";
					break;
				case 3:
						system("CLS");
						cout <<"\t\t\t==========================================================\n";
						cout<<"\t\t\t\t         withdraw the money\n";
						cout <<"\t\t\t==========================================================\n\n\n\n";
						cout<<"\t\t\t\t Your actual amount is :-" <<f <<endl;
						cout<<"\t\t\t\t How many amaount you widthraw :-";
						cin>>t;
						cout<<"\t\t\t\t congrates your ammount has withdraw successfully\n";
						cout <<"\t\t\t\t Your Account Balance is  :- "<<f-t;
						
			}
			break;
		 default :
			cout<<"Server Down please try again";
			break;
		
	}
		
	
	
	
}
