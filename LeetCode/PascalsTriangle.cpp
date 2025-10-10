// Given an interget numRows, return the first numRows of Pascal's triangle
// In Pascal's triangle, each number is the sum of the two numbers directly above it
//					1
//				1		1
//			1		2		1
//		1		3		3		1
//	1		4		6		4		1

#include <iostream>
#include <vector>

int main() {


	return 0;
}

std::vector<std::vector<int>> generatePascal(int numRows) {
	if (numRows == 0) {
		return {};
	}
	if (numRows == 1) {
		return { {1} };
	}

	// recursive call to generate Pascal
	std::vector<std::vector<int>> previousRow = generatePascal(numRows - 1);
	std::vector<int> currentRow(numRows, 1);

	for (int i = 1; i < numRows - 1; i++) {
		currentRow[i] = previousRow.back()[i - 1] + previousRow.back()[i];
	}

	previousRow.push_back(currentRow);

	return previousRow;
}
