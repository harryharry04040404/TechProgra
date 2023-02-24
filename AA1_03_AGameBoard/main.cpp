#include "header.h"

int main() {

	Board tablero [NUM_ROWS][NUM_COLUMNS];

	InitializeBoard(tablero);

	PrintBoard(tablero, NUM_ROWS, NUM_COLUMNS);
}

