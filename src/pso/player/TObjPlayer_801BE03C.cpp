#include "types.h"

extern "C" {

void finalize_shared__10TObjPlayerFv(void);
void init_shared__10TObjPlayerFv(void);
int TLockOnCursor__sub_8013DBF4(void);
int TLockOnCursor__sub_8013DC38(void);
int free_shared_data__10TObjPlayerFv(void);
int TObjPlayer__sub_801BDFC4(void);
int TObjPlayer__sub_801BEC98(void*);
int TObjPlayer__sub_801BECA0(void*);
int fn_8013A4A0(void*);
int fn_801D76B0(void*);
int fn_802A7BD8(void);
int fn_802A7C0C(void);
int fn_802A7C5C(void);
int fn_802A7D68(void);
int fn_802A7DDC(void);
int fn_802A7E28(void);
int fn_802B019C(void);
int fn_802B01D8(void);
int fn_80354E7C(void);

    extern unsigned char lbl_8050EA40[];
    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void finalize_shared__10TObjPlayerFv(void) { fn_8013A4A0((void*)0); TObjPlayer__sub_801BECA0((void*)0); TObjPlayer__sub_801BEC98((void*)0); lbl_805D5D7C = 0; fn_801D76B0(lbl_8050EA40); lbl_805D5D88 = 0; TLockOnCursor__sub_8013DBF4(); fn_802A7BD8(); fn_802B019C(); free_shared_data__10TObjPlayerFv(); }

    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void init_shared__10TObjPlayerFv(void) { TObjPlayer__sub_801BDFC4(); fn_8013A4A0((void*)0); TObjPlayer__sub_801BECA0((void*)1); TObjPlayer__sub_801BEC98((void*)0); lbl_805D5D7C = 0; fn_802A7C5C(); fn_802A7E28(); fn_802A7C0C(); fn_802A7D68(); fn_802A7DDC(); TLockOnCursor__sub_8013DC38(); fn_802B01D8(); fn_80354E7C(); lbl_805D5D88 = 0; }

}
