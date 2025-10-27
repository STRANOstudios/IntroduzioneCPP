#pragma once

#pragma region 1) Pointer declaration & assignment

/// <summary>
/// E1: Declare int 'number' initialized to 42; declare int* 'p_number' = &number;
/// print the value using both 'number' and '*p_number'.
/// </summary>
void run_ptr_basic();

#pragma endregion

#pragma region 2) Modify through pointer

/// <summary>
/// E2: Declare double 'price' = 99.90; declare double* 'p_price' = &price;
/// modify the value via pointer to 149.99 and print the new value.
/// </summary>
void run_ptr_modify();

#pragma endregion

#pragma region 3) Pass-by-pointer (raddoppia)

/// <summary>
/// E3: Function that doubles, in-place, the integer pointed by 'ptr'.
/// </summary>
void raddoppia(int* ptr);

/// <summary>
/// E3 (demo): Declare 'value' = 5; print before/after calling raddoppia(&value).
/// </summary>
void run_raddoppia();

#pragma endregion

#pragma region 4) Swap via pointers (scambia)

/// <summary>
/// E4: Function that swaps the values pointed by 'a' and 'b' using a temporary variable.
/// </summary>
void scambia(int* a, int* b);

/// <summary>
/// E4 (demo): a = 10, b = 20; call scambia(&a, &b) and print swapped values.
/// </summary>
void run_scambia();

#pragma endregion

#pragma region 5) Pointers and C-strings

/// <summary>
/// E5: C-style string 'word' = "Puntatore"; char* points to first char; change 'P' -> 'C';
/// print the modified string.
/// </summary>
void run_cstring_pointer();

#pragma endregion

#pragma region 6) Pointer arithmetic (third element)

/// <summary>
/// E6: int array {1,3,5,7,9}; int* p = array; print the third element using *(p + 2).
/// </summary>
void run_pointer_arith_third();

#pragma endregion

#pragma region 7) Iterate with pointer arithmetic

/// <summary>
/// E7: int array 'grades' {22,25,30,28}; iterate with an int* and a for-loop,
/// incrementing the pointer each step and printing each element.
/// </summary>
void run_iterate_pointer();

#pragma endregion

#pragma region 8) Dynamic allocation (new/delete)

/// <summary>
/// E8: Allocate an int on the heap with new; assign 123; print; delete and set pointer to nullptr.
/// </summary>
void run_dynamic_new_delete();

#pragma endregion

#pragma region 9) Struct pointer and '->'

struct Punto {
    int x;
    int y;
};

/// <summary>
/// E9: Allocate a Punto with new; assign x=10 and y=5 via '->'; print; delete.
/// </summary>
void run_struct_pointer();

#pragma endregion

#pragma region 10) Double indirection (int**)

/// <summary>
/// E10: int a = 100; int* p1 = &a; int** p2 = &p1;
/// print the value via **p2, the address of 'a' via p1, and the address of p1 via p2.
/// </summary>
void run_double_pointer();

#pragma endregion
