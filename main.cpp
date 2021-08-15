/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; // in-class initialization
    UDT() : a(0) { } // 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()







struct Leetcode//1
{
    Leetcode();
    int k;
    int numberOfComments = 24;
    int numberOfSubmissions = 4;
    int numberOfSolvedQuestions = 13;
    float acceptanceRate = 0.66f;
    float overallScore = 87.5f;
    int writeCode(int languageType);
    void helpOthersWithTheirCode(int numberOfQuestion);
    void pinAThread(int numberOfThread);
    void printThingone();
};

Leetcode::Leetcode()
{
    k = 1;
}

void Leetcode::printThingone()
{
    std::cout << "Leetcode::printThing() " << k << std::endl; 
}

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
    int b;
    Safeway();
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
    void printThing();
};

Safeway::Safeway()
{
    b = 2;
}

void Safeway::printThing()
{
    std::cout << "Safeway::printThing() " << b << std::endl; 
}

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
    ShelterOfCats();
    int c;
    int numberOfCats = 5;
    float distance = 1.2f;
    int amountOfMoneyToAdoptACat = 80;
    float ageOfACat = 0.5f;
    int activityLevel = 3;
    void adoptACat(int numberOfCat);
    double donateMoney(double donation);
    void visitTheShelterOnSite(std::string address);
    void printThing();
};

ShelterOfCats::ShelterOfCats()
{
    c = 3;
}

void ShelterOfCats::printThing()
{
    std::cout << "ShelterOfCats::printThing() " << c << std::endl; 
}

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
    TvSeries();
    int d;
    int numberOfSeason = 2;
    int numberOfEpisode = 13;
    int lengthOfOneEpisode = 45;
    int numberOfLanguagesSupported = 3;
    float rating = 7.7f;
    void adjustTheTimeline(double currentTime);
    void printThing();

    //returns the watchlist
    std::string addToWatchlist(std::string addressOfTvSeries);
    void watchTrailer(std::string addressOfTrailer, int numberSeason);
};

TvSeries::TvSeries()
{
    d = 4;
}

void TvSeries::printThing()
{
    std::cout << "TvSeries::printThing() " << d << std::endl; 
}

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
    User();
    int e;
    int userRegistrationDays = 344;
    int typeOfMemvership = 2;
    int genderOfUser = 1;
    int levelOfUser = 3;
    int numberOfMessages = 4;
    void sendMessagesToOtherUsers(std::string nameOfOtherUser);
    std::string createAPlaylist(std::string nameOfPlaylist);   
    void setPlaylistPrivacy(int numberOfPlaylist);
    void printThing();
};

User::User()
{
    e = 5;
}

void User::printThing()
{
    std::cout << "User::printThing() " << e << std::endl; 
}

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
    Artist();
    int f;
    int age = 23;
    int numberOfSocialUpdates = 14;
    int numberOfFollowers = 1002;
    int numberOfAlbums = 3;
    int numberOfAwards = 5;
    void printThing();
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

Artist::Artist()
{
    f = 6;
}

void Artist::printThing()
{
    std::cout << "Artist::printThing() " << f << std::endl; 
}

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
    Album();
    int g;
    int salesVolume = 130023;
    int releaseYear = 1998;
    int numberOfSongs = 10;
    float lengthOfAlbum = 32.5f;   
    float priceOfAlbum = 34.99f;
    void saveTheImageOfCover(char addressOfCover);
    void ReadTheBriefIntroductionOfAAlbum(char briefIntroduction);
    void playASongInAlbum (char addressOfSong);
    void printThing();
};

Album::Album()
{
    g = 7;
}

void Album::printThing()
{
    std::cout << "Album::printThing() " << g << std::endl; 
}

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
    Ranking();
    int h;
    int rankingOfASong = 17;
    int numberOfRankingChangesOfASong = -2;
    int periodOfTheRanking= 7;
    int peak = 3;

    int numberOfPeoplaWhoShareTheRankingToSocialPlatform = 466;
    bool playTheMusicOfARanking(std::string nameOfASong);
    void checkARankingOfThisWeek(int numberOfWeek);
    double favoriteARanking(int numberOfPlaylist);
    void printThing();
};

Ranking::Ranking()
{
    h = 8;
}

void Ranking::printThing()
{
    std::cout << "Ranking::printThing() " << h << std::endl; 
}

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
    MusicInterview();
    int i;
    std::string host = "Samy";
    std::string artist = "Lana Del Rey";    
    int numberOfWord = 1979;
    int date = 23;
    std::string topic = "Who is Lana Del Rey";
    void readTheInterview(char addressOfInterview);
    int commentOnTheInterview(int numberOfComment = 23);
    void watchTheVideoOfTheInterview(std::string addressOfVideoOfTheInterview);
    void printThing();
};

MusicInterview::MusicInterview()
{
    i = 9;
}

void MusicInterview::printThing()
{
    std::cout << "MusicInterview::printThing() " << i << std::endl; 
}

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
    MusicApp();
    int j;
    User user;
    Artist artist;
    Album album;
    Ranking ranking;
    MusicInterview musicInterview;
    void listenToMusic(bool statusOfPlay = true);
    double subscribeMembership(double priceOfMembership);
    void makeCommentCertainPieceOfMusic(int numberOfThread);
    void printThing();
};

MusicApp::MusicApp()
{
    j = 10;
}

void MusicApp::printThing()
{
    std::cout << "MusicApp::printThing() " << j << std::endl; 
}

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

    Leetcode cpp;//1
    cpp.printThingone();          
    std::cout << "Is cpp's member var 'k' equal to 1? " << (cpp.k == 1 ? "Yes" : "No") << "\n";

    Safeway northblock;//2
    northblock.printThing();
    std::cout << "Is northblock's member var 'b' equal to 2? " << (northblock.b == 2 ? "Yes" : "No") << "\n";

    ShelterOfCats oreo;//3
    oreo.printThing();
    std::cout << "Is oreo's member var 'c' equal to 3? " << (oreo.c == 3 ? "Yes" : "No") << "\n";

    TvSeries channelsix;//4
    channelsix.printThing();
    std::cout << "Is channelsix's member var 'd' equal to 4? " << (channelsix.d == 4 ? "Yes" : "No") << "\n";

    User sodabuddy; //5
    sodabuddy.printThing();
    std::cout << "Is sodabuddy's member var 'e' equal to 5? " << (sodabuddy.e == 5 ? "Yes" : "No") << "\n";

    Artist ladygaga;//6
    ladygaga.printThing();
    std::cout << "Is ladygaga's member var 'f' equal to 6? " << (ladygaga.f == 6 ? "Yes" : "No") << "\n";

    Album whome;//7
    whome.printThing();
    std::cout << "Is whome's member var 'g' equal to 7? " << (whome.g == 7 ? "Yes" : "No") << "\n";
    
    Ranking currentweek;//8
    currentweek.printThing();
    std::cout << "Is currentweek's member var 'h' equal to 8? " << (currentweek.h == 8 ? "Yes" : "No") << "\n";

    MusicInterview seeteddynight;//9
    seeteddynight.printThing();
    std::cout << "Is seeteddynight's member var 'i' equal to 9? " << (seeteddynight.i == 9 ? "Yes" : "No") << "\n";

    MusicApp netease;//10
    netease.printThing();
    std::cout << "Is netease's member var 'j' equal to 10? " << (netease.j == 10 ? "Yes" : "No") << "\n";

    std::cout << "good to go!" << std::endl;

    return 0;
}
