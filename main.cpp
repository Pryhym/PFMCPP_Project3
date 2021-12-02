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



/*
Thing 1) Laundromat
5 properties:
    1) number of washers(int)
    2) number of dryers(int)
    3) amount of water used daily(float)
    4) amount of energy used drying daily(float)
    5) amount of money made daily(float)
3 things it can do:
    1) wash clothes
    2) dry clothes
    3) make change out of bills
 */
struct Laundromat
{
    //1) number of washers(int)
    int numWashers = 20;
    //2) number of dryers(int)
    int numDyers = 20;
    //3) amount of water used daily(float)
    float amOfWaterUsedDaily = 200.00f; 
    //4) amount of energy used drying daily(float)
    float amOfEnergyUsedDaily = 5000.02f;
    //5) amount of money made daily(float)
    float amOfMoneyMadeDaily = 800.45f;

    struct WashingMach
    {
        std::string brand = "Maytag";
        int modelNum = 730;
        float waterUsed = 24.57f;
        float powUsed = 75.43f;
        int washes = 17;
        void washClothes();
        float countChang(int coins);
        float dwnTime(float timeOff);
    };

    //1) wash clothes
    void washClothes();
    //2) dry clothes
    void dryClothes();
    //3) make change out of bills
    float makeChange(float price, float amPaid);
};
/*
Thing 2) bank
5 properties:
    1) amount of money deposited into it(float)
    2) amount of money withdrawn from it(float)
    3) amount of interest paid(float)
    4) amount of debt owed(float)
    5) amount of principal paid(float)
3 things it can do:
    1) hold money
    2) process transactions
    3) produce a cash balance
 */
struct Bank
{
    //1) amount of money deposited into it(float)

    float moneyDeposited = 200.25f;
    //2) amount of money withdrawn from it(float)
    float moneyWithdrawn = 100.25f;
    //3) amount of interest paid(float)
    float interestPaid = 03.03f;
    //4) amount of debt owed(float)
    float debtOwed = 2000.05f;
    //5) amount of principal paid(float)
    float Paid = 1500.25f;
    //1) hold money
    float holdMoney(float amount);
    //2) process transactions
    void transaction();
    //3) produce a cash balance
    float cashBalance(float balance);
};
/*
Thing 3) resturant  
5 properties:
    1) number tables available(int)
    2) number of workers(int)
    3) number of plates served(int)
    4) amount of food per family(float)
    5) number of hours worked per employee(float)
3 things it can do:
    1) serve food
    2) collect payment
    3) provide eating utensils
 */
struct Resturant
{
    //1) number tables available(int)
    int tblsAvail = 23;
    //2) number of workers(int)
    int workers = 15;
    //3) number of plates served(int)
    int platesServed = 42;
    //4) amount of food per family(float)
    float amFoodPerFaimly = 10.12f;
    //5) number of hours worked per employee(float)
    float hoursWorked = 39.97f;

    struct Server
    {
        std::string name = "James";
        long phoneNum = 8434305954;
        int amOfPeopleServed = 8;
        float hoursWorked = 17.5f;
        float currPay = 9.45f;
        void serveCust();
        void cleanTable();
        float countTip(float tip);
    };

    //1) serve food
    void serveFood();
    //2) collect payment
    float collectPayement(float payment);
    //3) provide eating utensils
    void utensils();
};
/*
Thing 4) car dealership
5 properties:
    1) number of cars in inventory(int)
    2) amount of cars sold in a month(int)
    3) amount sales people on staff(int)
    4) number of cars serviced each week(int)
    5) amount of inventory bought this month(int)
3 things it can do:
    1) sell cars
    2) hire salesmen
    3) buy inventory
 */
struct CarDealership
{
    //1) number of cars in inventory(int)
    int carInventory = 200;
    //2) amount of cars sold in a month(int)
    int carSold = 50;
    //3) amount sales people on staff(int)
    int staff = 23;
    //4) number of cars serviced each week(int)
    int carServiced = 40;
    //5) amount of inventory bought this month(int)
    int invBought = 15;
    //1) sell cars
    float CarSold(float price);
    //2) hire salesmen
    void salesmen();
    //3) buy inventory
    int inventor(int invBought);
};
/*
Thing 5) speakers
5 properties:
    1) brand (std::string)
    2) model number (int)
    3) size (int)
    4) frequency range (float)
    5) impedence (float)
3 things it can do:
    1) produce audio
    2) receive signal
    3) vibrate
 */
struct Speakers
{
    //1) brand (std::string)

    std::string brand = "Vagnavox";
    //2) model number (int)
    int modelNum = 2340;
    //3) size (int)
    int size = 12;
    //4) frequency range (float)
    float freqRange = 145.4f;
    //5) impedence (float)
    float impedence = 50.0f;
    //1) produce audio
    void audio();
    //2) receive signal
    void receiveSignal();
    //3) vibrate
    void vibrate();
};
/*
Thing 6) amp
5 properties:
    1) brand (std::string)
    2) model number (int)
    3) power (float)
    4) impedence (float)
    5) outputs (int)
3 things it can do:
    1) project audio signal
    2) power speakers
    3) protect system from failure
 */
struct Amp
{
    //1) brand (std::string)
    std::string brand = "Fender";
    //2) model number (int)
    int modelNum = 1200;
    //3) power (float)
    float power = 200.f;
    //4) impedence (float)
    float impedence = 200.f;
    //5) outputs (int)
    int outputs = 4;
    //1) project audio signal
    void amplify();
    //2) power speakers
    void speakers();
    //3) protect system from failure
    void surgeProtect();
};
/*
Thing 7) receiver
5 properties:
    1) brand (std::string)
    2) model number (int)
    3) functions (int)
    4) inputs (int)
    5) outputs (int)
3 things it can do:
    1) play cds
    2) play records
    3) play radio
 */
struct Receiver
{
    //1) brand (std::string)
    std::string brand = "Pioneer";
    //2) model number (int)
    int modelNum = 2600;
    //3) functions (int)
    int function = 6;
    //4) inputs (int)
    int inputs = 5;
    //5) outputs (int)
    int outputs = 4;
    //1) play cds
    void playCds();
    //2) play records
    void playRecords();
    //3) play radio
    void playRadio();
};
/*
Thing 8) remote
5 properties:
    1) brand (std::string)
    2) model number (int)
    3) range (float)
    4) function selector (int)
    5) batteries needed (int)
3 things it can do:
    1) select inputs
    2) adjust volume
    3) select mode
 */
struct Remote
{
    //1) brand (std::string)
    std::string brand = "Pioneer";
    //2) model number (int)
    int modelNum = 1600;
    //3) range (float)
    float range = 135.4f;
    //4) function selector (int)
    int selector = 5;
    //5) batteries needed (int)
    int batteries = 2;
    //1) select inputs
    void inputs();
    //2) adjust volume
    int adjustVol(int volUp, int volDwn, int currVol);
    //3) select mode
    void mode();
};
/*
Thing 9) turntable
5 properties:
    1) brand (std::string)
    2) model number (int)
    3) belt speed (float)
    4) outputs (int)
    5) needle weight (float)
3 things it can do:
    1) plays records
    2) plays at 33 or 45 rpms
    3) adjusts for anti-skip
 */
struct Turntable
{
    //1) brand (std::string)
    std::string brand = "Mercury";
    //2) model number (int)
    int modelNum = 1400;
    //3) belt speed (float)
    float beltSpeed = 25.4f;
    //4) outputs (int)
    int outputs = 4;
    //5) needle weight (float)
    float needleWeight = 0.0043f;
    //1) plays records
    void playRecord();
    //2) plays at 33 or 45 rpms
    bool rpms(bool thirtThree);
    //3) adjusts for anti-skip
    void skipAdjust();
};
/*
Thing 10) stereo system
5 properties:
    1) speakers
    2) amp
    3) receiver
    4) remote
    5) tuntable
3 things it can do:
    1) play records
    2) play radio
    3) record audio
 */
struct StereoSystem
{
    //1) speakers
    Speakers speaker;
    //2) amp
    Amp amp;
    //3) receiver
    Receiver receiver;
    //4) remote
    Remote remote;
    //5) tuntable
    Turntable turntable;
    //1) play records
    Receiver playRecord();
    //2) play radio
    Receiver playRadio();
    //3) record audio
    Receiver recordAudio();
};

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
