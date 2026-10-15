#include "types.h"

extern "C" {

int get_char_select_class_id(int a0);

    extern int char_select_class_id_table[];
int get_char_select_class_id(int a0) {  return char_select_class_id_table[a0]; }

}
