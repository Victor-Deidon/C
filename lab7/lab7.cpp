#include <stdio.h>
#define ARRAY_SIZE 25
int function(int input);
int main() {
	int array[ARRAY_SIZE] = { 0 };
	for (int i = 0; i < ARRAY_SIZE; i++) {
		array[i] = function(i);
	}
	for (int j = 0; j < ARRAY_SIZE;j++) {
		int b = array[j];
		printf("", array[j]);
	
	}
	return 0;
}
int function(int input) {
	return (input * (input - 1));
}
