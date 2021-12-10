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
    
    int numWashers = 5;
    int numDryers = 20; 
    float amOfWaterUsedDaily = 20.5f; 
    float amOfEnergyUsedDaily = 70.21f;
    float amOfMoneyMadeDaily = 500.75f;
    Laundromat();
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

Laundromat::Laundromat()
{
    std::cout << "Laundromat Class" << std::endl;
    std::cout << "constructing the Amount of Water Used is: " << amOfWaterUsedDaily << std::endl;

}
void Laundromat::washClothes()
{
    std::cout << "Washing Clothes" << std::endl;
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
    float moneyDeposited = 2343.65f;
    float moneyWithdrawn = 543.69f;
    float interestPaid = 349.67f;
    float debtOwed = 5430.69f;
    float paid = 1694.24f;
    Bank ();
    float holdMoney(float amount);
    void processTransactions();
    float produceCashBalance(float balance);
};

Bank::Bank()
{
    std::cout << "Bank Class" << std::endl;
    std::cout << "The Amount Of Money You Have Deposited Is: " << moneyDeposited <<std::endl;
}

float Bank::holdMoney(float amount)
{
    return amount;
}

void Bank::processTransactions()
{
    std::cout << "Processing Transaction" << std::endl;
}

float Bank::produceCashBalance(float balance)
{
    return balance;
}

struct Restaurant
{
    int tblsAvail = 9;
    int workers = 8;
    int platesServed = 24;
    float amFoodPerFamily = 79.48f;
    float hoursWorked = 86.77f;
    Restaurant();

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

Restaurant::Restaurant()
{
    std::cout << "Restaurant Class" << std::endl;
    std::cout << "Tables Available: " << tblsAvail << std::endl;
}

void Restaurant::serveFood()
{
    std::cout << "Serving Food" << std::endl;
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
    int carInventory = 40;
    int carSold = 86;
    int staff = 15;
    int carServiced = 24;
    int inventoryBought = 64;
    CarDealership();
    float sellCars(float price);
    void hireSalesmen();
    int buyInventory(int inventory);
};

CarDealership::CarDealership()
{
    std::cout << "CarDealership Class" << std::endl;
    std::cout << "The Car Inventory is: " << carInventory << std::endl;
}

float CarDealership::sellCars(float price)
{
    return price;
}

void CarDealership::hireSalesmen()
{
    std::cout << "Hiring Salesmen" << std::endl;
}

int CarDealership::buyInventory(int inventory)
{
    return inventory;
}

struct Speakers
{
 
    std::string brand = "Vagnavox";
    int modelNum = 214345;
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
    std::cout << "Receiving Signals into Speakers" << std::endl;
}

void Speakers::vibrateCone()
{
    
}

struct Amp
{
    std::string brand = "Fender";
    int modelNum = 18493;
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
    std::cout << "Powering Speakers" << std::endl;
}

void Amp::protectSystemFailure()
{
    
}

struct Receiver
{
    std::string brand = "Pioneer";
    int modelNum = 869585;
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
    std::cout << "Playing Records from Receiver" << std::endl;
}

void Receiver::playRadio()
{
    
}

struct Remote
{
    std::string brand = "Pioneer";
    int modelNum = 986454;
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
    std::cout << "Remote in Use" << std::endl;
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
    int modelNum = 7393734;
    float beltSpeed = 67.67f;
    int outputs = 2;
    float needleWeight = 0.49673f;
    Turntable();
    void playRecord();
    bool choosePlaybackSpeed(bool thirtThree);
    void antiSkipAdjust();
};

Turntable::Turntable()
{
    std::cout << "Turntable Class" << std::endl;
    std::cout << "The Turntable Brand Is: " << brand << std::endl;
}

void Turntable::playRecord()
{
    std::cout << "Playing Record from Turntable" << std::endl;
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
