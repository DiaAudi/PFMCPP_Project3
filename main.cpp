/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************
0) move 5-9 to between your Thing 4 and Thing 10.

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

/*
Thing 5)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 6)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 7)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 8)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 9)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
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

/*
10）Music app
5 properties:
    1)User
    2)Artist
    3)Album
    4)Ranking
    5)Music interview
3 things it can do
    1) listen to music
    2) subscribe membership
    3) make comment certain piece of music
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
