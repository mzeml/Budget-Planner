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
    bool yearFound = false;
    bool userExit = false;
    int numOfObjects = 0;
    std::vector<YearObject*> yearVector;

    do {

    std::cout << "BUDGET MANAGER" << std::endl;
    std::cout << "Select an option: " << std::endl;
    std::cout << "    1. Enter a new year" << std::endl;
    std::cout << "    2. View or modify a year" << std::endl;
    std::cout << "    3. Exit program" << std::endl;
    std::cout << "User value: " << std::endl;

    std::cin >> userNum;

    if(userNum == 1)
    {
        //-----TESTING-----

        //YearObject* testYear = new YearObject();

        //-----END TESTING----
        //New Year
        std::cout << "Enter a year between 1900 and 9999. Type \"!back\" to go to previous menu" << std::endl;
        
        std::cin >> userYear;

        if(userYear > 9999 || userYear < 1900)
        {
            //error, out of bounds
            std::cout << "ERROR: Out of Bounds!!!!" << std::endl;
        }
        else
        {
            for(int i = 0; i < yearEntries.size(); ++i)
            {
                    if(yearEntries.at(i).getYearNum() == userYear)
                    {
                        //year already exists!
                        yearFound = !yearFound;
                        std::cout << "Exisitng year found! Go to Edit/View option" << std::endl;
                    }
            }
            if(!yearFound)
            {
                YearObject* newYear = new YearObject(userYear);
                yearVector.push_back(newYear);
                ++numOfObjects;

            }
            //create a new year
            
            //yearEntries.push_back(new YearObject(userYear))

            //else, create new YearObject

            

            //if year already exists, make that known and error
        }
        
    }
    else if(userNum == 2)
    {
        //View/modify old year
        if(numOfObjects == 0)
        {
            std::cout << "No years on file. Going back to main menu" << std::endl;
        }
        else
        {
            std::cout << "Choose a year to view or modify. Type \"!back\" to go to previous menu" << std::endl;
            //output year numbers
            for(int i = 0; i < numOfObjects; ++i)
            {
                std::cout << yearVector.at(i)->getYearNum() << std::endl;
            }
        }

        //If no match, output error message and ask for new input

        //if input is !back, go to previous menu
    }
    else if(userNum == 3)
    {
        userExit = !userExit;
    }
    else
    {
        std::cout << "ERROR: Invalid selection. FIX ME" << std::endl;
        //FIXME: Have it reask value from user
    }
    
    }
    while (!userExit);

    return 0;
}
