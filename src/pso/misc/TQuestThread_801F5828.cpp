#include "pso/TQuestThread.h"

TQuestThread::~TQuestThread() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TQuestThread__sub_801F5EAC(u8 *arg0, s32 arg1);
u32 __ct__12TQuestThreadFv(u32, u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
extern u32 lbl_805D5EE8;
u8 *TQuestThread__sub_801F5C50(s32 arg0);
M2C_UNK bswap_header__6TLobbyFPv();
extern u32 lbl_805D5EE8;
void handle_6x77_sync_quest_register(u8 *arg0);
}

extern "C" {

int TQuestThread__sub_801F5D88(void* p);
void clear_buffer__12TQuestThreadFPv(void* p);
u32 create__12TQuestThreadFi(s32 arg0);
int TQuestThread__sub_801F5DA8(void*);
void TQuestThread__sub_801F5ECC(void);
u32 __ct__12TQuestThreadFv(u32, u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
int memset(void*, void*, void*);
M2C_UNK set_parent__7TObjectFP7TObject(u32, s32);

extern u32 lbl_805D5EE8;
extern s32 tl_00;

u32 create__12TQuestThreadFi(s32 arg0) {
    u32 var_r31;

    if ((u32) lbl_805D5EE8 != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0U) {
            var_r31 = __ct__12TQuestThreadFv(var_r31, lbl_805D5EE8, arg0);
        }
        if (var_r31 != 0U) {
            set_parent__7TObjectFP7TObject(var_r31, tl_00);
            return var_r31;
        }
        return 0U;
    }
    return 0U;
}

u8 *TQuestThread__sub_801F5C50(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((u32) lbl_805D5EE8 != 0U) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl(0x194)));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)__ct__12TQuestThreadFv((u32)(temp_r3), (u32)((s32) lbl_805D5EE8), (s32)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

int TQuestThread__sub_801F5D88(void* p) { return TQuestThread__sub_801F5DA8(p); }

void clear_buffer__12TQuestThreadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

void handle_6x77_sync_quest_register(u8 *arg0) {
    s32 var_r4;
    u16 temp_r0;
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg0);
    bswap_header__6TLobbyFPv();
    var_r3 = (u8 *)((*(u8 * *)&lbl_805D5EE8));
    if (var_r3 != NULL) {
        temp_r0 = M2C_FIELD(var_r31, u16 *, 4);
        var_r4 = M2C_FIELD(var_r3, s32 *, 0x2C);
        if (temp_r0 <= 0xFFU) {
            var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 8));
            M2C_FIELD(var_r4, M2C_UNK *, ((temp_r0 * 4) & 0x3FFFC)) = (long) (var_r3);
        }
    }
}

s32 TQuestThread__sub_801F5EAC(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2C), M2C_UNK *, (arg1 * 4));
    }
    return 0;
}

}
