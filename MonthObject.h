#ifndef MONTHOBJECT_H
#define MONTHOBJECT_H

#include <string>
#include <vector>
#include "MoneyObject.h"

class MonthObject
{
    private:
    std::string monthName;
    std::vector<MoneyObject> moneyEntries;



    public:
    MonthObject();
    void setName(std::string name);

    /*addEntry();
    removeEntry();
    getMonthName();
    totalExpenses();
    totalIncomes();
    netGainLoss();
    */

};

#endif