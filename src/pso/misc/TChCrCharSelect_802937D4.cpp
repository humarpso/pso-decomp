#include "types.h"
#include "pso/misc/TChCrCharSelect_802937D4.h"

extern "C" {

    extern int char_select_class_id_table[];
int get_char_select_class_id(int a0) {  return char_select_class_id_table[a0]; }

}
