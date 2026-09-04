#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TWindowCallBackFv(void *arg0, s16 arg1);
void build_6xA3_olga_flow_boss_actions(void* p);
int fn_802ACD40(void* p);
void fn_802ACD60(void* p);
s32 get_state__11TBoss6Type2FPv(void* p);
s32 get_state__14TBoss6GravBallFPv(void* p);
int handle_olga_action__11TBoss6Type2FPv(void* p);
void init_packet__11TBoss6Type2FPv(void* p);
void run_task__15TWindowCallBackFv(void* p);
void set_field_60__15TWindowCallBackFPvi(void* p, s32 v);
void update_and_send__11TBoss6Type2FPv(void* p);
int TLobby__send_and_handle_60(void*);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

s32 get_state__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_state__14TBoss6GravBallFPv(void* p) { return *(s32*)((char*)p + 0x374); }
void update_and_send__11TBoss6Type2FPv(void* p) { handle_olga_action__11TBoss6Type2FPv((void*)(p)); TLobby__send_and_handle_60(p); }
int handle_olga_action__11TBoss6Type2FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void init_packet__11TBoss6Type2FPv(void* p) { *(u8*)((char*)p + 0x0) = 165; *(u8*)((char*)p + 0x1) = 5; }
int fn_802ACD40(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void fn_802ACD60(void* p) { fn_802ACD40((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6xA3_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 163; *(u8*)((char*)p + 0x1) = 5; }
void set_field_60__15TWindowCallBackFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x60) = v; }

void run_task__15TWindowCallBackFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

extern M2C_UNK __vt__15TWindowCallBack[];

void *__dt__15TWindowCallBackFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowCallBack;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
