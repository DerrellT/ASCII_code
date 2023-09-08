#include <iostream>
#include "Header.h"
#include <string>
#include<string.h>


using namespace std;
	

int main()
{head();

char letter;
    cout << "    Enter a letter to recieve its ASCII: " << endl;
    cout << "   (NOTE: Uppercase and Lowercase have different numbers)" << endl;
    cin >> letter;  
  
    switch (letter) {

    case 'A':
        cout << " 65";
        break;
    case 'B':
        cout << " 66";
        break;
    case 'C':
        cout << " 67";
        break;
    case 'D':
        cout << " 68";
        break;
    case 'E':
        cout << " 69";
        break;
    case 'F':
        cout << " 70";
        break;      
    case 'G':
        cout << " 71";
        break;
    case 'H':
        cout << " 72";
        break;
    case 'I':
        cout << " 73";
        break;
    case 'J':
        cout << " 74";
        break;
    case 'K':
        cout << " 75";
        break;
    case 'L':
        cout << " 76";
        break;
    case 'M':
        cout << " 77";
        break;
    case 'N':
        cout << " 78";
        break;
    case 'O':
        cout << " 79";
        break;
    case 'P':
        cout << " 80";
        break;
    case 'Q':
        cout << " 81";
        break;
    case 'R':
        cout << " 82";
        break;
    case 'S':
        cout << " 83";
        break;
    case 'T':
        cout << " 84";
        break;
    case 'U':
        cout << " 85";
        break;
    case 'V':
        cout << " 86";
        break;
    case 'W':
        cout << " 87";
        break;
    case 'X':
        cout << " 88";
        break;
    case 'Y':
        cout << " 89";
        break;
    case 'Z':
        cout << " 90";
        break;
    case 'a':
        cout << "97";
        break;
    case 'b':
        cout << " 98";
        break;
    case 'c':
        cout << " 99";
        break;
    case 'd':
        cout << " 100";
        break;
    case 'e':
        cout << " 101";
        break;
    case 'f':
        cout << " 102";
        break;
    case 'g':
        cout << " 103";
        break;
    case 'h':
        cout << " 104";
        break;
    case 'i':
        cout << " 105";
        break;
    case 'j':
        cout << " 106";
        break;
    case 'k':
        cout << " 107";
        break;
    case 'l':
        cout << " 108";
        break;
    case 'm':
        cout << " 109";
        break;
    case 'n':
        cout << " 110";
        break;
    case 'o':
        cout << " 111";
        break;
    case 'p':
        cout << " 112";
        break;
    case 'q':
        cout << " 113";
        break;
    case 'r':
        cout << " 114";
        break;
    case 's':
        cout << " 115";
        break;
    case 't':
        cout << " 116";
        break;
    case 'u':
        cout << " 117";
        break;
    case 'v':
        cout << " 118";
        break;
    case 'w':
        cout << " 119";
        break;
    case 'x':
        cout << " 120";
        break;
    case 'y':
        cout << " 121";
        break;
    case 'z':
        cout << " 122";
        break;
    }
    if (!isalpha(letter)) {
        cout << "Invalid letter" << endl;
    }
    return letter;
}
	
	
	
