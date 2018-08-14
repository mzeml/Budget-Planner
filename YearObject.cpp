#include <iostream>
#include <string>
#include "YearObject.h"

YearObject::YearObject() //constructor
{
    for(int i = 0; i < 12; ++i)
    {
        std::string tempMonth = monthArray[i];
        MonthObject month;
        month.setName(tempMonth);
        monthEntries.push_back(month);
    }
    //FIXME: VERIFY THIS WORKS!!!
    //create new month entry
    // MonthObject Jan;
    // Jan.setName("January");
    // monthEntries.push_back(Jan);

    // MonthObject Feb;
    // Feb.setName("Febuary");
    // monthEntries.push_back(Feb);

    // MonthObject Mar;
    // Mar.setName("March");
    // monthEntries.push_back(Mar);

    // MonthObject Apr;
    // monthEntries.push_back(Apr);

    // MonthObject May;
    // monthEntries.push_back(May);

}
int YearObject::getYearNum()
{
    return yearNum;
}