 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    int distanceTraveled { 0 };
    void run(int howFast,bool startWithLeftFoot);
    
    struct Step
    {
        int stepSize();
        void stepForward();
    };
    Step leftFoot;
    Step rightFoot;
};

int Person::Step::stepSize()
{
    return 1;
}

void Person::Step::stepForward()
{
    std::cout << "I'm here." << std::endl;
}

void Person::run(int, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();    
    }
    else
    {
        rightFoot.stepForward(); 
        leftFoot.stepForward();
    }
    distanceTraveled += rightFoot.stepSize() + leftFoot.stepSize();
    std::cout << "I have traveled this far: " << distanceTraveled << std::endl;
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */



struct Leetcode//1
{
    int numberOfComments = 24;
    int numberOfSubmissions = 4;
    int numberOfSolvedQuestions = 13;
    float acceptanceRate = 0.66f;
    float overallScore = 87.5f;
    int writeCode(int languageType);
    void helpOthersWithTheirCode(int numberOfQuestion);
    void pinAThread(int numberOfThread);
};

int Leetcode::writeCode(int languageType)//function
{
    std::cout << "language type chosen: " << languageType << std::endl;
    return 1;
}

void Leetcode::helpOthersWithTheirCode(int numberOfQuestion)
{
    std::cout << "Number of Questions " << numberOfQuestion << std::endl;
}

void Leetcode::pinAThread(int numberOfThread)
{
std::cout << "Number of Thread " << numberOfThread << std::endl;
}

struct Safeway//2
{
    float openTime = 9.f;
    float discount = 0.7f;
    int customerPoints = 234;
    float closeTime = 21.f;
    int numberOfParkingSpots = 34;
    struct Customer
    {
        int accountnumber = 133423;
        int membership = 2;
        bool relatedCreditCard = 0;
        float amountOfLastOrder = 67.59f;
        int registrationDays = 133;
        void redeemGiftCard(int codeOfGiftcard = 133278645);
        bool redeemProduct(int pointsOfProduct = 700);
        void changeProfile(int dateOfBirthday = 13);
    };
    void orderGroceryOnline(Customer customer);
    double refund(int productNumber);
    void collectCoupons(Customer customer);
};

void Safeway::orderGroceryOnline(Customer customer)
{
    std::cout << "Customer's profile: " << customer.accountnumber << std::endl;
}

double Safeway::refund(int productNumber)
{
    std::cout << "Product Number: " << productNumber << std::endl;
    std::cout << "Product Value: 1" << std::endl;
    return 0.1;
}

void Safeway::collectCoupons(Customer customer)
{
    std::cout << "Coupons " << customer.membership << std::endl;
}

void Safeway::Customer::redeemGiftCard(int codeOfGiftcard)
{
    std::cout << "submit " << codeOfGiftcard << std::endl;
}

bool Safeway::Customer::redeemProduct(int pointsOfProduct)
{
    if (pointsOfProduct > 700)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Safeway::Customer::changeProfile(int dateOfBirthday)
{
    std::cout << " Current Date Of Birthday" << dateOfBirthday << std::endl;
}

struct ShelterOfCats//3
{
    int numberOfCats = 5;
    float distance = 1.2f;
    int amountOfMoneyToAdoptACat = 80;
    float ageOfACat = 0.5f;
    int activityLevel = 3;
    void adoptACat(int numberOfCat);
    double donateMoney(double donation);
    void visitTheShelterOnSite(std::string address);
};

void adoptACat(int numberOfCat)
{
    std::cout << " Current number of cat:" << numberOfCat << std::endl;
}

double donateMoney(double donation)
{
    donation = 4.90;
    return donation;
}

void visitTheShelterOnSite(std::string address)
{
 std::cout << " The address:" << address << std::endl;
}

struct TvSeries//4
{
    int numberOfSeason = 2;
    int numberOfEpisode = 13;
    int lengthOfOneEpisode = 45;
    int numberOfLanguagesSupported = 3;
    float rating = 7.7f;
    void adjustTheTimeline(double currentTime);

    //returns the watchlist
    std::string addToWatchlist(std::string addressOfTvSeries);
    void watchTrailer(std::string addressOfTrailer, int numberSeason);
};

void TvSeries::adjustTheTimeline(double currentTime)
{
    std::cout << currentTime << std::endl;
}
    //returns the watchlist
std::string TvSeries::addToWatchlist(std::string addressOfTvSeries)
{
    return addressOfTvSeries;
}

void TvSeries::watchTrailer(std::string addressOfTrailer, int numberSeason)
{
    std::cout << " Trailer of " << numberSeason << addressOfTrailer << std::endl;
}

struct User//5
{
    int userRegistrationDays = 344;
    int typeOfMemvership = 2;
    int genderOfUser = 1;
    int levelOfUser = 3;
    int numberOfMessages = 4;
    void sendMessagesToOtherUsers(std::string nameOfOtherUser);
    std::string createAPlaylist(std::string nameOfPlaylist);   
    void setPlaylistPrivacy(int numberOfPlaylist);
};

void User::sendMessagesToOtherUsers(std::string nameOfOtherUser)
{
    std::cout << " Search result" << nameOfOtherUser << std::endl;
}

std::string User::createAPlaylist(std::string nameOfPlaylist = "BirthdaySong")
{
    return nameOfPlaylist;
}

void User::setPlaylistPrivacy(int numberOfPlaylist)
{
    std::cout << numberOfPlaylist << " is set to private" << std::endl;
}

struct Artist//6
{
    int age = 23;
    int numberOfSocialUpdates = 14;
    int numberOfFollowers = 1002;
    int numberOfAlbums = 3;
    int numberOfAwards = 5;
    struct Group
    {
        int numberOfMembers = 233;
        std::string administrator = "sodabuddy";
        std::string notice = " New album will be released in few weeks";
        int limitOfMembers = 500;
        int unreadMessages = 82;
        void addAdministrators(std::string nickname = "Tulips");
        void confirmNotice(std::string notice1);
        void changeNickname(std::string newNickname = "Cornish");
    };
    std::string followAArtist(std::string nameOfArtist);
    void enterTheGroupOfAArtist(Group group);
    void CheckTheHottestSongOfArtist(int rankingOfASong);
};

void Artist::Group::addAdministrators(std::string nickname)
{
    std::cout << " New Administrator:" << nickname << std::endl;
}

void Artist::Group::confirmNotice(std::string notice1 = "Monday" )
{
    std::cout << " Confirmed" << notice1 << std::endl;
}

void Artist::Group::changeNickname(std::string newNickname)
{
    std::cout << " New Nickname" << newNickname << std::endl;
}

std::string Artist::followAArtist(std::string nameOfArtist)
{
    return nameOfArtist;
}

void Artist::enterTheGroupOfAArtist(Group group)
{
    std::cout << " Successful enter into" << group.numberOfMembers << std::endl;
}

void Artist::CheckTheHottestSongOfArtist(int rankingOfASong)
{
    std::cout << " The ranking:" << rankingOfASong << std::endl;
}

struct Album//7
{
    int salesVolume = 130023;
    int releaseYear = 1998;
    int numberOfSongs = 10;
    float lengthOfAlbum = 32.5f;   
    float priceOfAlbum = 34.99f;
    void saveTheImageOfCover(char addressOfCover);
    void ReadTheBriefIntroductionOfAAlbum(char briefIntroduction);
    void playASongInAlbum (char addressOfSong);
};

void Album::saveTheImageOfCover(char addressOfCover)
{
    
    std::cout << addressOfCover << "succesfully saved" << std::endl;
}

void Album::ReadTheBriefIntroductionOfAAlbum(char briefIntroduction)
{
    std::cout << briefIntroduction << std::endl;
}

void Album::playASongInAlbum (char addressOfSong)
{
    std::cout << "visit" << addressOfSong << std::endl;
}

struct Ranking//8
{
    int rankingOfASong = 17;
    int numberOfRankingChangesOfASong = -2;
    int periodOfTheRanking= 7;
    int peak = 3;

    int numberOfPeoplaWhoShareTheRankingToSocialPlatform = 466;
    bool playTheMusicOfARanking(std::string nameOfASong);
    void checkARankingOfThisWeek(int numberOfWeek);
    double favoriteARanking(int numberOfPlaylist);
};

bool Ranking::playTheMusicOfARanking(std::string nameOfASong)
{
    std::cout << nameOfASong << std::endl;
    return 1;
}

void Ranking::checkARankingOfThisWeek(int numberOfWeek)
{
    std::cout << "Current Week:" << numberOfWeek << std::endl;
}

double Ranking::favoriteARanking(int numberOfPlaylist)
{
    std::cout << "New Playlist:" << numberOfPlaylist + 1 << std::endl;
    return 0.1;
}

struct MusicInterview//9
{
    std::string host = "Samy";
    std::string artist = "Lana Del Rey";    
    int numberOfWord = 1979;
    int date = 23;
    std::string topic = "Who is Lana Del Rey";
    void readTheInterview(char addressOfInterview);
    int commentOnTheInterview(int numberOfComment = 23);
    void watchTheVideoOfTheInterview(std::string addressOfVideoOfTheInterview);
};

void MusicInterview::readTheInterview(char addressOfInterview)
{
    std::cout << "The address of interview:" << addressOfInterview << std::endl;
}

int MusicInterview::commentOnTheInterview(int numberOfComment)
{
    return numberOfComment;
}

void MusicInterview::watchTheVideoOfTheInterview(std::string addressOfVideoOfTheInterview)
{
    std::cout << "The address of video:" << addressOfVideoOfTheInterview << std::endl;
}

struct MusicApp//10
{
    User user;
    Artist artist;
    Album album;
    Ranking ranking;
    MusicInterview musicInterview;
    void listenToMusic(bool statusOfPlay = 1);
    double subscribeMembership(double priceOfMembership);
    void makeCommentCertainPieceOfMusic(int numberOfThread);
};

void MusicApp::listenToMusic(bool statusOfPlay)
{
    if (statusOfPlay == 1)
    {
        std::cout << "playing" << std::endl;
    }
    else
    {
        std::cout << "pause" << std::endl;
    }
}

double MusicApp::subscribeMembership(double priceOfMembership)
{
    priceOfMembership = 13.99;
    return priceOfMembership;
}

void MusicApp::makeCommentCertainPieceOfMusic(int numberOfThread)
{
    std::cout << "This is " << numberOfThread << "comment." << std::endl;
}
#include <iostream>
int main()
{
    Person Samy;
    int speed = 3;
    bool beginLeft = true;
    Samy.run(speed, beginLeft);
    Samy.run(speed, beginLeft);
    Samy.run(speed, beginLeft);
    Samy.run(speed, beginLeft);
    std::cout << "good to go!" << std::endl;


}
