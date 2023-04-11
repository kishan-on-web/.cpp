#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	string password = "admin";
	string pass;
	
	cout << "your id is : admin";
	cout << "\nenter your password : ";
	cin>>pass;
	
	if(password==pass){
		cout<<"\nLogin success full.....";
	
	
	cout<<"\n\n\t\t WELCOME to Super Market Billing System \n";
	cout<<"\t\t    Enter the Following Details \n";
	
	string name,co_name;
	
	cout<<"\n\nEnter cashier name : ";
	cin>>name;
	cout<<"Enter coustomer name : ";
	cin>>co_name;
	
	int tv,ac,re,wm,ov;
	
	cout<<"\nEnter quantity TV : ";
	cin>>tv;
	cout<<"Enter quantity AC : ";
	cin>>ac;
	cout<<"Enter quantity Refrigerator : ";
	cin>>re;
	cout<<"Enter quantity Washing Machine : ";
	cin>>wm;
	cout<<"Enter quantity Oven : ";
	cin>>ov;
	
	cout<<"\nPress Any Key To Generate Bill..";
	getch();
	
	cout<< "\n\n\n\t\t\t\t\t....................LOADING.................... \n\t\t\t\t\t";
	
	cout<<"\n\n\t\t\t\t\tBill Generated. \n\n";
      
    system("PAUSE");
    system("CLS");
    
    int ptv = 25000;
	int pac = 28000;
	int pre = 35000; 
    int pwm = 32000;
    int pov = 20000;
    
    int ttv = 25000*tv;
	int tac = 28000*ac;
	int tre = 35000*re; 
    int twm = 32000*wm;
    int tov = 20000*ov;
    int SubTotal = ptv+pac+pre+pwm+pov;
    int t = 28;
    float text  =(SubTotal * t)/100;
    float billtotal = SubTotal + text;
    
    cout<<"\n";
    cout <<"\t\t\t====================================================\n";
    cout <<"\t\t\t\t           super market \n";
	cout <<"\t\t\t====================================================\n";
    cout << "\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n";
	cout<<"\t\t\t--- \t ----------- \t ---------- \t -----------\n\n";
	cout<<"\t\t\t"<<tv <<"\t TV                  "<< ptv <<"           "<<ttv <<"\n";
	cout<<"\t\t\t"<<ac <<"\t AC                  "<< pac <<"           "<<tac <<"\n";
	cout<<"\t\t\t"<<wm <<"\t Washing Machine     "<< pwm <<"           "<<twm <<"\n";
	cout<<"\t\t\t"<<re <<"\t Refrigrator         "<< pre <<"           "<<tre <<"\n";
	cout<<"\t\t\t"<<ov <<"\t Oven                "<< pov <<"           "<<tov <<"\n";
	cout<<"\t\t\t                                           ---------\n\n";
	cout<< "\t\t\t                             SUBTOTAL        "<<SubTotal<< " \n";
	cout<< "\t\t\t                             TEX             "<<text << " \n";
	cout<< "\t\t\t                             TOTAL           "<<billtotal <<" \n\n";
	cout<< "\t\t\t                             Cashier name    "<<name <<" \n";
	cout<< "\t\t\t                             Coustomer name  "<<co_name <<" \n";
    cout <<"\t\t\t====================================================\n\n";
    cout << "\t\t\t\t\t\tEnd of bill\n\n";
	system("PAUSE");
	system("CLS");
    }
    
	else {
		cout<<"Enter correct password";
	}
	return 0;
} 
