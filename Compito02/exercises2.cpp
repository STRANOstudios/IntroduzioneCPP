#include <iostream>
#include <iomanip>

#include "exercises2.h"

using namespace std;

#pragma region 1) Pointer declaration & assignment

void run_ptr_basic() {
    cout << "=== 1) Pointer declaration & assignment ===\n";
    int number = 42;
    int* p_number = &number;
    cout << "number (via var): " << number << "\n";
    cout << "number (via *p):  " << *p_number << "\n\n";
}

#pragma endregion

#pragma region 2) Modify through pointer

void run_ptr_modify() {
    cout << "=== 2) Modify through pointer ===\n";
    double price = 99.90;
    double* p_price = &price;
    *p_price = 149.99;
    cout << fixed << setprecision(2);
    cout << "price (after *p assign): " << price << "\n\n";
}

#pragma endregion

#pragma region 3) Pass-by-pointer (raddoppia)

void raddoppia(int* ptr) {
    if (!ptr) return;
    *ptr *= 2;
}

void run_raddoppia() {
    cout << "=== 3) Pass-by-pointer (raddoppia) ===\n";
    int value = 5;
    cout << "before: value = " << value << "\n";
    raddoppia(&value);
    cout << "after:  value = " << value << "\n\n";
}

#pragma endregion

#pragma region 4) Swap via pointers (scambia)

void scambia(int* a, int* b) {
    if (!a || !b) return;
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void run_scambia() {
    cout << "=== 4) Swap via pointers (scambia) ===\n";
    int a = 10, b = 20;
    cout << "before: a=" << a << ", b=" << b << "\n";
    scambia(&a, &b);
    cout << "after:  a=" << a << ", b=" << b << "\n\n";
}

#pragma endregion

#pragma region 5) Pointers and C-strings

void run_cstring_pointer() {
    cout << "=== 5) Pointers and C-strings ===\n";
    char word[] = "Puntatore";
    char* p_word = word;   // first character
    *p_word = 'C';         // 'P' -> 'C'
    cout << "modified: " << word << "\n\n";
}

#pragma endregion

#pragma region 6) Pointer arithmetic on arrays

void run_pointer_arith_third() {
    cout << "=== 6) Pointer arithmetic (third element) ===\n";
    int numbers[] = { 1, 3, 5, 7, 9 };
    int* p_array = numbers; // decay to pointer
    cout << "third element *(p+2): " << *(p_array + 2) << "\n\n";
}

#pragma endregion

#pragma region 7) Iterate with pointer arithmetic

void run_iterate_pointer() {
    cout << "=== 7) Iterate with pointer arithmetic ===\n";
    int grades[] = { 22, 25, 30, 28 };
    int* p = grades;
    int* end = grades + (sizeof(grades) / sizeof(grades[0]));
    for (; p < end; ++p) {
        cout << *p << " ";
    }
    cout << "\n\n";
}

#pragma endregion

#pragma region 8) Dynamic allocation (new/delete)

void run_dynamic_new_delete() {
    cout << "=== 8) Dynamic allocation (new/delete) ===\n";
    int* p = new int;   // allocate
    *p = 123;           // assign
    cout << "value: " << *p << "\n";
    delete p;           // free
    p = nullptr;        // safety
    cout << "deleted, p set to nullptr\n\n";
}

#pragma endregion

#pragma region 9) Struct pointer and '->'

void run_struct_pointer() {
    cout << "=== 9) Struct pointer and '->' ===\n";
    Punto* pt = new Punto{};
    pt->x = 10;
    pt->y = 5;
    cout << "Punto: x=" << pt->x << ", y=" << pt->y << "\n";
    delete pt;
    pt = nullptr;
    cout << "deleted\n\n";
}

#pragma endregion

#pragma region 10) Double indirection (int**)

void run_double_pointer() {
    cout << "=== 10) Double indirection (int**) ===\n";
    int a = 100;
    int* p1 = &a;
    int** p2 = &p1;

    cout << "value via **p2: " << **p2 << "\n";
    cout << "address of a (p1): " << p1 << "\n";
    cout << "address of p1 (p2): " << p2 << "\n\n";
}

#pragma endregion
