#include<iostream>
#include <stdlib.h>
using namespace std;


class MetroBus
 {
    protected:
    int location, destination;
    public:
    void select()
    {
    cout << "Select current location:\n1. Saddar\n2. Defense\n3. Clifton\n4. Gulshan-e-Iqbal\n5. Dhorajee\n6. Gulistan-e-Johar\n7. Shahrah-e-Faisal\n8. Bahadurabad\n9. Tariq Road\n10. Liaquatabad\n11. F.B Area\n12. Sohrab Goth\n13. North Nazimabad\n14. North Karachi\n15. Surjani Town" << endl;
    cin>> location;
          
	if (location<=3)
    {
    cout << "\nYour bus is GREEN." << endl;
    cout << "\nEnter destination: \n1. Saddar\n2. Defense\n3. Clifton" << endl;
    cin >> destination;
        if (location==1 && destination==2)
        {
        cout << "\nThe total distance is 7km."<<endl;
        int cost=7*5;
        cout << "\nYour amount for this trip will be: Rupess  "<<cost<<endl;
        }
            else if (location==1 && destination==3)
            {
            cout << " The total distance is 9km."<<endl;
            int cost=7*5;
            cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
            }
                else if (location==2 && destination==3)
                {
                cout << " The total distance is 2km: "<<endl;
                int cost=2*5;
                cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
                }
    }
    
	else if (location>3 && location<=6)
    {
        cout << "Your bus is RED." << endl;
        cout << "Enter destination: \n1. Gulshan-e-Iqbal\n2. Dhorajee\n3. Gulistan-e-Johar" << endl;
        cin >> destination;

        if (location==4 && destination==2)
        {
        cout << " The total distance is 6km: "<<endl;
        int cost=6*5;
        cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
        }
            else if (location==4 && destination==3)
            {
            cout << " The total distance is 7km: "<<endl;
            int cost=7*5;
            cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
            }
            else if (location==5 && destination==1)
            {
            cout << " The total distance is 6km: "<<endl;
            int cost=6*5;
            cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
            }
    }
    
    
    else if (location>6 && location<=9)
    {
        cout << "Your bus is BLUE." << endl;
        cout << "Enter destination: \n1. Shahrah-e-Faisal\n2. Bahadurabad\n3. Tariq Road\n" << endl;
        cin >> destination;

        if(location==7 && destination==8)
        {
        cout << " The total distance is 4km: "<<endl;
        int cost=4*5;
        cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
        }
            else if (location==7 && destination==9)
            {
		    cout << " The total distance is 4km: "<<endl;
            int cost=4*5;
            cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
            }
                else if (location==8 && destination==9)
               {
                cout << " The total distance is 2km: "<<endl;
                int cost=2*5;
                cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
               }
    }
    
    else if (location>9 && location<=12)
    {
        cout << "Your bus is ORANGE." << endl;
        cout << "Enter destination: \n1. Liaquatabad\n2. F.B Area\n3. Sohrab Goth\n" << endl;
        cin >> destination;

            if (location==10 && destination==11)
            {
            cout << " The total distance is 4km: "<<endl;
            int cost=4*5;
            cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
            }
                else if (location==10 && destination==12)
                {
                cout << " The total distance is 8km: "<<endl;
                int cost=8*5;
                cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
                }
                    else if (location==11 && destination==12)
                    {
                    cout << " The total distance is 4km: "<<endl;
                    int cost=4*5; 
                    cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
                    }
    }
    
    else if (location>12 && location<=15)
    {
        cout << "Your bus is YELLOW." << endl;
        cout << "Enter destination: \n1. North Nazimabad\n2. North Karachi\n3. Surjani Town" << endl;
        cin >> destination;

        if (location==13 && destination==14)
        {
        cout << " The total distance is 6km: "<<endl;
        int cost=6*5;
        cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
        }
            else if (location==13 && destination==15)
            {
            cout << " The total distance is 12km: "<<endl;
            int cost=12*5;
            cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
            }
                else if (location==14 && destination==15)
                {
                cout << " The total distance is 6km: "<<endl;
                int cost=6*5;
                cout << " Your amount for this trip will be: "<<cost<< " pkr "<<endl;
                }
    }
  }
};



class seat : public MetroBus
{
	protected:
		int seatt;
	public:
		
		void no_of_seat()
		{
		    cout<<"Enter a number of seat"<<endl;
			cin>>seatt;
			seatt=seatt-1;
		}
	
};

class type : public seat
{
	public:
		int select1;
		int price;
		char typee[20];
		int arry[15]={1,2,3,4,5,6,7,8,9,10};
		int arryy[15]={11,12,13,14,15,16,17,18,19,20};
	public:
		
		void category()
		{
			
			cout<<"Enter seat category"<<endl;
			cout<<"1. "<<"business"<<endl;
			cout<<"2. "<<"economy"<<endl;
			cin>>select1;
			switch(select1)
			{
				case 1:
					price =15;
					cout<<"your busines class seat are"<<endl;
					
					for (int i=0; i<=seatt; i++)
					{
					 cout<<arry[i]<<endl;
					}
					cout<<"price of ticket are:"<<seatt*price<<endl;
				break;	
				
				case 2:
					price =10;
					cout<<"your economy class seat are"<<endl;
					
					for (int i=0; i<=seatt; i++)
					{
					 cout<<arryy[i]<<endl;
					}
					cout<<"price of ticket are:"<<seatt*price<<endl;
				break;	
			}
		}
	
};

class Ticket: public MetroBus
{
		protected:
		char name[50];
		float id;
		int timeC;
		public:
	    void PassengerDetails()
		{   
		    cout<<"===Name must be in alphbets==="<<endl; 
			cout<<"Enter your name: ";
			cin.get(name,50) ;
			cin.ignore();
			cout<<"===ID must be CNIC Number==="<<endl; 
			cout<<"Enter your id number: ";
			cin>>id;
			cout<<"Choose your preferred Time: \n 1.Morning(6:00am-11:00am) \n 2.Afternoon(11:01am-4:30pm) \n 3.Evening(4:31pm-8:00pm) \n 4.Night(8:01pm-2:00am) \n";
			cin>>timeC;
			
	   }
	   
	   	void TicketDisplay()
		{
			system("cls");
			cout<<" \n \t YOUR TICKET: \n";
			cout<<"Passenger Name: "<<name<<endl;
			cout<<"Passenger Id: "<<id<<endl;
		
			switch(timeC)
        {
         case 1:
         
            cout<< "Your Bus Time  : Morning(6:00am-11:00am)"<<endl;
           
            break;
        
         case 2:
         
            cout<< "Your Bus Time  : Afternoon(11:01am-4:30pm)"<<endl;
           
            break;
        
         case 3:
         
            cout<< "Your Bus Time  :  3.Evening(4:31pm-8:00pm) "<<endl;
           
            break;
        
         case 4:
         
            cout<< "Your Bus Time  : 4.Night(8:01pm-2:00am)"<<endl;
           
            break;
			
	    }
    }
};



int main()
{
 
 type t1;
 
 
 
 Ticket T1;
 T1.PassengerDetails();
 T1.select();
 t1.no_of_seat();
 t1.category();
 T1.TicketDisplay();
 
 
 }
