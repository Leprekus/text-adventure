#include <iostream>
using namespace std;

class HandlePrompt {
    public:
    int nextPrompt() {
        return 0;
    };
};
int prompt() {
    int choice = 0;
    cout << "Choose an option by typing a number: \n"
            "1) option one \n"
            "2) option two \n"
            "3) option three\n"
        << endl;
    cin >> choice;

    return choice;
}
int main () {
    //text adventure project
    HandlePrompt myPromptHandler;
    cout << "fragment of story \n";
    int choice = prompt();
    if(choice) {
        myPromptHandler.nextPrompt(choice);
    } else {
        cout << choice;
        cout << "please make sure your input is a a number\n"
                "between 1 & 3"
            << endl; 
        cout << "input";
    }

    return 0;
}