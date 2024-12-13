#include <stdio.h>

int main(){
    char buf[150];
    
    puts("Overflow me, Can you?");

    int len = read(0, buf, 0x100);

    if(len > 150){
        puts("That's how you overflow");
        system("cat flag.txt");
    }else{
        puts("Nah, that's not how you do it");
    }

    exit(1337);
}
