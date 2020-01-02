#include <vector>
#include <stdio.h>

void binarySearch(std::vector<int> vector, int toFindValue) {
	int steps = 0;
	int minIndex = 0;
	int maxIndex = vector.size() - 1;

	while (minIndex <= maxIndex) {
		int middleIndex = (minIndex + maxIndex) / 2;
		int guess = vector.at(middleIndex);

		steps++;

		if (toFindValue == guess) {
			std::printf("Operation took %d steps.\n", steps);
			std::printf("Value found at %d index.", middleIndex);

			return;
		}
		else if (toFindValue < guess) {
			maxIndex = middleIndex - 1;
		}
		else {
			minIndex = middleIndex + 1;
		}
	}

	std::printf("Value %d not found", toFindValue);
}

int main() {
	std::vector<int> sortedVector = { 1, 2, 5, 12, 16, 18, 21, 22, 30, 100, 111 };

	binarySearch(sortedVector, 22);
}