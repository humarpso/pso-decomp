#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void TWindowCtrlMain__sub_8024D8A8(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
void free_member__15TWindowCtrlMainFPv(void* p);
int fn_802437C4(void*);
int TWindowCtrlMain__sub_8024D7C0(void*);
int fn_80263B34(void*);
int fn_80263B70(void*);
int TLobby__sub_80269C6C(void*);

void update_child_2c__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) TLobby__sub_80269C6C(m); }
void TWindowCtrlMain__sub_8024D8A8(void* p) { void* m = *(void**)((char*)p + 0x34); if (m) fn_802437C4(m); }
void update_field28__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80263B34(m); }
void free_member__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80263B70(m); }
s32 get_main_menu_message__15TWindowCtrlMainFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x28);
    if (p == 0) {
        return 0;
    }
    return TWindowMainMenu__sub_8024E3D4(p);
}

}
