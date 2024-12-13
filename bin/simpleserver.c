#include <stdio.h>

int main() {
    char buf[46];
    int i;
    
    while(1) {
        fputs("\nWe have 2 kinds of services for you to choose\n1. Echoserver\n2. InputServer\n> ",stdout);
        scanf("%d",&i);

        if(i == 1){
            puts("Enter what you want to be echo'd all over the world");
            scanf("%12s",buf);
            printf(buf);
            puts("");
        }else if(i == 2){
            fputs("What is your business with the Inputserver anyway?\n> ",stdout);
            scanf("%466s",buf);
        }else{
            puts("Don't you know how to read?");
            return 0;
        }
    }
    return 0;
}
