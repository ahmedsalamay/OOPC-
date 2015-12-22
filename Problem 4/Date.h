#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<string>
using namespace std;


class Date
{
    public:
        Date();
        void setDate(int,int,int);
        void updateDate();
        void printDate();
    protected:
    private:
        int day;
        int month;
        int year;
};

#endif // DATE_H
