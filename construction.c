#include <stdio.h>
#include <stdlib.h>
#include "construction.h"

struct phone {int price; char *name;};

struct phone newphone(int i) {
	struct phone output;
	if (i == 0) {
		output.price = 50;
		output.name = "flipphone";
	}
	else if (i == 1) {
		output.price = 1000;
		output.name = "iphone";
	}
	else {
		output.price = 700;
		output.name = "android";
	}
	return output;
}

void printphone(struct phone phonevar) {
	printf("Price of %s: %d\n", phonevar.name, phonevar.price);

}

void changeprice(struct phone *phonevar, int change) {
	phonevar->price += change;
}

void renamephone(struct phone *phonevar, char *newname) {
	phonevar->name = newname;
}

int main() {
	struct phone phonevar;
	printf("Testing creating phones and changing price.\n");
	for (int i = 0; i< 3; i++) {
		phonevar = newphone(i);
		printf("Before:\n");
		printphone(phonevar);
		changeprice(&phonevar, 10 *i + 10);
		printf("After:\n");
		printphone(phonevar);
	}
	printf("\nTesting changing name:\n");
	printf("Before:\n");
	printphone(phonevar);
	renamephone(&phonevar, "samsung");
	printf("After:\n");
	printphone(phonevar);

}

