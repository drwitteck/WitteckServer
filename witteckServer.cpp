/*
 * --Name:				Derek Witteck
 * --Assignment:		Lab 3 - Spell Checker
 * --Version:			1
 * --Date:				March 8th, 2017
 * --Due Date:			April 3rd, 2017
 * --Section:			3207-002
 * --Instructor:		Professor Kwatny
 * --Lab Instructor:	Graeme Copeland
 * --Description:		This program is a spell check server that will read sequences of words. If the word is in the
 *                      dictionary, it is considered to be spelled properly. If not, it is considered to be misspelled.
 *                      The dictionary is a long word list stored in plain text form. The program will take in two arguments:
 *                      1 - a dictionary file name (if a file is not entered, the default will be used).
 *                      2 - a port number on which to listen for a incoming connections (if a port is not entered, the
 *                          default will be used).
 *                      When the server starts the main thread will open the dictionary file and read it into a data
 *                      structure accessible by all of the worker threads in the program. Also, an additional structure
 *                      will be used to store the socket descriptors of the clients that it will connect with.
 * --Functions:			main(),
 */



#include "witteckServer.h"

const string defaultDictionary = "defaultDictionary";
const int defaultPort = 1095;
const int numWorkerThreads = 6;

/*void readDictionary{

};*/

void *getSocket(){

}

int main(int argc, char *argv[]) {

    /*User entered variables*/
    int userEnteredPort = argc;                //Holds the user entered port argument
    string userEnteredDictionary = argv[0];    //Holds the user entered dictionary argument

    /*Thread variables*/
    pthread_t worker1, worker2, worker3, worker4, worker5, worker6;


    /*Socket variables*/
    int connectedSocket;
    int listeningSocket;
    struct sockaddr_in server;
    socklen_t socketLength = 5;

    connectedSocket = socket(AF_INET, SOCK_STREAM, 0);

    /*while(true){
        //connectedSocket = accept(listeningSocket,); //accept takes int sockfd, struct sockaddr *addr, socklen_t *addrlen
        //add connectedSocket to the work queue
        //signal any sleeping workers that there is a new socket in the queue

        break;
    }*/

    /*if (userPort == 1025){
        //use port 1025
    } else{
        //use default port
    }*/

    pthread_create(&worker1,NULL,getSocket,NULL);
    pthread_create(&worker2,NULL,getSocket,NULL);
    pthread_create(&worker3,NULL,getSocket,NULL);
    pthread_create(&worker4,NULL,getSocket,NULL);
    pthread_create(&worker5,NULL,getSocket,NULL);
    pthread_create(&worker6,NULL,getSocket,NULL);


    if(userEnteredDictionary == NULL){
        ifstream defaultDictionary;        //File stream to open the dictionary file
        vector<string> dictionary;      //Vector to hold the words from the dictionary
        string line;                    //Will hold the words being read from the dictionary
        //const string dictionary[WORD_COUNT];

        defaultDictionary.open("dictionary");

        //If the dictionary does not exist, display an error
        if(!defaultDictionary){
            cout << "Error opening the file." << endl;
        }

        //While there are words in the dictionary, push them into the vector until the end of the file is reached
        while(getline(defaultDictionary, line)){
            dictionary.push_back(line);
        }

        for(unsigned int i = 0; i < dictionary.size(); i++){
            cout << dictionary[i] << endl;
        }
    } else{
        ifstream userDictionary;
        vector<string> dictionary;
        string line;

        userDictionary.open("userEnteredDictionary");

        if(!userDictionary){
            cout << "Error opening the file." << endl;
        }

        while(getline(userDictionary, line)){
            dictionary.push_back(line);
        }

        for(unsigned j = 0; j < dictionary.size(); j++){
            cout << dictionary[j] << endl;
        }
        //TO_DO handle user dictionary; use a file stream to read through and store in a vector.

    }

    return 0;
}