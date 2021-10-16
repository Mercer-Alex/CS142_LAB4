#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

bool InputMatchString(string userInput, string correctOption);

string DinnerOption();

string RelaxOption();

int RoommateRand (int countDown);

const int HIGHEST_ROOMMATE_CAN_COUNT = 7;

int main() {
    string relaxDinner;
    string playAgain;

    srand(time(0));

    cout << "Hi there, do you want to play this game? ('yes'/'no')" << endl;
    getline(cin, playAgain);

    while (playAgain.find("yes") != string::npos) {

        cout << "You arrive home after a long day at work, and it's finally the weekend.\nDo you begin to 'relax' or start "
                   "to make 'dinner'? (hint: type responses without the single quotes)" << endl;
        getline(cin, relaxDinner);

        while ((relaxDinner.find("relax") == string::npos) && (relaxDinner.find("dinner") == string::npos)) {
            cout << "Hmm, that doesn't match the option to 'relax' or the option to make 'dinner'. You'll have to "
                       "say which you want do again." << endl;
            getline(cin, relaxDinner);
        }

        if (InputMatchString(relaxDinner, "dinner")) {
            playAgain = DinnerOption();
        }
        else if (InputMatchString(relaxDinner, "relax")) {
            playAgain = RelaxOption();
        }
    }

    cout << "Bummer, have a nice day!";

    return 0;
}

bool InputMatchString(string userInput, string correctOption) {
    return userInput.find(correctOption) != string::npos;
}

string DinnerOption() {
    string pancakeWaffle;
    string unclePolice;
    string playAgain;

    cout << "You've been meaning to make breakfast for dinner for a while.\nYou head over to the kitchen right "
            "when your roommate BURSTS in, but they see that you're busy in the kitchen and leave. Weird.\n"
            "Will it be 'pancakes', or 'waffles'?" << endl;
    getline(cin, pancakeWaffle);

    if (InputMatchString(pancakeWaffle, "waffles")) {
        cout << "You put frozen waffles in the toaster, it isn't the dinner of champions, but it's one of the easiest. "
                "You enjoy your evening. Until you get a call saying your roommate was arrested...\n"
                "The end" << endl << endl;

        cout << "Do you want to find out why the roommate was arrested? If so, write 'yes'. If not, write 'no'." << endl;
        getline(cin, playAgain);

        return playAgain;
    }
    else if (InputMatchString(pancakeWaffle, "pancakes")) {
        cout << "Huh, all the pancake mix is gone, better head to the store then. You walk out to the parking lot to "
                "your car...\nYOUR CAR IS GONE!\nQuick, do you call your 'uncle', who specializes in car-related things, or"
                " do you call the 'police'?" << endl;
        getline(cin, unclePolice);

        if (InputMatchString(unclePolice, "police")) {
            cout << "The police officer takes your statement, and says they'll let you know what they find out. They "
                    "have to rush off in a hurry. There's a fire somewhere else in town caused by some fireworks."
                    "\nThe end." << endl << endl;

            cout << "Would you like to play again? ('yes'/'no')" << endl;
            getline(cin, playAgain);

            return playAgain;
        }
        else if (InputMatchString(unclePolice, "uncle")) {
            cout << "Your uncle, who specializes in cars, says that one of his buddies traded some illegal fireworks "
                    "to a kid for a car that was the same make, model, and year as yours. He says that that's all the "
                    "info he has, and his buddy isn't willing to give the car back. Sorry kid.\nThe end." << endl << endl;

            cout << "Would you like to play again? ('yes'/'no')" << endl;
            getline(cin, playAgain);

            return playAgain;
        }
        else {
            cout << "Cool, I take it you don't want to call the 'police' or your 'uncle', so I wrote the end of those "
                    "storylines for nothing. Thanks." << endl << endl;

            cout << "Do you want to start over? ('yes'/'no')" << endl;
            getline(cin, playAgain);

            return playAgain;
        }
    }
    else {
        cout << "Listen you really wanted 'pancakes' or 'waffles'. There is literally nothing else you wanted to eat."
            << endl << endl;

        cout << "Would you like to start over? ('yes'/'no')" << endl;
        getline(cin, playAgain);

        return playAgain;
    }
}

string RelaxOption(){

    string helpTv;
    string bigText;

    string aptWork;
    string yesNo;
    string pointTake;

    string playAgain;

    cout << "You turn on the TV to watch your favorite show, but your roommate BURSTS into the room! They need help."
            "\nDo you 'help' them, or keep watching 'TV'?" << endl;
    getline(cin, helpTv);

    if (InputMatchString(helpTv, "help")) {
        cout << "You ask them what's up. Your roommate explains that they need your advice on asking someone out. "
                "\nWill you tell your roommate to go 'big' or go home, or to just send their crush a 'text'?" << endl;
        getline(cin, bigText);

        if (InputMatchString(bigText,"big")) {
            cout << "You tell your roommate to go big or go home! Your roommate gets excited and shows you all the "
                    "fireworks they wanted to use to ask their crush out. This seems like a great idea!\n" << endl;

            cout << "You just need to decide where to launch them.\nDo you suggest setting them off outside of the "
                    "crush's 'work' or outside their 'apartment'?" << endl;
            getline(cin, aptWork);

            if (InputMatchString(aptWork, "apartment")) {
                cout << "The grass seems a bit dry, but that shouldn't be a problem, right?"
                        "\nReady to set them off (yes/no)?" << endl;
                getline(cin, yesNo);

                cout << "It doesn't matter if you're ready, your roommate starts the countdown!" << endl;

                for (int i = RoommateRand(HIGHEST_ROOMMATE_CAN_COUNT); i >= 0; --i) {
                    cout << i << endl;
                    this_thread::sleep_for(500ms);
                }

                cout << "You watch in horror as the grass quickly catches fire! The flames spread to the apartment "
                        "building. Your roommate rushes in to pull their crush out. You call the fire department, they "
                        "come and douse the flames. The cops also show up. They ask who set off the illegal fireworks. "
                        "You look at your roommate who is comforting their crush.\nYou can either 'point' an accusatory "
                        "finger at your roommate, or 'take' the blame..." << endl;
                getline(cin, pointTake);

                if (InputMatchString(pointTake,"point")) {
                    cout << "The police arrest your roommate, who admitted to trading your car for the illegal "
                            "fireworks, and to setting them off in dry grass. You're upset about your car, and will "
                            "miss your roommate while they're in prison.\n"
                            "The end." << endl << endl;

                    cout << "Would you like to play again? ('yes'/'no')" << endl;
                    getline(cin, playAgain);

                    return playAgain;
                }
                if (InputMatchString(pointTake, "take")) {
                    cout << "The cops arrest you. Your roommate comforts their crush while you're escorted away.\nIn "
                            "prison you receive a wedding announcement from you roommate. There's a note that says their"
                            " crush fell madly in love with them after they were saved from the fire.\nOh, there's more "
                            "at the bottom, P.S: your car was stolen.\n"
                            "The end." << endl << endl;

                    cout << "Would you like to play again? ('yes'/'no')" << endl;
                    getline(cin, playAgain);

                    return playAgain;
                }
            }
            else if (InputMatchString(aptWork, "work")) {
                cout << "You set up the fireworks in the parking lot of the crush's work.\nReady to set them off "
                        "(yes/no)?" << endl;
                getline(cin, yesNo);

                cout << "It doesn't matter if you're ready, your roommate starts the countdown!" << endl;

                for (int i = RoommateRand(HIGHEST_ROOMMATE_CAN_COUNT); i >= 0; --i) {
                    cout << i << endl;
                    this_thread::sleep_for(500ms);
                }

                cout << "It was beautiful. One of their coworkers comes out after the show, they tell you the crush "
                        "isn't interested in your roommate. Your roommate cries and tells you they're sorry for trading "
                        "your car just for this to fail. You're furious.\n"
                        "The end." << endl << endl;

                cout << "Would you like to play again? ('yes'/'no')" << endl;
                getline(cin, playAgain);

                return playAgain;
            }
            else {
                cout << "Where else could you think to set them off that the crush would see them? Are you stalking the "
                        "crush, do you know all the places they go? No? Good. Well you put in an incorrect input, so "
                        "start over if you want." << endl << endl;

                cout << "Start over? ('yes'/'no)" << endl;
                getline(cin, playAgain);

                return playAgain;
            }
        }
        else if (InputMatchString(bigText, "text")) {
            cout << "You tell them a text would be fine. They sigh, and say that they already got a lot of fireworks to "
                    "ask their crush out. Your roommate decides to set them off outside to at least enjoy the show."
                    "\nReady to set them off (yes/no)?" << endl;
            getline(cin, yesNo);

            cout << "Your roommate doesn't wait for your answer. They start counting down:" << endl;

            for (int i = RoommateRand(HIGHEST_ROOMMATE_CAN_COUNT); i >= 0; --i) {
                cout << i << endl;
                this_thread::sleep_for(500ms);
            }

            cout << "While the fireworks explode your roommate admits that they traded your car for the fireworks. "
                    "You're furious.\n"
                    "The end." << endl << endl;

            cout << "Would you like to play again? ('yes'/'no')" << endl;
            getline(cin, playAgain);

            return playAgain;
        }
        else {
            cout << "Honestly, you should try the 'big' path, it's pretty cool. But instead you chose no path, so you'll"
                    " have to start over or something." << endl << endl;

            cout << "Would you like to start over? ('yes'/'no')" << endl;
            getline(cin, playAgain);

            return playAgain;
        }
    }
    else if (InputMatchString(helpTv, "TV")) {
        cout << "You look at your roommate while in your blanket burrito, and tell them you're busy. Your roommate "
                "leaves, visibly upset, but you're finally free to watch your show. You drift off to sleep, never "
                "knowing what your roommate needed.\n"
                "The end." << endl << endl;

        cout << "Would you like to play again? ('yes'/'no')" << endl;
        getline(cin, playAgain);

        return playAgain;
    }
    else {
        cout << "Your roommate needs a definitive word, like 'help' if you wanna help them, or 'TV' if you wanna watch"
                " TV instead. Honestly, it should be pretty easy to type either one of those words. Feel free to start "
                "over."
             << endl << endl;

        cout << "Would you like to start over? ('yes'/'no')" << endl;
        getline(cin, playAgain);

        return playAgain;
    }
    cout << "Would you like to play again? ('yes'/'no')" << endl;
    getline(cin, playAgain);

    return playAgain;
}

int RoommateRand (int countDown) {
    return (rand() % countDown) + 3;
}
