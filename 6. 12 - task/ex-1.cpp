#include<iostream>
#includ<conio.h>

using namespace std;


 main(){
 	
 	string pass = "admin@123";
 	string pa;

    cout<<" your user id :- admin ";
	cout<<"\n Enter your password :- ";
	cin >> pa;	
	
	if(pass==pa){
		cout<<"\nLogin success Full.....\n\n";
	
	
	cout << "\t\t WElCOME to Super market Billing system \n";
	cout << "\t\t     Enter The Following details \n\n";
	
	string name,cname;
	
	cout<< "Enter cashier name :- " ;
	cin >>name;
	
	cout <<"Enter coustomer name :- ";
	cin >>cname;
	
	cout <<"\n\t***Enter 0 for none****";
	
	int qtv,ac,wm,ref,ove;
	
	cout << " \n\nQunty off tv :- ";
	cin >>qtv;
	cout << "Qunty off ac :- ";
	cin >>ac;
	cout << "Qunty off Washing machine :- ";
	cin >>wm;
	cout << "Qunty off Refrigrator :- ";
	cin >>ref;
	cout << "Qunty off Oven :-";
	cin >>ove;
	
	cout<<"\n Press Any Key To Generate Bill";
	getch();
	
	cout<< "\n\n\n\t\t\t\t\t....................LOADING.................... \n\t\t\t\t\t";

	cout<<"\n\n\t\t\t\t\tBill Generated. \n\n";
      
      system("PAUSE");
      system("CLS");
      
      int tv3 = 15000;
      int ac3 = 25000;
      int wm3 = 18000;
      int ref3 = 12000;
      int ove3 = 9000;
      
      
      int tv2 =15000 * qtv;
      int ac2 =25000 * ac;
      int wm2 = 18000 * wm;
      int ref2 = 12000 * ref;
      int ove2 = 9000 * ove;
      int subtotal = tv2 + ac2 +wm2 + ref2 + ove2;
      int t = 28;
      float text =(subtotal * t)/100;
      float billtotal = subtotal + text;
      
    cout<<"\n";
    cout <<"\t\t\t====================================================\n";
    cout <<"\t\t\t\t           super market \n";
	cout <<"\t\t\t====================================================\n";
    cout << "\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n";
	cout<<"\t\t\t--- \t ----------- \t ---------- \t -----------\n\n";
	cout<<"\t\t\t"<<qtv <<"\t TV                  "<< tv3 <<"           "<<tv2 <<"\n";
	cout<<"\t\t\t"<<ac <<"\t AC                  "<< ac3 <<"           "<<ac2 <<"\n";
	cout<<"\t\t\t"<<wm <<"\t Washing Machine     "<< wm3 <<"           "<<wm2 <<"\n";
	cout<<"\t\t\t"<<ref <<"\t Refrigrator         "<< ref3 <<"           "<<ref2 <<"\n";
	cout<<"\t\t\t"<<ove <<"\t Oven                "<< ove3 <<"            "<<ove2 <<"\n";
	cout<<"\t\t\t                                           ---------\n\n";
	cout<< "\t\t\t                             SUBTOTAL        "<<subtotal<< " \n";
	cout<< "\t\t\t                             TEX             "<<text << " \n";
	cout<< "\t\t\t                             TOTAL           "<<billtotal <<" \n\n";
	cout<< "\t\t\t                             Cashier name    "<<name <<" \n";
	cout<< "\t\t\t                             Coustomer name  "<<cname <<" \n";
    cout <<"\t\t\t====================================================\n\n";
    cout << "\t\t\t\t\t\tEnd of bill\n\n";
	system("PAUSE");
	system("CLS");
      
      
   } 
	else{
		cout << "Enter correct password...\n";
	}   
	
 }
