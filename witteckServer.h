//
// Created by drwitteck on 3/25/17.
//

#ifndef PROJECT3_WITTECKSERVER_H
#define PROJECT3_WITTECKSERVER_H

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctype.h>
#include <cstring>
#include <errno.h>
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
#include <netinet/in.h>
#include <pthread.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <unistd.h>
#include <vector>
#include <wait.h>

using namespace std;

/*FUNCTION DECLARATIONS*/
void readDictionary();
void *getSocket();

#endif //PROJECT3_WITTECKSERVER_H
