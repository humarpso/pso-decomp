#include "types.h"

extern "C" {

int TObjEneDD__sub_800BA934(void*);
int TObjEneDD__sub_800BA9BC(void);
int TObjEneDD__sub_800BAA2C(void);
int TObjEneDD__sub_800BAAE4(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void init_model__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
int TObjEneGibbles__sub_80156780(void*);

int TObjEneDD__sub_800BA934(void*) { return 0; }
int TObjEneDD__sub_800BA9BC(void) { return 0; }
int TObjEneDD__sub_800BAA2C(void) { return 0; }
int TObjEneDD__sub_800BAAE4(void) { return 0; }

void init_model__9TObjEneDDFPv(void* p) { TObjEneGibbles__sub_80156780(p); TObjEneDD__sub_800BA934((void*)(p)); }
void clear_field_388__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void set_active__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
