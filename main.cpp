/*
 * File:   main.cpp
 * Author: R135264G
 *
 * Created on January 14, 2015, 10:53 AM
 */



#include <cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

bool EnterRegNum() {
    string regNum;

    try {
        cout << "Enter Registration Number...";
        getline(cin, regNum);
        if ((regNum.length()) != 8)
            throw 10;
        cout << "Ok! Valid Registration number" << endl;
        return 1;
    } catch (int err) {
        cout << "Invalid Registration Number" << endl;
        return 0;

    }

}

bool EnterIntake() {
    string intake;

    try {
        cout << "Enter intake..";
        getline(cin, intake);
        if ((intake.length()) != 6)
            throw 5;
        cout << "Ok! Valid intake" << endl;
        return 1;
    } catch (int err) {
        cout << "Invalid intake" << endl;
        return 0;

    }

}

bool StudentInfor() {

    float weight;
    int age;
    try {
        cout << "enter age" << endl;
        cin >> age;
        cout << "enter weight" << endl;
        cin >> weight;
        if (age <= 0)
            throw 10;
        cout << "age is Valid" << endl;
        return 1;


        if (weight <= 0)
            throw 'error';
        cout << "weight is valid" << endl;
        return 1;
    } catch (int err) {
        cout << "invalid age" << endl;
        return 0;
    } catch (...) {
        cout << "invalid weight" << endl;
        return 0;

    }
}

void CheckAddress(int houseNumber, string streetName)throw (string) {
    try {



        if ((streetName.length()) > 10)
            throw 'error';
        if (houseNumber <= 0)
            throw 10;
    } catch (int err) {
        cout << "invalid house number" << endl;
    } catch (string) {
        cout << "invalid streetname" << endl;
    }
}

int main() {
    string name;

    cout << "Enter your name..." << endl;
    getline(cin, name);
    bool valid;
    while (valid == 0) {
        valid = EnterRegNum();
    }
    bool validInt;

    while (validInt == 0) {
        validInt = EnterIntake();


    }
    bool validSInfor;
    while (validSInfor == 0) {
        validSInfor = StudentInfor();
    }


    CheckAddress(-10, "a very long name");

    return 0;
}


