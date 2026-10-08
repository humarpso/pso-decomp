#include "types.h"

extern "C" {

void* TObjPlayer__sub_80363C5C(void* a0);
int __ct__7TObjectFP7TObject(void);
int reset_id_array__10TObjPlayerFPv(void*);

    extern unsigned char lbl_804F29F8[];
    extern int player_item_id_list;
void* TObjPlayer__sub_80363C5C(void* a0) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F29F8; reset_id_array__10TObjPlayerFPv((void*)(player_item_id_list)); return a0; }

}
