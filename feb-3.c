#include <stdio.h>

int main() {
    int speed;
    printf("Enter a speed:\n");
    scanf("%d", &speed);

    if (speed >= 25) {
        printf("You're going too fast\n");
    }
    else if (speed > 15) {
        printf("You're going a little too fast\n");
    }
    else {
        printf("You're ok\n");
    }
    
    return 0;
}