/*
Project 3 - Part 1b / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1)  Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or properties and 3 things it can do
        b) remember: these properties will eventually become primitives
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
 */


/*
1）Leetcode
5 properties:
    1)number of comments
    2)number of submissions
    3)number of solved questions
    4)acceptance rate
    5)overall score
3 things it can do
    1)write code
    2)help others with their code
    3)pin a thread
 */

/*
2)Safeway
5 properties:
    1)open time
    2)discount
    3)Customer's points
    4)close time
    5)number of parking spots
3 things it can do
    1)order grocery online
    2)get refund
    3)collect coupons
 */

/*
3) Shelter of cats
5 properties:
    1)number of cats
    2)distance 
    3)amount of mony to adopt a cat
    4)age of a cat
    5)activity level
3 things it can do
    1)adopt a cat
    2)donate money
    3)visit the shelter on site
 */

/*
4)TV series
5 properties:
    1)number of season
    2)number of episode
    3)duration of one episode
    4)number of languages supported
    5)rating
3 things it can do
    1)adjust the timeline
    2)add to watchlist
    3)watch trailer
 */


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
