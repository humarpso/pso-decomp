#include "types.h"

extern "C" {

void refresh_sub__9TWindowDDFPvPv(void* p, void* a1);
void apply_input__9TWindowDDFPvPv(void* p, void* a1);
void update__9TWindowDDFPvPv(void* p, void* a1);
int TWindowDD__sub_80341AE0(void*);
int set_mode_2__9TWindowDDFPv(void*);
int reset_cursor__9TWindowDDFPv(void*);

void refresh_sub__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFPv(a1); }

void apply_input__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); reset_cursor__9TWindowDDFPv(a1); }

void update__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFPv(a1); }

}
