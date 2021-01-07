//BI17110100
//Ahmad Amsari Bin Muhammad
//zoo and animalshow
#include <iostream>   
#include "Payment.h"

using namespace std;




int main(){

	cout<<"zoo=Zoo ticket only, zooandanimal=Zoo and animal show ticket"<<endl;
	cout<<"The package choosed: ";
	cin>>package;
	cout<<endl;
	if(package=="zoo"){
		cout<<"Zoo Ticket Only"<<endl;
		cout<<"adult=Adult , child=Child, seniorCTZ=Senior Citizen, student=Student, foreign=Foreign"<<endl;
	cout<<"What is the customer type : ";
	cin>>cust_Type;
	if(cust_Type=="adult"){
	 type_cus=="ADULT";
	 cout<<endl;
	cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	 priceAdult();
	 cout<<endl;
	 pricing=adultTotal;
	}
	else if(cust_Type=="child"){
		cout<<"CHILD"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	priceChild();
	 cout<<endl;
	 pricing=childTotal;	
	}
	else if(cust_Type=="seniorCTZ"){
		cout<<"SENIOR CITIZEN"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	priceSenior();
	 cout<<endl;
	 pricing=seniorctzTotal;
	}
	else if(cust_Type=="student"){
		cout<<"STUDENT"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	priceStudent();		
	 cout<<endl;
	 pricing=studentTotal;
	}
	else if(cust_Type=="foreign"){
		cout<<"FOREIGN"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;		
	priceForeign();
	 cout<<endl;
	 pricing=foreignTotal;	
	}
	else{
		exit(0);
	}

	cout<<endl;

	price();
	print();
	return 0;
	}
	else if(package=="zooandanimal"){
		cout<<"adult=Adult , child=Child, seniorCTZ=Senior Citizen, student=Student, foreign=Foreign"<<endl;
	cout<<"What is the customer type : ";
	cin>>cust_Type;
	if(cust_Type=="adult"){
	 type_cus=="ADULT";
	 cout<<endl;
	cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	 priceAdult();
	 cout<<endl;
	 pricing=adultTotal;
	}
	else if(cust_Type=="child"){
		cout<<"CHILD"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	priceChild();
	 cout<<endl;
	 pricing=childTotal;
	}
	else if(cust_Type=="seniorCTZ"){
		cout<<"SENIOR CITIZEN"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	priceSenior();
	 cout<<endl;
	 pricing=seniorctzTotal;
	}
	else if(cust_Type=="student"){
		cout<<"STUDENT"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;
	priceStudent();		
	 cout<<endl;
	 pricing=studentTotal;
	}
	else if(cust_Type=="foreign"){
		cout<<"FOREIGN"<<endl;
		cout<<"How many number of customer: ";
	cin>>numofCust;
	numofTicket=numofCust;		
	priceForeign();
	 cout<<endl;
	 pricing=foreignTotal;	
	}
	else{
		exit(0);
	}

	cout<<endl;

	priceAS();
	print();
	return 0;
	}

}

