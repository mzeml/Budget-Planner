#include <iostream>
#include <string>
#include "MonthObject.h"


MonthObject::MonthObject()
{
    monthName = "NONE";
}
void MonthObject::setName(std::string name)
{
    monthName = name;
}