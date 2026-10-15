#include "types.h"

extern "C" {
    extern const float lbl_805D9204;
void* init__10TObjMapCsnFPv(void* a0);
s32 fn_8007A7A0();
s32 init_and_return__10TObjMapCsnFi(s32 arg0);
}

extern "C" {

void* get_data_ptr__10TObjMapCsnFPv(void* p);
s32 get_map_count__10TObjMapCsnFv(void);

void* get_data_ptr__10TObjMapCsnFPv(void* p) { return (char*)p + 0x1c; }

extern s32 map_csn_ctrl_instance;

s32 get_map_count__10TObjMapCsnFv(void) {
    return map_csn_ctrl_instance;
}
void* init__10TObjMapCsnFPv(void* a0) { init_and_return__10TObjMapCsnFi((s32)(a0)); *(int*)((char*)a0 + 0x8) = -1; *(float*)((char*)a0 + 0xc) = lbl_805D9204; return a0; }
s32 init_and_return__10TObjMapCsnFi(s32 arg0) {
    fn_8007A7A0();
    return arg0;
}

}
