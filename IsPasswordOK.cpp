#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include "PassCheck.h"

//This is the main funtion
int main(void) {
        bool PwStatus;
        int a,b;
        a=10; b=0;
        puts("Enter password:");
        PwStatus = IsPasswordOKs();
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