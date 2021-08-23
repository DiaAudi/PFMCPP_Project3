/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n){ } //constructor
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            bar.num += 1;                    //2a)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //3) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4) 
    return 0;
}
}

//call Example::main() in main()










struct Leetcode//1
{
    int w{5};
    int k = 0;
    Leetcode();
    int numberOfComments = 24;
    int numberOfSubmissions = 4;
    int numberOfSolvedQuestions = 13;
    float acceptanceRate = 0.66f;
    float overallScore = 87.5f;
    int writeCode(int languageType);
    void helpOthersWithTheirCode(int numberOfQuestion);
    void pinAThread(int numberOfThread);
    void printThingone();
    int helperCertificate(int standard, int credit);
    
};

Leetcode::Leetcode() : k(0){}

int Leetcode::helperCertificate(int standard, int credit = 0)//P5
{
    while(credit <  standard)
    {
        ++credit;
        std::cout << "increasing credit: " << credit << std::endl;
        if(credit >= standard)
        {
            std::cout << "You are eligible for the helper certificate!" << std::endl;
            numberOfSolvedQuestions = credit;
            return standard;
        }
    }
    return -1;
}

void Leetcode::printThingone()
{
    std::cout << "Leetcode::printThing() k:" << k << " w:" << w << std::endl; 
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




//===================================================
struct Safeway//2
{
    int b;
    float bb{2.2f};
    Safeway();
    float openTime = 9.f;
    float discount = 0.7f;
    int customerPoints = 234;
    float closeTime = 21.f;
    int coupons = 34;
    
    struct Customer
    {
        int accountnumber = 133423;
        int membership = 37;
        bool relatedCreditCard = 0;
        float amountOfLastOrder = 67.59f;
        int registrationDays = 133;
        void redeemGiftCard(int codeOfGiftcard = 133278645);
        bool redeemProduct(int pointsOfProduct = 700);
        void changeProfile(int dateOfBirthday = 13);
        int alarmForMembership(int threshold, int currentDays);
    };

    void orderGroceryOnline(Customer customer);
    double refund(int productNumber);
    void collectCoupons(Customer customer);
    void printThing();
    int limitOfCoupons(int threshold, int couponsInUse);
};

int Safeway::Customer::alarmForMembership(int threshold, int currentDays = 0)//P5
{  
    while(currentDays >  threshold)
    {
        --currentDays;
        std::cout << "left days: " << currentDays << std::endl;
        if(currentDays <= threshold)
        {
            std::cout<< "It's time to refresh your membership." << std::endl;
            membership = currentDays;
            return currentDays;
        }
    }
    return -1;
}

int Safeway::limitOfCoupons(int threshold, int couponsInUse = 0)//P5
{
    while(couponsInUse < threshold)
    {
        ++couponsInUse;
        std::cout << "coupons in use : " << couponsInUse << std::endl;
        if(couponsInUse >= threshold)
        {
            std::cout << "In one order, you could only use 5 promocode." << std::endl;
            coupons  = couponsInUse;
            return couponsInUse;
        }
    }
    return -1;
}

Safeway::Safeway() : b(2)
{
}


void Safeway::printThing()
{
    std::cout << "Safeway::printThing() b: " << b << " bb:"<< bb << std::endl; 
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


//===================================================
struct ShelterOfCats//3
{
    float cb{3.3f};
    ShelterOfCats();
    int c;
    int numberOfCats = 5;
    float distance = 1.2f;
    int amountOfMoneyToAdoptACat = 80;
    float ageOfACat = 0.5f;
    int getVaccined = 3;
    void adoptACat(int numberOfCat);
    double donateMoney(double donation);
    void visitTheShelterOnSite(std::string address);
    void printThing();
    int preparationBeforeAdopt(int preparationNumber, int vaccineNumber = 0);
};

int ShelterOfCats::preparationBeforeAdopt(int preparationNumber, int vaccineNumber)
{
    for(int i = vaccineNumber; i <= preparationNumber; ++i)
    {
        std::cout << "Already get vaccined: " << i << std::endl;
        if(i >= preparationNumber)
        {
            std::cout << "This kitten is all set."<< std::endl;
            getVaccined = i;
            return i;
        }
    }
    return -1;
}

ShelterOfCats::ShelterOfCats() : c(3)
{
}


void ShelterOfCats::printThing()
{
    std::cout << "ShelterOfCats::printThing() c: " << c << " cb:" << cb << std::endl; 
}

void ShelterOfCats::adoptACat(int numberOfCat)
{
    std::cout << "Current number of cat: " << numberOfCat << std::endl;
}

double ShelterOfCats::donateMoney(double donation)
{
    donation += donation;
    return 4.90;
}

void ShelterOfCats::visitTheShelterOnSite(std::string address)
{
    std::cout << "The address:" << address << std::endl;
}



//===================================================
struct TvSeries//4
{
    double db{4.4};
    TvSeries();
    int d;
    int numberOfSeason = 2;
    int numberOfEpisode = 13;
    int lengthOfOneEpisode = 45;
    int numberOfLanguagesSupported = 3;
    double rating = 7.7;
    void adjustTheTimeline(double currentTime);
    void printThing();

    //returns the watchlist
    std::string addToWatchlist(std::string addressOfTvSeries);
    void watchTrailer(std::string addressOfTrailer, int numberSeason);
    double fiveStar(double standard, double ratings = 0);
};

double TvSeries::fiveStar(double standard, double ratings)//P5
{
    for(double i = ratings; 1; i += 0.1)
    {
        std::cout << " The rating is : " << i << std::endl;
        if(i >= standard)
        {
            std::cout << "This TV series reaches five star." << std::endl;
            rating = i;
            return i;
        }
    }
}

TvSeries::TvSeries() : d(4)
{

}

void TvSeries::printThing()
{
    std::cout << "TvSeries::printThing() d:" << d << " db:"<< db << std::endl; 
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





//===================================================
struct User//5
{

    double eb{5.5};
    User();
    int e;
    int userRegistrationDays = 344;
    int typeOfMembership = 2;
    int genderOfUser = 1;
    int levelOfUser = 3;
    int numberOfMessages = 4;
    void sendMessagesToOtherUsers(std::string nameOfOtherUser);
    std::string createAPlaylist(std::string nameOfPlaylist);   
    void setPlaylistPrivacy(int numberOfPlaylist);
    void printThing();
    int alarmOfStorage(int storageCapacity, int currentMessages);
};

int User::alarmOfStorage(int storageCapacity, int currentMessages = 0)
{
    while(currentMessages < storageCapacity)
    {
        ++currentMessages;
        std::cout << "Number of messages: " << currentMessages << std::endl;
        if(currentMessages >= storageCapacity)
        {
            std::cout << "There is no space for new messages." << std::endl;
            numberOfMessages = currentMessages;
            return currentMessages;
        }
    }
    return -1;
}
User::User() : e(5)
{

}

void User::printThing()
{
    std::cout << "User::printThing() e:" << e << " eb:" << eb << std::endl; 
}

void User::sendMessagesToOtherUsers(std::string nameOfOtherUser)
{
    std::cout << "Search result: " << nameOfOtherUser << std::endl;
}

std::string User::createAPlaylist(std::string nameOfPlaylist = "BirthdaySong")
{
    return nameOfPlaylist;
}

void User::setPlaylistPrivacy(int numberOfPlaylist)
{
    std::cout << numberOfPlaylist << " is set to private" << std::endl;
}



//===================================================
struct Artist//6
{
    double fb{6.6};
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
        int groupMembers(int capacity, int members = 0);
    };
    std::string followAArtist(std::string nameOfArtist);
    void enterTheGroupOfAArtist(Group group);
    void checkTheHottestSongOfArtist(int rankingOfASong);
    void abbreOfNumber(int fiveThousands, int followers = 0);
};

void Artist::abbreOfNumber(int fiveThousands, int followers)
{
    std::string fiveThou = "5k";
    while(followers < fiveThousands)
    {
        followers += 100;
        std::cout << "This artist has " << followers << " followers" << std::endl;
        if(followers >= fiveThousands)
        {
            numberOfFollowers = followers;
            std::cout << "This artist has " << fiveThou << " followers" << std::endl;
        }
    }
}

int Artist::Group::groupMembers(int capacity, int members)
{
    while(members < capacity)
    {
        ++members;
        std::cout << "The group has" << members << "members" << std::endl;
        if(members >= capacity)
        {
            std::cout<< "There is no capacity for new members." << std::endl;
            numberOfMembers = members;
            return members;
        }
    }
    return -1;
}
Artist::Artist() : f(6){}

void Artist::printThing()
{
    std::cout << "Artist::printThing() f: " << f << " fb:" << fb << std::endl; 
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

void Artist::checkTheHottestSongOfArtist(int rankingOfASong)
{
    std::cout << "The ranking: " << rankingOfASong << std::endl;
}



//===================================================
struct Album//7
{
    float gb{7.7f};
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
    int productionVolume(int stock, int sales = 0);
};

int Album::productionVolume(int stock, int sales)
{
    while(sales < stock)
    {
        ++sales;
        std::cout << "increasing sales: " << sales << std::endl;
        if(sales >= stock)
        {
            salesVolume = sales;
            std::cout << "This album is out of stock" << std::endl;
            return sales;
        }
    }
    return sales;
}

Album::Album() : g(7){}

void Album::printThing()
{
    std::cout << "Album::printThing() g: " << g << " gb:" << gb << std::endl; 
}

void Album::saveTheImageOfCover(char addressOfCover)
{
    
    std::cout << addressOfCover << " is succesfully saved" << std::endl;
}

void Album::ReadTheBriefIntroductionOfAAlbum(char briefIntroduction)
{
    std::cout << briefIntroduction << std::endl;
}

void Album::playASongInAlbum (char addressOfSong)
{
    std::cout << "visit: " << addressOfSong << std::endl;
}



//===================================================
struct Ranking//8
{
    double hb{8.8};
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
    int updatePeak(int highestPeak, int currentPeak);
};

int Ranking::updatePeak(int highestPeak, int currentPeak)
{
    for(int i = currentPeak; i >= highestPeak; --i)
    {
        currentPeak = i;
        std::cout << "increasing rank: " << i << std::endl;
        if(i < highestPeak)
        {
            highestPeak = i;
            peak = i;
            return i;
        }
    }
    return -1;
}

Ranking::Ranking() : h(8){}


void Ranking::printThing()
{
    std::cout << "Ranking::printThing() h: " << h << " hb:" << hb << std::endl; 
}

bool Ranking::playTheMusicOfARanking(std::string nameOfASong)
{
    std::cout << nameOfASong << std::endl;
    return true;
}

void Ranking::checkARankingOfThisWeek(int numberOfWeek)
{
    std::cout << "Current Week: " << numberOfWeek << std::endl;
}

double Ranking::favoriteARanking(int numberOfPlaylist)
{
    std::cout << "New Playlist: " << numberOfPlaylist + 1 << std::endl;
    return 0.1;
}


//===================================================
struct MusicInterview//9
{
    double ib{9.9};
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
    int estimatedReadTime(int standard, int count);
};

int MusicInterview::estimatedReadTime(int standardTwentyM, int count)//P5
{
    while(count < standardTwentyM)
    {
        ++count;
        std::cout << "increasing count" << count << std::endl;
        if(count >= standardTwentyM)
        {
            std::cout << "Need about 20 min to read" << std::endl;
            numberOfWord = count;
            return count;
        }
    }
    return -1;
}

MusicInterview::MusicInterview() : i(9){}


void MusicInterview::printThing()
{
    std::cout << "MusicInterview::printThing() i: " << i << " ib:" << ib << std::endl; 
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
    std::cout << "The address of video: " << addressOfVideoOfTheInterview << std::endl;
}


//===================================================
struct MusicApp//10
{
    int j;
    int ja;
    double jb{10.1};
    MusicApp();
    User user;
    Artist artist;
    Album album;
    Ranking ranking;
    MusicInterview musicInterview;
    void listenToMusic(bool statusOfPlay = true);
    double subscribeMembership(double priceOfMembership);
    void makeCommentCertainPieceOfMusic(int numberOfThread);
    void printThing();
    void recommendationForWeek(int day);
};

void MusicApp::recommendationForWeek(int day)
{   
    int i = 0;
    std::string song[7] = {"Romance", "Come Thru", "Perfect", "Halo", "First Love", "You Belong To Me", "Hypnotic"};
    std::cout<< "The recommendation of this week:" << std::endl;
    while(i <= day)
    {
        if (i == day)
        {
            std::cout << "That's all" << std::endl;
            break;
        }
        std::cout << song[i] << std::endl;
        ++i;
        
    }
}

MusicApp::MusicApp() : j(10){}

void MusicApp::printThing()

{
    std::cout << "MusicApp::printThing() j:" << j << " jb:" << jb << std::endl; 
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
    std::cout << "This is " << numberOfThread << " comment." << std::endl;
}
#include <iostream>
int main()
{
    Example::main();

    Leetcode cpp;//1
    cpp.printThingone(); 
    Safeway northblock;//2
    northblock.printThing();
    ShelterOfCats oreo;//3
    oreo.printThing();
    TvSeries channelsix;//4
    channelsix.printThing();
    User sodabuddy; //5
    sodabuddy.printThing();
    Artist ladygaga;//6
    ladygaga.printThing();
    Album whome;//7
    whome.printThing();
    Ranking currentweek;//8
    currentweek.printThing();
    MusicInterview seeteddynight;//9
    seeteddynight.printThing();
    MusicApp netease;//10
    netease.printThing();
    Safeway::Customer patrick;
    Artist::Group loveGaga;

    std::cout<< "" << std::endl;

    cpp.helperCertificate(15, 13);
    std::cout << "cpp.credit: " << cpp.numberOfSolvedQuestions << std::endl << std::endl;
    northblock.limitOfCoupons(5, 3);
    std::cout << "northblock.coupons: " << northblock.coupons << std::endl << std::endl;
    patrick.alarmForMembership(10, 13);
    std::cout << "patrick.membership: " << patrick.membership << std::endl << std::endl;
    oreo.preparationBeforeAdopt(3, 1);
    std::cout << "oreo.getVaccined: " << oreo.getVaccined << std::endl << std::endl;  
    channelsix.fiveStar(7.9, 7.7);
    std::cout << "channelsix.rating: " << channelsix.rating << std::endl << std::endl; 
    sodabuddy.alarmOfStorage(50, 47);
    std::cout << "sodabuddy.messages: " << sodabuddy.numberOfMessages << std::endl << std::endl;
    ladygaga.abbreOfNumber(5000, 4700);
    std::cout << "ladygaga.followers: " << ladygaga.numberOfFollowers << std::endl << std::endl;
    loveGaga.groupMembers(500, 497);
    std::cout << "loveGaga.members: " << loveGaga.numberOfMembers << std::endl << std::endl;
    whome.productionVolume(300, 297);
    std::cout << "whome.salesVolume: " << whome.salesVolume << std::endl << std::endl;
    currentweek.updatePeak(3, 5);
    std::cout << "currentweek.peak: " << currentweek.peak << std::endl << std::endl;
    seeteddynight.estimatedReadTime(1980, 1977);
    std::cout << "seeteddynight.numberOfWord: " << seeteddynight.numberOfWord << std::endl << std::endl;
    netease.recommendationForWeek(7);
    
    std::cout<< "" << std::endl;

    std::cout << "Is cpp's member var 'k' equal to 1? " << (cpp.k == 1 ? "Yes" : "No") << "\n";
    std::cout << "Is northblock's member var 'b' equal to 2? " << (northblock.b == 2 ? "Yes" : "No") << "\n";
    std::cout << "Is oreo's member var 'c' equal to 3? " << (oreo.c == 3 ? "Yes" : "No") << "\n";
    std::cout << "Is channelsix's member var 'd' equal to 4? " << (channelsix.d == 4 ? "Yes" : "No") << "\n";
    std::cout << "Is sodabuddy's member var 'e' equal to 5? " << (sodabuddy.e == 5 ? "Yes" : "No") << "\n";
    std::cout << "Is ladygaga's member var 'f' equal to 6? " << (ladygaga.f == 6 ? "Yes" : "No") << "\n";
    std::cout << "Is whome's member var 'g' equal to 7? " << (whome.g == 7 ? "Yes" : "No") << "\n";
    std::cout << "Is currentweek's member var 'h' equal to 8? " << (currentweek.h == 8 ? "Yes" : "No") << "\n";
    std::cout << "Is seeteddynight's member var 'i' equal to 9? " << (seeteddynight.i == 9 ? "Yes" : "No") << "\n";
    std::cout << "Is netease's member var 'j' equal to 10? " << (netease.j == 10 ? "Yes" : "No") << "\n";

    std::cout<< "" << std::endl;

    cpp.writeCode(2);
    cpp.pinAThread(23);        
    northblock.refund(77778823);
    Safeway::Customer mary;
    northblock.orderGroceryOnline(mary);
    oreo.donateMoney(4.88);
    oreo.adoptACat(23);
    channelsix.addToWatchlist("www.12344.com");
    channelsix.adjustTheTimeline(23.4);
    sodabuddy.sendMessagesToOtherUsers("Mary");
    sodabuddy.setPlaylistPrivacy(23);
    ladygaga.checkTheHottestSongOfArtist(23);
    ladygaga.followAArtist("ladygaga");
    whome.saveTheImageOfCover('B');
    whome.playASongInAlbum('N');
    currentweek.checkARankingOfThisWeek(34);
    currentweek.favoriteARanking(23);
    seeteddynight.commentOnTheInterview(24);
    seeteddynight.watchTheVideoOfTheInterview("www.asf33.com");
    netease.subscribeMembership(23.99);
    netease.makeCommentCertainPieceOfMusic(44);

    std::cout << "good to go!" << std::endl;

    return 0;
}
