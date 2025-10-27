#include <iostream>

#include "exercises.h"
#include "exercises2.h"

using namespace std;

int main() {

    // Operators and Control structures
    cout << "===== Operators and Control structures =====\n\n";
    run_enum_switch();
    run_arithmetic_ifelse();
    run_for_modulo();
    run_while_factorial();
    run_do_while_input();
    run_relational_logical();
    run_range_based_read();
    run_range_based_modify();
    run_bitwise_and();
    run_bitwise_shifts();

    // Pointers
    cout << "===== Pointers =====\n\n";
    run_ptr_basic();
    run_ptr_modify();
    run_raddoppia();
    run_scambia();
    run_cstring_pointer();
    run_pointer_arith_third();
    run_iterate_pointer();
    run_dynamic_new_delete();
    run_struct_pointer();
    run_double_pointer();

    return 0;
}