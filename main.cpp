#include <iostream>
#include <vector>
#include "YearObject.h"
#include "MoneyObject.h"
#include "MonthObject.h"

int main(int argc, char const *argv[])
{
    std::vector<YearObject> yearEntries;
    unsigned userNum = 0;
    unsigned userYear = 0;


    std::cout << "BUDGET MANAGER" << std::endl;
    std::cout << "Select an option: " << std::endl;
    std::cout << "    1. Enter a new year" << std::endl;
    std::cout << "    2. View or modify a year" << std::endl;
    std::cout << "User value: " << std::endl;

    std::cin >> userNum;

    if(userNum == 1)
    {
        //New Year
        std::cout << "Enter a year. Type \"!back\" to go to previous menu" << std::endl;
        
        std::cin >> userYear;

        if(userYear > 9999 || userYear < 1900)
        {
            //error, out of bounds
        }
        for(int i = 0; i < yearEntries.size(); ++i)
        {
            if(yearEntries.at(i).getYearNum() == userYear)
            {
                //year already exists!
            }
        }
        //create a new year

        //yearEntries.push_back(new YearObject(userYear))

        //else, create new YearObject

        

        //if year already exists, make that known and error
    }
    else if(userNum == 2)
    {
        //View/modify old year

        std::cout << "Choose a year to view or modify. Type \"!back\" to go to previous menu" << std::endl;

        //output year numbers

        //finds year object in list that matches userNum

        //If no match, output error message and ask for new input

        //if input is !back, go to previous menu
    }
    else
    {
        std::cout << "ERROR: Invalid selection. FIX ME" << std::endl;
        //FIXME: Have it reask value from user
    }
    


    return 0;
}
