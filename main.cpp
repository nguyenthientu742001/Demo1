#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string reading_file(string filename) {

    ifstream instance;
    instance.open(filename);

    string line;
    string para;
    while (getline(instance, line)) {

        para = para + ' ' + line;;

    }

    instance.close();

    return para;
}

void choose_game(int userChoice, string easyWord, string mediumWord,string hardWord) {

    switch (userChoice) {
        case 1:
            cout << easyWord;
        case 2:
            cout << mediumWord;
        case 3:
            cout << hardWord;

    }
}

int main() {
    string userName;
    int userChoice;
    string easyWord;
    string mediumWord;
    string hardWord;

    cout << "Welcome to Wordle" << endl;
    cout << "Please enter user name:";
    getline(cin, userName);


    cout << "1. Easy \n2. Medium \n3. Hard\n";
    cout << "Please enter the level:";
    cin >> userChoice;

    easyWord = reading_file(R"(C:\Users\NGUYEN THIEN TU\Desktop\Game\WordGame\easy.txt)");
    mediumWord = reading_file(R"(C:\Users\NGUYEN THIEN TU\Desktop\Game\WordGame\medium.txt)");
    hardWord =  reading_file(R"(C:\Users\NGUYEN THIEN TU\Desktop\Game\WordGame\hard.txt)");


    choose_game(userChoice, easyWord, mediumWord,hardWord);



    return 0;
}
