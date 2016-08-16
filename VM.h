//
// Created by Dillon
//

#ifndef VM_H_VM_H
#define VM_H_VM_H
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>

#define NO_ERROR 0;
#define ERROR -2;
#define EXIT -1;

using namespace std;


class VM {

    private:
        string cmd;
        // FIX?
        vector<string> *args;
        string in;
        string out;
        int fork_proc();
    public:
        //setters
        void setCmd(string);
        void setArgs(string);
        void setIn(string);
        void setOut(string);

        //getters
        string getCmd();
        vector<string>* getArgs();
        string getIn();
        string getOut();

        int execute();

};


#endif //VM_H_VM_H
