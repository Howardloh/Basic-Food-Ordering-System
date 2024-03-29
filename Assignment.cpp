#include<iostream>
#include<iomanip>
using namespace std;
void Menu(), MakePayment();
int qty, order;
double price, amount, totalprice=0;
int main(){
	int option;
	repeat:
	cout<<endl<<"	Hello World Fast Food Ordering System	"<<endl<<endl
		<<"Please select your option: 1. Order"<<endl
		<<"                           2. Payment"<<endl
		<<"                           3. Quit"<<endl<<endl;
	cout<<"Enter the Option You Want : ";
	cin>>option;
	if(option==1){
		Menu();
	}
	else if(option==2){
		MakePayment();
	}
	else if(option==3){
		exit(0);
	}
	else{goto repeat;}
}

void Menu(){
	while(order != 9)
	{
	cout<<"	----------------Menu----------------"<<endl<<endl
		<<"[1.] Burger ---------------- RM 5.90"<<endl
		<<"[2.] French Fries (S) ------ RM 4.50"<<endl
		<<"[3.] French Fries (L) ------ RM 6.50"<<endl
		<<"[4.] Nuggets (6pc) --------- RM 9.90"<<endl
		<<"[5.] Nuggets (9pc) --------- RM 12.90"<<endl
		<<"[6.] Coke ------------------ RM 2.50"<<endl
		<<"[7.] 100 Plus -------------- RM 2.50"<<endl
		<<"[8.] Mineral Water --------- RM 2.00"<<endl
		<<"[9.] Back to Main Menu"<<endl;
	cout<<"Please place your order: ";
	cin>>order;
		switch (order)
		{
			case 1:
				cout<<"You've selected Burger ---------------- RM 5.90"<<endl;
				price=5.90;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 2:
				cout<<"You've selected French Fries (S) ------ RM 4.50"<<endl;
				price=4.50;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 3:
				cout<<"You've selected French Fries (L) ------ RM 6.50"<<endl;
				price=6.50;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 4:
				cout<<"You've selected Nuggets (6pc) --------- RM 9.90"<<endl;
				price=9.90;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 5:
				cout<<"You've selected Nuggets (9pc) --------- RM 12.90"<<endl;
				price=12.90;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 6:
				cout<<"You've selected Coke ------------------ RM 2.50"<<endl;
				price=2.50;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 7:
				cout<<"You've selected 100 Plus -------------- RM 2.50"<<endl;
				price=2.50;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;				
				break;
			case 8:
				cout<<"You've selected Mineral Water --------- RM 2.00"<<endl;
				price=2.00;
				cout<<"Enter the quantity you want: ";
				cin>>qty;
				totalprice=totalprice+(price*qty);
				cout<<"Subtotal: "<<totalprice<<endl;
				break;
			case 9:
				main();
				break;
		}
	}
}

void MakePayment(){
	cout<<showpoint<<setprecision(2)<<fixed;
	if(totalprice==0){
		cout<<"Please place an order first!"<<endl;
		Menu();
	}
	else if(totalprice>=50){
		totalprice=totalprice*0.95;
		cout<<"Total Price: "<<totalprice<<endl;
	}
	else if(totalprice<50){
		cout<<"Total Price: "<<totalprice<<endl;		
	}
	cout<<"Enter amount: ";
	cin>>amount;
	cout<<"Balance: "<<amount-totalprice<<endl;
	exit(0);
}
