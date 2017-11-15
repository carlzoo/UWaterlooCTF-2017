// Allergic to cats? Don't want to clean litter boxes? 
// This program is the solution you've been looking for. 
// Cat Simulator (TM) simulates a feline companion without the hassle of wayward fur. 
// This code is in beta, so don't try to run it. 
#include <time.h>
#include <stdlib.h>



void petTheCat(char **catName) {
	printf("purrrrrrrrrrr\n");	
	srand(time(NULL));
	int r = rand();
	if ( r % 2 == 0) {
		printf("purrr- *scratch* *bite* - puurrrrrrr\n"); 
	}
}

void nameTheCat() {
	printf("What would you like to name the cat? Not that they'll respond to it.\n"); 
	
	char long_cat_name[256];
	gets(long_cat_name);

	printf("Congrats! You have named the cat ");
	printf("%s\n", long_cat_name);
}

void feedTheCat() {
	printf("MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW ME-\n");
	printf("*You fill the dish with food*\n")
	printf("*The cat sniffs the food you have just given them and walks away.*\n")	
}


void main() {

	printf("Hello welcome to Cat Simulator (TM)!\n");
	printf("Cat Simulator (TM), the solution to your feline companionship needs.\n");
	
	while(true) {
		printf("What would you like to do? Enter one of {name, pet, feed, quit} .\n");
		char command[4];

		fgets(command, 4, stdin);

		if (strcmp(command,"name") == 0) {
			nameTheCat();
		}
		
		else if (strcmp(command, "pet") == 0) {
			petTheCat();
		}

		else if (strcmp(command,"feed") == 0) {
			feedTheCat();
		}
		else if (strcmp(command,"quit") == 0) {
			printf("See you later. *paw sticks out from under the door*.");
			exit(0)
		}
		else {
			printf("Mrrp? That's not a valid command. Try again.")
		}
		

	}

}
