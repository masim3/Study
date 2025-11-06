#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int myvalue = 0x42;
    char mystring[16];
    scanf("%s", mystring);
    if (myvalue == 0xdeadbeef) {
        printf("Success!\n")
    }
    else {
    printf("Fail! mavalue is %x}", myvalue);
    }
exit(0);
}