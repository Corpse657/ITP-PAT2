#include <iostream>
#include <string>
using namespace std;
// Function to convert text to Morse code
string textToMorse(string text, int index) {
    string morseCode = "";
    string str = string(1, text[index]);
    if (str == "A" || str == "a") morseCode = ".- ";
    else if (str == "B" || str == "b") morseCode = "-... ";
    else if (str == "C" || str == "c") morseCode = "-.-. ";
    else if (str == "D" || str == "d") morseCode = "-.. ";
    else if (str == "E" || str == "e") morseCode = ". ";
    else if (str == "F" || str == "f") morseCode = "..-. ";
    else if (str == "G" || str == "g") morseCode = "--. ";
    else if (str == "H" || str == "h") morseCode = ".... ";
    else if (str == "I" || str == "i") morseCode = ".. ";
    else if (str == "J" || str == "j") morseCode = ".--- ";
    else if (str == "K" || str == "k") morseCode = "-.- ";
    else if (str == "L" || str == "l") morseCode = ".-.. ";
    else if (str == "M" || str == "m") morseCode = "-- ";
    else if (str == "N" || str == "n") morseCode = "-. ";
    else if (str == "O" || str == "o") morseCode = "--- ";
    else if (str == "P" || str == "p") morseCode = ".--. ";
    else if (str == "Q" || str == "q") morseCode = "--.- ";
    else if (str == "R" || str == "r") morseCode = ".-. ";
    else if (str == "S" || str == "s") morseCode = "... ";
    else if (str == "T" || str == "t") morseCode = "- ";
    else if (str == "U" || str == "u") morseCode = "..- ";
    else if (str == "V" || str == "v") morseCode = "...- ";
    else if (str == "W" || str == "w") morseCode = ".-- ";
    else if (str == "X" || str == "x") morseCode = "-..- ";
    else if (str == "Y" || str == "y") morseCode = "-.-- ";
    else if (str == "Z" || str == "z") morseCode = "--.. ";
    else if (str == " ") morseCode = "/ ";
    return morseCode;
}
int main() {
    string text;
    cout << "Enter A message in ENGLISH (A-Z character only): ";
    getline(cin, text);
    string morseCode = "";
    for (int i = 0; i < text.length(); i++) {
        morseCode += textToMorse(text, i);
        cout << text.at(i) <<" " << morseCode << endl;
    }
    cout << "Full morse code: " << morseCode;
    return 0;
}