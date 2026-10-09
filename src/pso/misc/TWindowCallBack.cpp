#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802ACE84_lbl_804DE360 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802ACE84___vt__15TWindowCallBack {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void save_position__17TWindowSubComCardFPv(void *);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
void set_field_60__15TWindowCallBackFPvi(void* p, s32 v);
extern RecoveredGlobal_802ACE84_lbl_804DE360 window_callback_base_params;
extern M2C_UNK __vt__15TWindowCallBack[];
extern s32 lbl_805D3E58;
u8 *TWindowCallBack__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3);
}

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

}

extern "C" s32 draw_default_entry__9TWindowDDFi(void *);
class TWindowCallBack {
public:
    u8 pad[0x60];
    void (*callback)(TWindowCallBack *, s32);
    void render();
};

void TWindowCallBack::render() {
    s32 r = draw_default_entry__9TWindowDDFi(this);
    if (callback != NULL) {
        callback(this, r);
    }
}

extern "C" {

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
typedef char RecoveredGlobal_802ACE84_lbl_804DE360_size[sizeof(RecoveredGlobal_802ACE84_lbl_804DE360) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802ACE84___vt__15TWindowCallBack_size[sizeof(RecoveredGlobal_802ACE84___vt__15TWindowCallBack) == 0x1C ? 1 : -1];
u8 *TWindowCallBack__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3) {
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &window_callback_base_params.value, 4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802ACE84___vt__15TWindowCallBack *)&__vt__15TWindowCallBack).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E58;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x38, arg2);
    save_position__17TWindowSubComCardFPv(arg0);
    set_field_60__15TWindowCallBackFPvi((void*)(arg0), (s32)(arg3));
    return arg0;
}

}
