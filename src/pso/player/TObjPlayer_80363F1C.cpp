#include "types.h"

extern "C" {

void* init_vtable_804F2A10__10TObjPlayerFPv(void* a0);
int reset_id_array__10TObjPlayerFPv(void*);
int __ct__7TObjectFP7TObject(void);

    extern unsigned char lbl_804F2A10[];
    extern int lbl_805D6FB8;
void* init_vtable_804F2A10__10TObjPlayerFPv(void* a0) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F2A10; reset_id_array__10TObjPlayerFPv((void*)(lbl_805D6FB8)); return a0; }

}
