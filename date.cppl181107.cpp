#include"Date.h"


Date::Date(){

	day=1;
	month=1;
	year=2000;
}
Date::Date(int d, int m,int y){

	if (d>0&&d<30)
	{
		day=d;
	}
	else
	{
		day=1;
	}
	if(m<=12&&m>0)
	{
		month=m;
	}
	else
	{
		month=1;
	}
	if(y<9999&&y>999)
	{
		year=y;
	}
	else
	{
		year=2000;
	}
}
Date::~Date(){
}
 Date & Date::operator+( const int i){

		day=day+i;
		if(day>30)
		{
			month++;
			if(month>12)
			{
				month=1;
				year++;
			}

		}

		return *this;
	}
 Date & Date::operator--(){

	--day;
	 if(day==0)
	  {
		  this->day=1;
		 this-> month--;
		  if (month=0)
			 {
				this-> month=12;
		        this-> year--;
		  }
	  }

	 
	 return *this;
 }
  Date & Date::operator--(int i){
	 this->day--;
	  if(day==0)
	  {
		this->  day=1;
		 this-> month--;
		  if (month=0)
			 {
				this-> month=12;
		         this->year--;
		  }
	  }


	  return *this;
  }
  int  Date::operator[](  int i){

	  if ( i=0){
		  return day;
	  }
	  else if(i=1){
		  return month;
	  }
	  else if (i=2)
	  {
		  return year;
	  }
	  else 
	  {
		  
		  return 0;
	  }
  }

