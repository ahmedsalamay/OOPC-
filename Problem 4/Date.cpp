#include "Date.h"

Date::Date()
{

}

void Date::setDate(int d,int m,int y)
{
    day = d;
    month = m;
    year = y;
}

void Date::updateDate()
{
    month+=1;
    while(1)
    {
        if(month>12){year+=month/12; month%=12;}
        else{break;}
    }
}

void Date::printDate()
{
    cout << day << "/" << month << "/" << year;
}
