#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define sleepms(ms) usleep((ms) * 1000)

int main() {
srand(time(NULL));

int bot = 1 + rand() % 3;
int player;

printf("Hello friend :)\n");
printf("your choice (1: rock, 2: scissors, 3: paper)\n");
scanf("%d", &player);
printf("Ok, bot taking choice...\n");
sleepms(1000);
printf("Bot choice: %d\n", bot);
if (bot == 1 && player == 1 || bot == 2 && player == 2 || bot == 3 && player == 3) {
printf("Nobody win :|\n");
sleepms(1000);
return 0;
}

if (bot == 1 && player == 3 || bot == 2 && player == 1 || bot == 3 && player == 1) {
printf("You win :>\n");
sleepms(1000);
return 0;
}

if (bot == 1 && player == 2 || bot == 2 && player == 3 || bot == 3 && player == 1) {
printf("You loooose :<\n");
sleepms(1000);
return 0;
}

return 0;
}
