#include <iostream>
#include <ctime>
using namespace std;

int getDay () {
	int res = 0;
	
	do {
	 cout << "Day: ";
	 cin >> res;
	 
	 cout << '\n';
	} while (res <= 0 || res > 31);
	
	return res;
}
 
int getMonth () {
	int res = 0;
	
	do {
	 cout << "Month: ";
	 cin >> res;
	 
	 cout << '\n';
	} while (res <= 0 || res > 12);
	
	return res;
}

int geyear_nowear () {
	int res = 0;
	
	do {
	 cout << "Year: ";
	 cin >> res;
	 
	 cout << '\n';
	} while (res <= 1921 || res > 2022);
	
	return res;
}

int main () {
	int day = 0;
	int month = 0;
	int year = 0;
	int y,m,d,day_now,month_now,year_now;
	
	cout << "Please enter the birth date (yyyy-mm-dd)" << '\n';
	year = geyear_nowear();
	month = getMonth();
    day = getDay();
	
	
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    //std::cout << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' <<  now->tm_mday;
    
      year_now=(now->tm_year + 1900);
      month_now=(now->tm_mon + 1);
      day_now=now->tm_mday;
      
          
      int mm[12] = {31 , year%4 == 0 && year%100 != 0 || year%400 == 0?29:28,31,30,31,30,31,31,30,31,30,31};
      if(day>day_now)
       {
           day_now=day_now+mm[month_now-2];
           d=day_now-day;
           month_now=month_now-1;
       }
      else
         d=day_now-day;
      if(month>month_now) 
        {
          month_now=month_now+12;
          year_now=year_now-1;
          m=month_now-month;
        }
      else
         m=month_now-month;
         y=year_now-year;
	 
     cout<<"You are "<<y<<" years and "<<m<<" months and "<<d<<" days.";
      
        return 0;
 }      
