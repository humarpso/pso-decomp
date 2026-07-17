#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_scene_data__6TSceneFi(s32 arg0);
s32 *TItemDrop__sub_800F94BC(M2C_UNK *, u32);
s32 get_global_state__14TOKeyMachine01Fv();
u32 get_map_count__10TObjMapCsnFv();
M2C_UNK alloc_scene_buffer__18TObjButterflyLobbyFv();
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 update_lobby_scene__6TSceneFPv(M2C_UNK *);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK TLobby__sub_801317E4(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK fn_80140F18(u32, s32);

extern M2C_UNK lbl_8044A950[];
extern M2C_UNK lbl_8044A958[];
extern s32 *lbl_805D4E68;
extern u32 TScene__data_805D6000;
extern s32 lbl_805D6014;

struct Sp8Buf20 {
    s32 f0; s32 f4; s32 f8; s32 fc;
    s32 f10; s32 f14; s32 f18; s32 f1c;
};

void load_scene_data__6TSceneFi(s32 arg0) {
    struct Sp8Buf20 sp8;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    alloc_scene_buffer__18TObjButterflyLobbyFv();
    lbl_805D4E68 = NULL;
    TScene__data_805D6000 = 0U;
    lbl_805D6014 = 0;
    TLobby__sub_801317E4((M2C_UNK *)&sp8, arg0, lbl_8044A950);
    temp_r31 = update_lobby_scene__6TSceneFPv((M2C_UNK *)&sp8);
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x10000U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x10000);
            TScene__data_805D6000 = temp_r3;
            if (temp_r3 != 0U) {
                lbl_805D4E68 = TItemDrop__sub_800F94BC((M2C_UNK *)&sp8, temp_r3);
                lbl_805D6014 = 0x10000;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__data_805D6000 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            lbl_805D4E68 = TItemDrop__sub_800F94BC((M2C_UNK *)&sp8, temp_r3_2);
            lbl_805D6014 = temp_r31;
        }
    }
    if (((s32 *) lbl_805D4E68 != NULL) && (get_map_count__10TObjMapCsnFv() != 0U)) {
        u32 temp_csn = get_map_count__10TObjMapCsnFv();
        fn_80140F18(temp_csn, *lbl_805D4E68);
        return;
    }
    debug_print__6TLobbyFii(lbl_8044A958);
}

}
