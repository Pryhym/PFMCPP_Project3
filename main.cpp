/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
*/

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
