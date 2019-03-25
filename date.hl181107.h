#include<iostream>
#include <string>
using namespace std;


class Date{
	int day;
	int month;
	int year;
	
public:
	Date();
	Date(int,int,int);
	~Date();
	friend ostream& operator<<(ostream& out, const Date &a){
		 string monthNames[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"} ;
		out<<a.day<<","<<monthNames[a.month]<<","<<a.year<<endl;
		return out;
	}
	friend bool & operator==(Date&a, Date&b){
		bool f;
		if(a.day==b.day&&a.month==b.month&&a.year==b.year)
		{
			f=true;
			return f;
		}
		else{
			f=false;
			return f;
		}
	}
	friend istream& operator>>(istream& in,Date &a){

		cout<<"day:"<<endl;
		cin>>a.day;
		cout<<"month"<<endl;
		cin>>a.month;
		cout<<"year"<<endl;
		cin>>a.year;
		return in;
	}

	 Date & operator+(int i);

	Date & operator--();
	Date & operator--(int i);
	int operator[](const int i);



	



};



