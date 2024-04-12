#include <stdio.h>
#include <SDL2/SDL.h>
#include "./constants.h"

int i = 0;
int arr[100];

int main() {

	while(i < 100) {
		
		arr[i] = i;
		i++;
	}
	for (int j = 0; j < 100; j++) {

		printf("\n%d", arr[j]);
	}
}
