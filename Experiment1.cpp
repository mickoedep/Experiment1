#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>


using namespace std;
int main ()
	
{	
	string TicketPrice;
	string NumberofTicketsSold;
	double Box,Sideline,Premium,GenAd, BoxT,SideT,PremT,GenT;

	cout<<"TicketPrice" <<"		" <<"NumberofTicketsSold"<<endl;
	cout <<"box(250$): "<<"                   ";
	cin>>Box;
	cout<<"\nTotal Sales Box Tickets sold: " <<Box*250<<endl;


	
	cout <<"\n\nSideline(100$): "<<"	      ";
	cin>>Sideline;
	cout<<"\nTotal Sales Sideline Tickets sold: " <<Sideline*100<<endl;
	
	cout <<"\n\nPremium(50$): "<<"	              ";
	cin>>Premium;
	cout<<"\nTotal Sales Premium Tickets sold: " <<Premium*50<<endl;
	

	cout <<"\n\GeneralAdmission(25$): "<<"	      ";
	cin>>GenAd;
	cout<<"\nTotal Sales General Admission Tickets sold: " <<GenAd*25<<endl;

	cout<<"\n\nTotal Ticket Sold : "<<Box+Sideline+Premium+GenAd<<endl;


	cout<<"\n\nTotal Sales Amount: "<<(Box*250)+(Sideline*100)+(Premium*50)+(GenAd*25)<<endl;
	




	







		_getch();
	return 0;

}
