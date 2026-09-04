#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_8021EEEC_8021EEE4 { char pad[0x18]; };
struct VObj_8021EEEC_8021EEE4 : Base_8021EEEC_8021EEE4 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual s32 m14();
};

extern "C" {

void calc_item_count__18TShopGetItemWindowFPvPv(void *arg0, s32 *arg1);
s16 get_cursor_index__18TShopGetItemWindowFPv(void* p);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();

s16 get_cursor_index__18TShopGetItemWindowFPv(void* p) { return *(s16*)((char*)p + 0x74); }

extern s32 lbl_805D53A0;

void calc_item_count__18TShopGetItemWindowFPvPv(void *arg0, s32 *arg1) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 1;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = ((VObj_8021EEEC_8021EEE4 *)arg0)->m14() + 1;
    } else {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if (temp_r3 != NULL) {
            var_r31 = ((VObj_8021EEEC_8021EEE4 *)temp_r3)->m14() + 1;
        }
    }
    if (var_r31 < 1) {
        var_r31 = 1;
    }
    if (var_r31 > 0xC7) {
        var_r31 = 0xC7;
    }
    *arg1 = var_r31;
}

}
