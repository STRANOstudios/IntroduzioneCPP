#pragma once

#include <vector>
#include <string>

#pragma region 1) Enum and switch

enum TrafficState { RED, YELLOW, GREEN };
/// <summary>
/// Define an enum (TrafficState) with RED, YELLOW, GREEN and print a message based on the state using switch.
/// </summary>
void run_enum_switch();

#pragma endregion 

#pragma region 2) Arithmetic, assignment and if/else

/// <summary>
/// Declare base=12, height=5. Compute area, double it with *=, and print if it exceeds 100.
/// </summary>
void run_arithmetic_ifelse();

#pragma endregion 

#pragma region 3) For + modulo (even numbers)

/// <summary>
/// Loop from 1 to 20 and print only even numbers using the modulo operator (%).
/// </summary>
void run_for_modulo();

#pragma endregion 

#pragma region 4) While + decrement (factorial 5!)

/// <summary>
/// Compute factorial of 5 using a while loop and postfix decrement.
/// </summary>
void run_while_factorial();

#pragma endregion 

#pragma region 5) Do-while with user input (S/N)

/// <summary>
/// Repeat asking user (S/N) until 'N' or 'n' is entered. Execute loop at least once.
/// </summary>
void run_do_while_input();

#pragma endregion 

#pragma region 6) Relational + logical operators (promotion rule)

/// <summary>
/// Check if student passes: points > minRequirement AND attendance >= 80.
/// </summary>
void run_relational_logical();

#pragma endregion 

#pragma region 7) Range-based for (read)

/// <summary>
/// Iterate through vector<string> colors and print each color.
/// </summary>
void run_range_based_read();

#pragma endregion 

#pragma region 8) Range-based for (modify by reference)

/// <summary>
/// Iterate through vector<int> prices by reference, increase each by 10%, then print updated values.
/// </summary>
void run_range_based_modify();

#pragma endregion 

#pragma region 9) Bitwise AND (flags)

/// <summary>
/// Use bitwise AND to check if WRITE permission (mask = 2) is active in permissions = 6.
/// </summary>
void run_bitwise_and();

#pragma endregion 

#pragma region 10) Bitwise shifts (<<, >>)

/// <summary>
/// Use bitwise shift operators: left shift (<<) by 3 to multiply by 8, then right shift (>>) by 2 to divide by 4.
/// </summary>
void run_bitwise_shifts();

#pragma endregion 
