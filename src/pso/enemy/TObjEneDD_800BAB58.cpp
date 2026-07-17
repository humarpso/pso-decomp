#include "types.h"

extern "C" {

int TObjEneGibbles__sub_80156780(void*);
int TObjEneDD__sub_800BA934(void* a0 = 0);
void init_model__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);

void init_model__9TObjEneDDFPv(void* p) { TObjEneGibbles__sub_80156780(p); TObjEneDD__sub_800BA934(p); }
void clear_field_388__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void set_active__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
