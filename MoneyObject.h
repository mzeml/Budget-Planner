#ifndef MONEYOBJECT_H
#define MONEYOBJECT_H

#include <string>

class MoneyObject
{
    private:
    int moneyValue; //can be an expense or a source of income
    std::string moneyName; //name of the expense/income
    std::string note;
    bool recur; //is the expense/income a one time only?
    unsigned recurTimeMonth; //how many months does the expense occur?

    public:
    MoneyObject();
   
};

#endif