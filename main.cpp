#include <iostream>
#include <string>
using namespace std;

int main() {
    string relaxDinner;
    bool userStart;

    string pancakeWaffle;
    bool userDinner;

    string unclePolice;
    bool userCar;

    string helpTv;
    bool userHelpTv;

    string bigText;

    string aptWork;
    string yesNo;

    string blame;

    cout << "You arrive home after a long day at work, and it's finally the weekend.\nDo you begin to relax or start to"
            " make dinner?"
         << endl;
    getline(cin, relaxDinner);

    if (relaxDinner.find("relax") != string::npos) {
        userStart = true;
    }
    if (relaxDinner.find("dinner") != string::npos) {
        userStart = false;
    }
     if (userStart == false) {
        cout << "You've been meaning to make breakfast for dinner for a while. \nYou head over to the kitchen right "
                "when your roommate bursts in, but they see that you're busy in the kitchen and leave. Weird. \n"
                "Will it be pancakes, or waffles?" << endl;
         getline(cin, pancakeWaffle);

        if (pancakeWaffle.find("pancakes") != string::npos) {
            userDinner = true;
        }
        if (pancakeWaffle.find("waffles") != string::npos) {
             userDinner = false;
        }
        if (userDinner == false) {
            cout << "You put frozen waffles in the toaster, it isn't the dinner of champions, but it's one of the easiest. "
                       "You enjoy your evening. Until your roommate calls saying they were arrested...\n"
                       "The end";
            return 0;
        }
        else {
            cout << "Huh, all the pancake mix is gone, better head to the store then. You walk out to the parking lot - \n"
                    "YOUR CAR IS GONE! \nQuick, do you call your uncle, who specializes in "
                    "car-related things, or do you call the police?" << endl;
            getline(cin, unclePolice);
        }
        if (unclePolice.find("police") != string::npos) {
            userCar = true;
        }
        if (unclePolice.find("uncle") != string::npos) {
            userCar = false;
        }
        if (userCar == true) {
            cout << "The police officer takes your statement, and says they'll let you know what they find out. "
                    "They have to rush off in a hurry. There's a fire somewhere else in town caused by fireworks. \n"
                    "The end" << endl;
        }
        if (userCar == false) {
            cout << "Your uncle, who specializes in cars, says that one of his buddies traded some illegal fireworks to a "
                       "kid for a car that was the same make, model, and year as yours. He says that's all the info he has, and "
                       "his buddy isn't willing to give the car back. Sorry kid.\n"
                       "The end" << endl;
        }
     }
    if (userStart == true) {
        cout << "You turn on the TV to watch your favorite show, but your roommate BURSTS into the room! They need help."
                   " \ndo you help them, or keep watching TV?" << endl;
        getline(cin, helpTv);

        if (helpTv.find("help") != string::npos) {
            userHelpTv = true;
        }
        if (helpTv.find("keep watching") != string::npos) {
            userHelpTv = false;
        }
        if (userHelpTv == true) {
            cout << "You ask them what's up. Your roommate explains that they need your advice on asking someone out. "
                    "\nWill you tell your roommate to go big or go home or to just send their crush a text?" << endl;
            getline(cin, bigText);

            if (bigText.find("big") != string::npos) {
                cout << "You tell your roommate to go big or go home! Your roommate gets excited and shows you all the "
                        "fireworks they wanted to use to ask their crush out. This seems like a great idea!" << endl;

                cout << "You two feel all set to go and launch the fireworks now, but you still need to decide where. \n"
                        "Do you suggest setting them off outside of the crush's work or their apartment?" << endl;
                getline(cin, aptWork);

                if (aptWork.find("apartment") != string::npos) {
                    cout
                            << "You start setting up the fireworks outside the crush's apartment. Hmm, the grass feels dry, "
                               "but that shouldn't be a problem. \nReady to set them off (yes/no)?" << endl;
                    getline(cin, yesNo);
                    cout << "It doesn't matter if you're ready, your roommate lights the fireworks!\n"
                            "The grass quickly catches fire! THe flames spread to the apartment building. Your roommate "
                            "rushes in to pull their crush out. You call the fire department who come and douse the flames."
                            " The cops also show up. They ask who did set off the illegal fireworks. You look at your "
                            "roommate who is comforting your crush. \n"
                            "You can either point an accusatory finger at your roommate, or take the blame..." << endl;
                    getline(cin, blame);

                    if (blame.find("point") != string::npos) {
                        cout << "The police arrest your roommate, who admitted to trading your car for the illegal "
                                "fireworks, and to setting them off in dry grass. You're upset about your car, and will "
                                "miss your roommate while they're in prison.\n"
                                "The end." << endl;
                    }
                    if (blame.find("take") != string::npos) {
                        cout << "The cops arrest you. Your roommate comforts their crush while you're escorted away. "
                                "In prison you receive a wedding invitation from you roommate and their crush. There's a"
                                " note from your roommate, they say their crush fell madly in love with them after they "
                                "were saved from the fire. Your roommate also says your car was mysteriously stolen...\n"
                                "The end." << endl;
                    }
                }
                if (aptWork.find("work") != string::npos) {
                    cout << "You set the fireworks off in the parking lot of the crush's work. One of their coworkers "
                            "comes out after the show, they tell you the crush isn't interested in your roommate. Your "
                            "roommate cries and tells you they're sorry for trading your car just for this to fail. Your"
                            "furious.\n"
                            "The end" << endl;
                }
            }
            if (bigText.find("text") != string::npos) {
                cout << "You tell them a text would be fine. They sigh, and say that they already got a lot of "
                        "fireworks to ask their crush out. Your roommate decides to set them off outside to at least enjoy "
                        "the show. While the fireworks explode your roommate admits that they traded your car for the "
                        "fireworks. You're furious\n"
                        "The end." << endl;
            }

        }
        if (userHelpTv == false) {
            cout << "You look at your roommate while in your blanket burrito, and tell them you're busy. Your roommate "
                    "leaves, visibly upset, but you're finally free to watch your show. You drift off to sleep, never "
                    "knowing what your roommate needed.\n"
                    "The end.";
        }
    }

    return 0;
}
