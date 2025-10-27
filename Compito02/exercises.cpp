#include <iostream>
#include <cctype>

#include "exercises.h"

using namespace std;

#pragma region 1) Enum and switch
void run_enum_switch() {
	cout << "=== 1) Enum and switch ===\n";
	TrafficState currentState = YELLOW;

	switch (currentState) {
	case RED:    cout << "STOP! Wait.\n"; break;
	case YELLOW: cout << "Caution! Get ready.\n"; break;
	case GREEN:  cout << "GO! You may proceed.\n"; break;
	}
	cout << "\n";
}
#pragma endregion

#pragma region 2) Arithmetic, assignment and if/else
void run_arithmetic_ifelse() {
	cout << "=== 2) Arithmetic, assignment and if/else ===\n";
	int base = 12, height = 5;
	int area = base * height;
	area *= 2; // double it

	if (area > 100) {
		cout << "The doubled area exceeds 100.\n";
	}
	else {
		cout << "The doubled area is 100 or less.\n";
	}
	cout << "\n";
}
#pragma endregion

#pragma region 3) For + modulo (even numbers 1..20)
void run_for_modulo() {
	cout << "=== 3) For + modulo (even numbers 1..20) ===\n";
	for (int i = 1; i <= 20; ++i) {
		if (i % 2 == 0) cout << i << " ";
	}
	cout << "\n\n";
}
#pragma endregion

#pragma region 4) While + decrement (5!)
void run_while_factorial() {
	cout << "=== 4) While + decrement (5!) ===\n";
	int counter = 5;
	int result = 1;
	while (counter > 0) {
		result *= counter;
		counter--; // postfix decrement
	}
	cout << "Factorial (5!) = " << result << "\n\n";
}
#pragma endregion

#pragma region 5) Do-while with user input
void run_do_while_input() {
	cout << "=== 5) Do-while with user input (S/N) ===\n";
	bool keepGoing = true;
	do {
		cout << "Continue? (S/N): ";
		char c{};
		cin >> c;
		if (c == 'N' || c == 'n') {
			keepGoing = false;
		}
		cout << "Loop executed.\n";
	} while (keepGoing);
	cout << "\n";
}
#pragma endregion

#pragma region 6) Relational + logical operators
void run_relational_logical() {
	cout << "=== 6) Relational + logical operators ===\n";
	int points = 85, attendance = 90, minRequirement = 60;
	if ((points > minRequirement) && (attendance >= 80)) {
		cout << "Passed\n";
	}
	else {
		cout << "Not Passed\n";
	}
	cout << "\n";
}
#pragma endregion

#pragma region 7) Range-based for (read)
void run_range_based_read() {
	cout << "=== 7) Range-based for (read) ===\n";
	vector<string> colors{ "Red", "Green", "Blue", "Yellow" };
	for (const auto& color : colors) {
		cout << "Color is: " << color << "\n";
	}
	cout << "\n";
}
#pragma endregion

#pragma region 8) Range-based for (modify by reference)
void run_range_based_modify() {
	cout << "=== 8) Range-based for (modify by reference) ===\n";
	vector<int> prices{ 10, 25, 5, 40 };
	for (auto& p : prices) {
		p = static_cast<int>(p * 1.1); // +10%, truncated
	}
	cout << "Updated prices: ";
	for (const auto& p : prices) cout << p << " ";
	cout << "\n\n";
}
#pragma endregion

#pragma region 9) Bitwise AND (flags)
void run_bitwise_and() {
	cout << "=== 9) Bitwise AND (flags) ===\n";
	int permissions = 6;              // 0110
	const int WRITE_MASK = 2;         // 0010
	if (permissions & WRITE_MASK) {
		cout << "Write permission is ACTIVE.\n";
	}
	else {
		cout << "Write permission is NOT active.\n";
	}
	cout << "\n";
}
#pragma endregion

#pragma region 10) Bitwise shifts (<<, >>)
void run_bitwise_shifts() {
	cout << "=== 10) Bitwise shifts (<<, >>) ===\n";
	int initialValue = 13;
	int multiplied = initialValue << 3; // *8
	int divided = multiplied >> 2;      // /4 (integer)
	cout << "initialValue: " << initialValue
		<< ", multiplied: " << multiplied
		<< ", divided: " << divided << "\n\n";
}
#pragma endregion
