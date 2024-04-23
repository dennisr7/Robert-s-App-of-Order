#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>
using namespace std;
int userNumber = 0; // Incremented to show current number of users.
bool isLoggedin = 0; // Is the User logged into their account?
bool meetingHasBegun = 0; // Has the meeting begun?
class User { // Class For User
private:
    char password[30];
    // Password private for privacy reasons, obviously bad to store passwords in cleartext, Proof of Concept.

public:
    char currentProposedMotion[750]; // Proposed Motion
    bool eventIsHappening = false; // States if an event(vote or end meeting) is happening.
    bool verifyPassword(char userPasswordInput[30]){
        // Verifies password, allowing us to make it a private property.
        if(userPasswordInput == password){
            return true;
        }else{
            return false;
        }
    }
    char name[30];
    User(){
        cout << "Please enter a username.";
        cin >> name;
        cout << "Please enter a password.";
        cin >> password;

        // Simple Username and Password Creation Process.
    }
    char userOffering[30];
    // Username of Person who is doing something(proposing a vote, for example.)
    char actionBeingTaken;
    // Action that is being taken in group(idea is being proposed, idea will go to vote, etc.)
};
vector<User> userVector; // Vector to access User Objects, will help for logins and votes.
void classDeclaration(){
    switch(userNumber){
        case 0: {
            User user0;
            userNumber++;
            userVector.push_back(user0);
            break;
        }
        case 1: {
            User user1;
            userNumber++;
            userVector.push_back(user1);
            break;
        }
        case 2: {
            User user2;
            userNumber++;
            userVector.push_back(user2);
            break;
        }
        case 3: {
            User user3;
            userNumber++;
            userVector.push_back(user3);
            break;
        }
        case 4: {
            User user4;
            userNumber++;
            userVector.push_back(user4);
            break;
        }
        case 5: {
            User user5;
            userNumber++;
            userVector.push_back(user5);
            break;
        }
        default: {
            cout << "Error. Too many users. Please log into a preexisting account.";
        }

        }
    }


void meetingCreationProcess(){
    cout << "Please set up the admin account.";
    User admin();
    meetingHasBegun = 1;
}
void logIn(){
    userNumber = userVector.size(); // Automatically initializes Countdown at number of users.
    char loginChar;
    cout << "Please enter 'login' to login, or enter 'create' to create an account.";
    cin >> loginChar;
    tolower(loginChar);
    if(loginChar == 'login'){
        char attemptedUserName[30];
        // Username Attempt
        char attemptedPassword[30];
        // Password Attempt
        bool userNameFound = false; // True if a valid username has been found.
        cout << "Please enter a username.";
        cin >> attemptedUserName;
        cout << "Please enter a password";
        cin >> attemptedPassword;
        for(int userNameCounter = userNumber; (userNameFound == true) || userNumber > 0; userNumber--) {
            if((userVector.at(userNameCounter)).name == attemptedUserName){
                // Increments through all the objects in UserVector through the loop, seeing if their name property matches the
                // inputted username
                userNameFound == true;
                bool correctPassword = false; // Was the correct password inputted?
                int numberOfAttempts = 0; // Tracks number of password attempts.
                if(numberOfAttempts; !correctPassword && numberOfAttempts < 3; numberOfAttempts++){
                    if(userVector.at(userNameCounter).verifyPassword(attemptedPassword)) {
                        // Uses verifyPassword method in User Class, if returns true.
                        User* currentUser = &userVector.at(userNameCounter); // VERY IMPORTANT PART OF PROGRAM
                        // Pointer that saves the 'spot' in the vector where the current User's class is. This will be used whenever the user
                        // seeks to use a method in User(voting, introducing motions, etc.)
                        correctPassword = true; // Correct Password has been found.
                        isLoggedin = true; // User has logged into account.
                    }else{
                        cout << "Maximum number of attempts exceeded.";
                        userNameFound == false;
                        userNumber = 0; // Sets to 0 to stop
                    }
                }       // POTENTIAL GLITCH:

            }

            // Goes through all usernames for a valid one, if it doesn't find one, it returns an error.

            // Checks password, if incorrect, it returns an error.
        }
        cout << "Please enter a username.";
    }else if(loginChar == 'create'){
        classDeclaration;
    }else{
        cout << "Invalid input.";
        logIn();
    }
} // Login process at start of program.
class Meeting{
public:
    char currentMotion[750];
    int numberOfSupporters = 0;
    float percentOfSupporters;
    void majorityVote(){
        for(int userCounter = userVector.size(); userCounter > 0; userCounter--){
            // Changes property in each user, shows the current offered motion.
            userVector.
        }
    }
    void passMotion(){
        ofstream MotionsToImplement; // Creating MotionsToImplement File
        MotionsToImplement.open ("motionstoimplement.txt"); // Opening MotionsToImplement
        MotionsToImplement << currentMotion; // Adding MotionsToImplement
        MotionsToImplement.close(); // Closing MotionsToImplement File
    }
};
int main() {

    return 0;
}


// There are 2 main things, the userVector Vector, which stores all Users, and will be key to votes and login, as well as
// the currentUser pointer, which points to the User Object that needs to be invoked. As a result, we will be able to easily
// and programmatically input this into the Meeting Class's methods. There will also be a "State of Affairs" that will be
// printed upon login.(this will also help me demonstrate it, as I will need to consistantly log in and out of accounts.)
// Whenever each user logs in, they will have the option to vote on 'open votes'.
// Once again, there will be a template, with programmatically defined variables.
//
// LOGIN SCREEN:
/*
 * Hello! There are issues to vote on. Specifically, (username) would like (action), and
 * [is voting]. Please type [yes or no] to [support the motion or reject the motion]. Otherwise, type [logout] to log out.
 *
 * There is nothing happening right now. Would you like to introduce a motion? <if not, auto-log out>
 * Otherwise, type [logout] to log out.
 *
 *
 * Would you like to propose a motion, or propose to end the meeting?
 *
 */