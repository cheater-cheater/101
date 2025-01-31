#include <stdio.h>

int main() {
	int pulse, restHeartrate;
	int run;
	run = 1;
	//loop starts here
	while (run == 1) {
		printf("\n\nTake your resting pule for 10 seconds. \n");
		printf("Enter your pulse rate: ");
		scanf("%i", &pulse);

		restHeartrate = pulse * 6;

		printf("\n\n Your resting heart rate is %d.\n", restHeartrate);

		printf("\nTry again? \n1 for yes, 0 for no: ");
		scanf("%i", &run);
	}
	return 0;

}
