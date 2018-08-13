#include <iostream>
#include <string>
#include "MoneyObject.h"

MoneyObject::MoneyObject() //constructor
{
    moneyValue = 0;
    moneyName = "None";
    recur = false;
    recurTimeMonth = 0;
}
// void MoneyObject::newMoneyEntry(int userMoney, std::string userName, bool userRecur, unsigned userRecurTime)
// {
//     moneyValue = userMoney;
//     moneyName = userName;
//     recur = userRecur;
//     recurTimeMonth = userRecurTime;

// }
// void MoneyObject::getMoneyEntry()
// {
    
// }