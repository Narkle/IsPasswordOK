#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include "PassCheck.h"

//This is the IsPasswordOK function
int IsPasswordOKs(void) {
        char Password[12];
        gets(Password);
        return 0 == strcmp(Password, "goodpass");
}