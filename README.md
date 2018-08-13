# Budget-Planner
A C++ program that I made to track monthly expenses as an exercise

## What it Does

This program allows a user to input a year. Each year has 12 months and for each month, the user can input expenses and incomes. Each of these expenses/incomes can be set as recurring for a set of months for that year. The user is able to see if a month is positive or negative in terms of money

## Things I Had to Consider

When I was creating the program, I had to weigh the pros and cons of using linked lists or vectors. I know that for copying values or deleting values in the middle, a vector is not efficent. However, the linked list seemed to be more useful for edge cases. For an aeverage user, I think the vector will be fine and the performance hit would be fine. However, if this was scaled up, I would consider a different data structure

## Things I Want to Add

* Interest calculation
* Ability to copy a previous Year or Month