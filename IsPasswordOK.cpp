#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
using namespace std;

//This is the IsPasswordOK function
bool IsPasswordOK(void) {
        char Password[12];
        gets(Password);
        return 0 == strcmp(Password, "goodpass");
}

//This is the main funtion
int main(void) {
        bool PwStatus;
        int a,b;
        a=10; b=0;
        puts("Enter password:");
        PwStatus = IsPasswordOK();
        if (PwStatus == false) {
                puts("Access denied");
                printf("This is an Error: %d\n",a/b);
                exit(-1);
        }
        else
                puts("Access granted");
}
//1234567890123456w▸*!
//g++ IsPasswordOK.cpp -o IsPasswordOK -fno-stack-protector | -fstack-protector