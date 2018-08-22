#include <iostream>
#include <string>
#include "YearObject.h"

YearObject::YearObject() //constructor
{
    
}
YearObject::YearObject(int yearInput)
{
    yearNum = yearInput;
    for(int i = 0; i < 12; ++i)
    {
        std::string tempMonth = monthArray[i];
        MonthObject month;
        month.setName(tempMonth);
        monthEntries.push_back(month);
    }
}
int YearObject::getYearNum()
{
    return yearNum;
}