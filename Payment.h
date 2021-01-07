//Ahmad Amsari Bin Muhammad  
//BI17110100
//zoo and animal show
#include <iostream>
#include <string>
#ifndef PAYMENT_H
#define PAYMENT_H

using namespace std;   


	int numofTicket;
	int numofCust;


    double pricing;   
    double totalPrice;
    double adultTotal;
    double childTotal;
    double seniorctzTotal;
    double studentTotal;
    double foreignTotal;
    
    string cust_Type;
    string type_cus;
    string package;
    string pckge;
    const double adultPrice = 5.00;
    const double seniorctzPrice = 3.00;
    const double childPrice = 1.00;
    const double studentPrice = 2.00;
    const double foreignPrice = 10.00;
    const double animalshowPrice = 5.00;             
    
    	

void priceAdult(){
	adultTotal=adultPrice*numofCust;
}
	
void priceChild(){
	childTotal=childPrice*numofCust;
}

void priceSenior(){
	seniorctzTotal=seniorctzPrice*numofCust;
}

void priceStudent(){
	studentTotal=studentPrice*numofCust;
}

void priceForeign(){
	foreignTotal=foreignPrice*numofCust;
}

void price(){
	totalPrice=adultTotal+childTotal+seniorctzTotal+studentTotal+foreignTotal;
}

void priceAS(){
	totalPrice=adultTotal+childTotal+seniorctzTotal+studentTotal+foreignTotal+animalshowPrice;
}

void print() {
cout <<"--------------------------------------------------------------"<<endl;
cout<<"                             RECEIPT                           "<<endl;
cout <<"--------------------------------------------------------------"<<endl;
 time_t now = time(0);
 char* datepurchased = ctime(&now);
 
cout<<"Date Purchased:"<<datepurchased<<"                             "<<endl;

int i=0;

while(i<numofCust){
cout<<"Type of Customer:"<<cust_Type<<"                                "<<endl; 
i++;
}
cout<<"No of Ticket:"<<numofTicket<<"                                 "<<endl;
cout<<"Ticket Price                                           RM "<<pricing<<endl;
cout<<"Total Price :                                          RM "<<totalPrice<<endl;
cout <<"--------------------------------------------------------------"<<endl;
cout<<"                            Thank You!!                        "<<endl;
cout <<"--------------------------------------------------------------"<<endl;
}

void printAS() {
cout <<"--------------------------------------------------------------"<<endl;
cout<<"                             RECEIPT                           "<<endl;
cout <<"--------------------------------------------------------------"<<endl;
 time_t now = time(0);
 char* datepurchased = ctime(&now);
 
cout<<"Date Purchased:"<<datepurchased<<"                             "<<endl;

int i=0;

while(i<numofCust){
cout<<"Type of Customer:"<<cust_Type<<"                                "<<endl; 
i++;
}
cout<<"No of Ticket:"<<numofTicket<<"                                 "<<endl;
cout<<"Ticket Price                                           RM "<<pricing<<endl;
cout<<"Animal Show                                            RM "<<animalshowPrice<<endl;
cout<<"Total Price :                                          RM "<<totalPrice<<endl;
cout <<"--------------------------------------------------------------"<<endl;
cout<<"                            Thank You!!                        "<<endl;
cout <<"--------------------------------------------------------------"<<endl;
}

#endif
    
