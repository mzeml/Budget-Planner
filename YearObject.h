#ifndef YEAROBJECT_H
#define YEAROBJECT_H

#include <iostream>
#include <vector>
#include "MonthObject.h"
#include "MoneyObject.h"

class YearObject 
{
    private:
        int yearNum;
        std::vector<MonthObject> monthEntries;
        std::string monthArray[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    public:
        YearObject();
        int getYearNum();
        //outputYear(); //Displays the month of the year with a total of expenses, incomes, and net loss/gain
};

#endif

/*

This is tough. A vector allows for quick access and creation, but a linked list allows for easier creation of a year before exisitng years (as we dont have to shift ALL the data like we would with a vector)
Linked list also allows for easier deletion in the middle of a long list

For the sake of simplicity, I am going with a vector for years due to the idea that the user will most likely delete new years as they might
be created on accident. I am also going to assume that they will not create years older than the ones that already are in the system often

Each year contains a vector of months. Vectors work becuase we have a fixed length of 12 months and we won't be deleating

*/