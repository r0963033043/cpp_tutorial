/* function pointer array */

#include <stdio.h>

void run() { printf("start\r\n"); }
void stop() { printf("stop\r\n"); }
void exit() { printf("exit\r\n"); }

static void (*command[])(void) = {run, stop, exit};

int OnStateChange(unsigned int state) {

    if (state > 3) {
        printf("Wrong state!\n");
        return false;
    }

    command[state]();
    return 0;
}

int main(){

    OnStateChange(0);
    OnStateChange(2);
    OnStateChange(1);

    return 0;
}
