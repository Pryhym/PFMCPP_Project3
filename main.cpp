/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
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





struct Laundromat
{
    
    int numWashers = 20;
    int numDyers = 20; 
    float amOfWaterUsedDaily = 200.00f; 
    float amOfEnergyUsedDaily = 5000.02f;
    float amOfMoneyMadeDaily = 800.45f;

    struct WashingMachine
    {
        std::string brand = "Maytag";
        int modelNum = 730;
        float waterUsed = 24.57f;
        float powUsed = 75.43f;
        int washes = 17;
        void wash();
        float countChange(int coins);
        float downTime(float timeOff);
    };

    void washClothes();
    void dryClothes();
    float makeChange(float price, float amPaid);
};

void Laundromat::washClothes()
{

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
    float moneyDeposited = 200.25f;
    float moneyWithdrawn = 100.25f;
    float interestPaid = 03.03f;
    float debtOwed = 2000.05f;
    float Paid = 1500.25f;
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

}

float Bank::produceCashBalance(float balance)
{
    return balance;
}

struct Restaurant
{
    int tblsAvail = 23;
    int workers = 15;
    int platesServed = 42;
    float amFoodPerFaimly = 10.12f;
    float hoursWorked = 39.97f;

    struct Server
    {
        std::string name = "James";
        long phoneNum = 8434305954;
        int amOfPeopleServed = 8;
        float hoursWorked = 17.5f;
        float currPay = 9.45f;
        void serveCustomer();
        void cleanTable();
        float countTip(float tip);
    };

    void serveFood();
    float collectPayment(float payment);
    void provideEatingUtensils();
};

void Restaurant::serveFood()
{

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
    int carInventory = 200;
    int carSold = 50;
    int staff = 23;
    int carServiced = 40;
    int inventoryBought = 15;
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

}

int CarDealership::buyInventory(int inventory)
{
    return inventory;
}

struct Speakers
{
 
    std::string brand = "Vagnavox";
    int modelNum = 2340;
    int size = 12;
    float freqRange = 145.4f;
    float impedence = 50.0f;
    void produceAudio();
    void receiveSignal();
    void vibrateCone();
};

void Speakers::produceAudio()
{

}

void Speakers::receiveSignal()
{
    
}

void Speakers::vibrateCone()
{
    
}

struct Amp
{
    std::string brand = "Fender";
    int modelNum = 1200;
    float power = 200.f;
    float impedence = 200.f;
    int outputs = 4;
    void projectAudio();
    void powerSpeakers();
    void protectSystemFailure();
};

void Amp::projectAudio()
{
    
}

void Amp::powerSpeakers()
{
    
}

void Amp::protectSystemFailure()
{
    
}

struct Receiver
{
    std::string brand = "Pioneer";
    int modelNum = 2600;
    int function = 6;
    int inputs = 5;
    int outputs = 4;
    void playCds();
    void playRecords();
    void playRadio();
};

void Receiver::playCds()
{
    
}

void Receiver::playRecords()
{
    
}

void Receiver::playRadio()
{
    
}

struct Remote
{
    std::string brand = "Pioneer";
    int modelNum = 1600;
    float range = 135.4f;
    int selector = 5;
    int batteries = 2;
    void selectInputs();
    int adjustVolume(int volUp, int volDwn, int currVol);
    void selectMode();
};

void Remote::selectInputs()
{
    
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
    std::string brand = "Mercury";
    int modelNum = 1400;
    float beltSpeed = 25.4f;
    int outputs = 4;
    float needleWeight = 0.0043f;
    void playRecord();
    bool choosePlaybackSpeed(bool thirtThree);
    void antiSkipAdjust();
};

void Turntable::playRecord()
{
    
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
    void playRecord();
    void playRadio();
    void recordAudio();
};
void StereoSystem::playRecord()
{
    
}

void StereoSystem::playRadio()
{
    
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
    
    
    
    std::cout << "good to go!" << std::endl;
}
