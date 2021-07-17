b/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types in plain-English, 
    in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits or properties.
    Note: Your 10th UDT will use 5 of your UDTs for its properties, so start on UDT #10 first and work backwards. This goes along with instruction #6.

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only primitives. 

    Here is an example:
    Cell Phone

    A Cell Phone is made up of:
        Display
        Memory
        CPU
        Radio
        Applications

    These things make up the 5 traits.
    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following traits or properties:
        pixels
        amount of power consumed.
        brightness.

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)
************************
    Commit after you complete this step so i can review before you proceed with the rest of the projects
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    Copy your 3+5 comments into your struct body.
    comment them out.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    this nested class also needs member functions.
    this nested class is not considered one of your 10 UDTs.
 
 6) One of your 10 UDTs should only use UDTs for its member variable types.   
    No primitives allowed!
    it still needs member variables.
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) has vacuum cleaners
    2) has eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    bool hasVacuumCleaners = true; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    bool hasEcoFriendlyCleaningSupplies = true; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1)Band
5 properties:
    1)date of establishment
    2)num of songs
    3)
    4)license of publish
    5)length of time
3 things it can do:
    1)record an album
    2)
    3)
 */


/*
2)Travel
5 properties:
    1)budget
    2)need a passport
    3)num of items to pack
    4)days to travel
    5)num of places of interests
3 things it can do:
    1)take a flight
    2)buy a souvenir
    3)take a photo
 */

/*
3)Browser
5 properties:
    1)history
    2)bookmarks
    3)allow camera
    4)font size
    5)allow microphone
3 things it can do:
    1)open new tabs
    2)open new windows
    3)install a web extension
 */

/*
4)Cellphone
5 properties:
    1)Software Version
    2)Capacity
    3)Available
    4)phone number
    5)language
3 things it can do:
    1)make a phone call
    2)pay with phone
    3)send a message
 */

/*
5)Library
5 properties:
    1)num of books
    2)name of librarian
    3)time for open
    4)status of a book
    5)phone number
3 things it can do:
    1)search for a book
    2)borrow a book
    3)lend a book
 */

/*
6)Student
5 properties:
    1)age
    2)grade
    3)GPA
    4)gender
    5)major
3 things it can do:
    1)apply for a gap year
    2)apply for a scholorship
    3)apply for a minor major
 */

/*
7)Course
5 properties:
    1)name of course
    2)course code
    3)prerequirment
    4)required material
    5)num of grade opportunity
3 things it can do:
    1)discussion
    2)check attendance
    3)download the syallbus
 */

/*
8)Club
5 properties:
    1)name of club
    2)number of members
    3)advisor
    4)how long it exists
    5)type
3 things it can do:
    1)record new members info
    2)host an activity
    3)apply activity fund
 */

/*
9)Exam
5 properties:
    1)level of difficulty
    2)number of questions
    3)open-book
    4)length of time
    5)date of exam
3 things it can do:
    1)take an exam
    2)calculate the total score
    3)calculate the average score
 */

/*
10)College
5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
    1)Library
    2)Student
    3)Course
    4)Club
    5)Exam
3 things it can do:
    1)in-class discussion
    2)pay tuition fee
    3)get an official transcript
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
    2)buy stuff in person
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
3)Dictionary
5 properties:
    1)number of editon
    2)number of pages  
    3)Item weight
    4)number of words
    5)number of usage examples
3 things it can do
    1)find phonetic symbol  
    2)find synonyms
    3)find examples
 */

/*
4)Gaming mouse
5 properties:
1)time of warranty
2)number of customizable buttons
3)ratings
4)weight of mouse
5)largest number of DPI
3 things it can do
    1)assign custom commands to buttons
    2)change switch button tensioning
    3)adjust the weight of mouse
 */

/*
5)User
5 properties:
    1)user registration time
    2)status of membership
    3)gender of user
    4)level of user
    5)number of messages
3 things it can do
    1)send messages to other users
    2)create a playlist
    3)Set playlist privacy
 */

/*
6) Artist
5 properties:
    1)status of bio
    2)type of artist
    3)number of followers
    4)number of albums  
    5)number of songs
3 things it can do
    1)follow a artist
    2)enter the group of a artist
    3)check the hottest songs of artist
 */

/*
7)Album
5 properties:
    1)name of album
    2)name of company
    3)number of songs
    4)time of release
    5)price of album
3 things it can do
    1)save the image of cover
    2)read the brief introduction of a album
    3)play the music in album
 */

/*
8) Ranking
5 properties:
    1)topics of rankings
    2)the number of ranking changes
    3)the period of the ranking     
    4)status of update
    5)the number of people who share the ranking to social platform
3 things it can do
    1)play the music of a ranking
    2)check a ranking of this week
    3)Favorite a ranking
 */

/*
9) Music interview
5 properties:
    1)host
    2)artist
    3)number of word
    4)date
    5)topic
3 things it can do
    1)Read the interview
    2)comment on the interview
    3)watch the vidio of the interview
*/

/*
10）Music app
5 properties:
    1)User
    2)Artist
    3)Album
    4)Rank
    5)Music interview
3 things it can do
    1) listen to music  
    2) subscribe membership
    3) make comment on certain piece of music
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
