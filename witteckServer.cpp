/*
 * --Name:				Derek Witteck
 * --Assignment:		Lab 3 - Spell Checker
 * --Version:			1
 * --Date:				March 8th, 2017
 * --Due Date:			April 3rd, 2017
 * --Section:			3207-002
 * --Instructor:		Professor Kwatny
 * --Lab Instructor:	Graeme Copeland
 * --Description:		This program is a spell check server that will read equences of words. If the word is in the
 *                      dictionary, it is considered to be spelled properly. If not, it is considered to be misspelled.
 *                      The dictionary is a long word list stored in plain text form. The program will take in two arguments:
 *                      1 - a dictionary file name
 *                      2 - a port number on which to listen for a incoming connections.
 *                      When the server starts the main thread will open the dictionary file and reads it into some data
 *                      structure accessible by all of the threads in the program. Also, an additional structure will be
 *                      used to store the socket descriptors of the clients that it will connect with.
 * --Functions:			main(),
 */

#include "witteckServer.h"

using namespace std;

//#define WORD_COUNT 84822


int main() {
    ifstream readDictionary;        //File stream to open the dictionary file
    vector<string> dictionary;      //Vector to hold the words from the dictioanry
    string line;                    //Will hold the words being read from the dictionary
    //const string dictionary[WORD_COUNT];

    readDictionary.open("dictionary");

    if(!readDictionary){
        cout << "Error opening the file." << endl;
    }

    while(getline(readDictionary, line)){
        dictionary.push_back(line);
    }

    for(unsigned int i = 0; i < dictionary.size(); i++){
        cout << dictionary[i] << endl;
    }

    return 0;
}