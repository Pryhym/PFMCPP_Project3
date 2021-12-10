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
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
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





struct Laundromat
{
    
    int numWashers = 5;
    int numDryers {20}; 
    float amOfWaterUsedDaily {20.5f}; 
    float amOfEnergyUsedDaily = 70.21f;
    float amOfMoneyMadeDaily = 500.75f;
    Laundromat();
    struct WashingMachine
    {
        std::string brand = "Maytag";
        int modelNum;
        float waterUsed;
        float powUsed = 75.43f;
        int washes = 17;
        WashingMachine () :
         modelNum(730), 
         waterUsed(24.57f)
         {}
        void wash(); 
        float countChange(int coins);
        float downTime(float timeOff);
    };

    void washClothes();
    void dryClothes();
    float makeChange(float price, float amPaid);
};

Laundromat::Laundromat()
{
    std::cout << "Laundromat Class" << std::endl;
    std::cout << "constructing the Amount of Water Used is: " << amOfWaterUsedDaily << std::endl;

}
void Laundromat::washClothes()
{
    std::cout << "Number Of Dryers: " << numDryers << std::endl;
}

void Laundromat::dryClothes()
{

}

float Laundromat::makeChange(float price, float amPaid)
{
    return amPaid - price;
}

void Laundromat::WashingMachine::wash()
{

}

float Laundromat::WashingMachine::countChange(int coins)
{
    return coins;
}

float Laundromat::WashingMachine::downTime(float timeOff)
{
    return timeOff;
}

struct Bank
{
    float moneyDeposited {2343.65f};
    float moneyWithdrawn {543.69f};
    float interestPaid = 349.67f;
    float paid;
    float debtOwed;
    Bank ():
    paid(1694.24f),
    debtOwed(5430.69f)
    {}
    float holdMoney(float amount);
    void processTransactions();
    float produceCashBalance(float balance);
};

float Bank::holdMoney(float amount)
{
    return amount;
}

void Bank::processTransactions()
{
    std::cout << "Money Withdrawn from ACCT: " << moneyWithdrawn << std::endl;
}

float Bank::produceCashBalance(float balance)
{
    return balance;
}

struct Restaurant
{
    int tblsAvail {9};
    int workers = 8;
    int platesServed {24};
    float amFoodPerFamily = 79.48f;
    float hoursWorked = 86.77f;
    Restaurant();

    struct Server
    {
        std::string name = "James";
        long phoneNum = 8434305954;
        int amOfPeopleServed;
        float hoursWorked;
        Server():
        amOfPeopleServed(8),
        hoursWorked(17.5f)
        {}
        float currPay = 9.45f;
        void serveCustomer();
        void cleanTable();
        float countTip(float tip);
    };

    void serveFood();
    float collectPayment(float payment);
    void provideEatingUtensils();
};

Restaurant::Restaurant()
{
    std::cout << "Restaurant Class" << std::endl;
    std::cout << "Tables Available: " << tblsAvail << std::endl;
}

void Restaurant::serveFood()
{
    std::cout << "Plates Served: " << platesServed << std::endl;
}

float Restaurant::collectPayment(float payment)
{
    return payment;
}

void Restaurant::provideEatingUtensils()
{

}

void Restaurant::Server::serveCustomer()
{

}

void Restaurant::Server::cleanTable()
{

}

float Restaurant::Server::countTip(float tip)
{
    return tip;
}

struct CarDealership
{
    int carInventory {40};
    int carSold {86};
    int staff;
    int carServiced;
    int inventoryBought = 64;
    CarDealership() :
    staff(15), 
    carServiced(24)
    {}
    float sellCars(float price);
    void hireSalesmen();
    int buyInventory(int inventory);
};


float CarDealership::sellCars(float price)
{
    return price;
}

void CarDealership::hireSalesmen()
{
    std::cout << "Cars Sold: " << carSold << std::endl;
}

int CarDealership::buyInventory(int inventory)
{
    return inventory;
}

struct Speakers
{
 
    std::string brand {"Vagnavox"};
    int modelNum {214375};
    int size = 12;
    float freqRange = 15000.00f;
    float impedence = 59.45f;
    Speakers();
    void produceAudio();
    void receiveSignal();
    void vibrateCone();
};

Speakers::Speakers()
{
    std::cout << "Speakers Class" << std::endl;
    std::cout << "The Speaker Brand Is: " << brand << std::endl;
}

void Speakers::produceAudio()
{

}

void Speakers::receiveSignal()
{
    std::cout << "Model Number: " << modelNum << std::endl;
}

void Speakers::vibrateCone()
{
    
}

struct Amp
{
    std::string brand = "Fender";
    int modelNum {18493};
    float power = 700;
    float impedence = 1200;
    int outputs = 4;
    Amp();
    void projectAudio();
    void powerSpeakers();
    void protectSystemFailure();
};

Amp::Amp()
{
    std::cout << "Amp Class" << std::endl;
    std::cout << "The Amp Brand Is: " << brand << std::endl;
}

void Amp::projectAudio()
{
    
}

void Amp::powerSpeakers()
{
    std::cout << "Model Number: " << modelNum << std::endl;
}

void Amp::protectSystemFailure()
{
    
}

struct Receiver
{
    std::string brand {"Pioneer"};
    int modelNum {869585};
    int function = 5;
    int inputs = 8;
    int outputs = 4;
    Receiver();
    void playCds();
    void playRecords();
    void playRadio();
};

Receiver::Receiver()
{
    std::cout << "Receiver Class" <<std::endl;
    std::cout << "The Receiver Brand Is: " << brand << std::endl;
}

void Receiver::playCds()
{
    
}

void Receiver::playRecords()
{
    std::cout << "Model Number: " << modelNum << std::endl;
}

void Receiver::playRadio()
{
    
}

struct Remote
{
    std::string brand {"Pioneer"};
    int modelNum {986454};
    float range = 95.60f;
    int selector = 8;
    int batteries = 2;
    Remote();
    void selectInputs();
    int adjustVolume(int volUp, int volDwn, int currVol);
    void selectMode();
};

Remote::Remote()
{
    std::cout << "Remote Class" << std::endl;
    std::cout << "The Remote Brand Is: " << brand << std::endl;
}

void Remote::selectInputs()
{
    std::cout << "Model Number: " << modelNum << std::endl;
}

int Remote::adjustVolume(int volumeUp, int volumeDown, int currentVolume)
{
    currentVolume += volumeUp - volumeDown;
    return currentVolume;

}

void Remote::selectMode()
{
    
}

struct Turntable
{
    std::string brand {"Mercury"};
    int modelNum {7393734};
    float outputs;
    float beltSpeed;
    float needleWeight = 0.49673f;
    Turntable():
    outputs(2), 
    beltSpeed(67.67f)
    {}
    void playRecord();
    bool choosePlaybackSpeed(bool thirtThree);
    void antiSkipAdjust();
};


void Turntable::playRecord()
{
    std::cout << "Model Number: " << modelNum << std::endl;
}

bool Turntable::choosePlaybackSpeed(bool thirtThree)
{
    return thirtThree;
}

void Turntable::antiSkipAdjust()
{
    
}

struct StereoSystem
{
    Speakers speaker;
    Amp amp;
    Receiver receiver;
    Remote remote;
    Turntable turntable;
    StereoSystem();
    void playRecord();
    void playRadio();
    void recordAudio();
};

StereoSystem::StereoSystem()
{
    std::cout << "StereoSystem Class" << std::endl;
}

void StereoSystem::playRecord()
{
    
}

void StereoSystem::playRadio()
{
    std::cout << "Playing Radio through Stereo System" << std::endl;
}

void StereoSystem::recordAudio()
{
    
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    Example::main();
    std::cout << std::endl;

    Laundromat wash;
    wash.washClothes();
    wash.dryClothes();
    std::cout << wash.makeChange(15, 20) <<std::endl;
    std::cout << std::endl;

    Bank bank;
    std::cout << bank.holdMoney(100) << std::endl;
    bank.processTransactions();
    std::cout << bank.produceCashBalance(1000) <<std::endl;
    std::cout << std::endl;

    Restaurant food;
    food.serveFood();
    std::cout << food.collectPayment(50.00) << std::endl;
    food.provideEatingUtensils();
    std::cout << std::endl;

    CarDealership cars;
    std::cout <<cars.sellCars(20000) << std::endl;
    std::cout << cars.buyInventory(20) << std::endl;
    cars.hireSalesmen();
    std::cout << std::endl;

    Speakers speak;
    speak.produceAudio();
    speak.receiveSignal();
    speak.vibrateCone();
    std::cout << std::endl;

    Amp amp;
    amp.projectAudio();
    amp.powerSpeakers();
    amp.protectSystemFailure();
    std::cout << std::endl;

    Receiver receive;
    receive.playCds();
    receive.playRecords();
    receive.playRadio();
    std::cout << std::endl;

    Remote remote;
    remote.selectInputs();
    std::cout << remote.adjustVolume(2,1,3)<< std::endl;
    remote.selectMode();
    std::cout << std::endl;

    Turntable turn;
    turn.playRecord();
    turn.choosePlaybackSpeed(false);
    turn.antiSkipAdjust();
    std::cout << std::endl;

    StereoSystem stereo;
    stereo.playRecord();
    stereo.playRadio();
    stereo.recordAudio();
    std::cout << std::endl;

    std::cout << "good to go!" << std::endl;
}
