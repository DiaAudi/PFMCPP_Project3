/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call some of those amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.






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
    return true;   
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
    donation += donation;
    return 4.90;
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
    return true;
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
    void listenToMusic(bool statusOfPlay = true);
    double subscribeMembership(double priceOfMembership);
    void makeCommentCertainPieceOfMusic(int numberOfThread);
};

void MusicApp::listenToMusic(bool statusOfPlay)
{
    if (statusOfPlay == true)
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
    Example::main();
    
    std::cout << "good to go!" << std::endl;


}
