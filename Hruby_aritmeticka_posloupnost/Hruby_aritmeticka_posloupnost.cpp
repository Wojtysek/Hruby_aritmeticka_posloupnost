#include <stdio.h>

int main(void) {

	int dif, pred;

	printf("hodnota prvniho clenu: ");
	scanf("%d", &pred);

	printf("hodnota diference: ");
	scanf("%d", &dif);

	printf("\n");

	for (int i = 1; i <= 20; i++) {
		printf("cislo %d.: %d\n", i, pred);
		pred += dif;
	}
}