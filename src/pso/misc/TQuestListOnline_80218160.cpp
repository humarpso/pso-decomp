#include "types.h"

extern "C" {

void reset_state__16TQuestListOnlineFPv(void* a0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int fn_801DB6F0(void*);

    extern int TLobby__data_805D5580;
    extern int lbl_805D61E8;
    extern int lbl_805D61EC;
    extern int lbl_805D61F0;
    extern int lbl_805D61F4;
void reset_state__16TQuestListOnlineFPv(void* a0) { fn_801DB6F0((void*)(TLobby__data_805D5580)); lbl_805D61E8 = 0; lbl_805D61F0 = 0; lbl_805D61EC = 0; lbl_805D61F4 = 0; set_field_20__12TQuestListVMFPvi(a0, (void*)12); }

}
