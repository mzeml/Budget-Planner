#include <iostream>
#include "YearObject.h"

int main(int argc, char const *argv[])
{
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
        //check if year exists

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
