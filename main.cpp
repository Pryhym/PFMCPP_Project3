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

    struct Limb
    {
        void stepForward();
        float stepSize(int size);
    };
    struct Person
    {
        int age;
        int height;
        float hairLength;
        float GPA;
        float distanceTraveled;
        unsigned int SATScore;
        Limb leftFoot;
        Limb rightFoot;
        void run(int howFast, bool startWithLeftFoot);
    };
    void Limb::stepForward()
    {

    }

    float Limb::stepSize(int size)
    {
        return size;
    }

    void Person::run(int howFast, bool startWithLeftFoot)
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
        distanceTraveled += leftFoot.stepSize(howFast) + rightFoot.stepSize(howFast);
    }
   
 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */




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
    std::cout << "good to go!" << std::endl;
}
