#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:     cat
//  action 1: the cat purrs
cat.purr();
//  action 2: the cat runs
cat.run();
//  action 3: the cat sleeps
cat.sleep();
//  2)
//  Noun:     dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog growls
dog.growl();
//  action 3: the dog bites
dog.bite();
//  3)
//  Noun:     car
//  action 1: the car goes
car.go();
//  action 2: the car stops
car.stop();
//  action 3: the car leaks fluid
car.leakFluid();
//  4)
//  Noun:     leg
//  action 1: the leg kicks
leg.kick();
//  action 2: the leg flexs
leg.flex();
//  action 3: the leg bends
leg.bend();
//  5)
//  Noun:     mouth
//  action 1: the mouth speaks
mouth.speak();
//  action 2: the mouth tastes
mouth.taste();
//  action 3: the mouth blows
mouth.blow();
//  6)
//  Noun:     finger
//  action 1: the finger points
finger.point();
//  action 2: the finger scratches
finger.scratch();
//  action 3: the finger rubs
finger.rub();
//  7)
//  Noun:     wife
//  action 1: the wife cooks
wife.cook();
//  action 2: the wife cleans
wife.clean();
//  action 3: the wife sleeps
wife.sleep();
//  8)
//  Noun:     basketballPlayer
//  action 1: the basketballPlayer shoots the ball
basketballPlayer.shootBall();
//  action 2: the basketballPlayer blocks
basketballPlayer.block();
//  action 3: the basketballPlayer passes the ball
basketballPlayer.passBall();
//  9)
//  Noun:     hammer
//  action 1: the hammer nails
hammer.nail();
//  action 2: the hammer pulls out the nail
hammer.pullOutNail();
//  action 3: the hammer destroys
hammer.destroy();
//  10)
//  Noun:     fire
//  action 1: the fire burns
fire.burn();
//  action 2: the fire heats
fire.heat();
//  action 3: the fire spreads
fire.spread();


#endif

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
    std::cout << "good to go" << std::endl;
    return 0;
}
