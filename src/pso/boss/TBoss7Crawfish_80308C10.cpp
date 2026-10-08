#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__14TBoss7CrawfishFi(s32 arg0);
f32 get_health__14TBoss7CrawfishFPv(s32);
M2C_UNK register_attack_hits__14TBoss7CrawfishFPv(s32);
M2C_UNK spawn_effect__14TBoss7CrawfishFii(s32, M2C_UNK);
M2C_UNK TBoss7Crawfish__sub_80308910(s32);
s32 objInBand__FP7GameObjf(s32, f32);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0F0;

void update__14TBoss7CrawfishFi(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0F0) != 0) {
        TBoss7Crawfish__sub_80308910(arg0);
        spawn_effect__14TBoss7CrawfishFii(arg0, 0x39E0D);
    }
    register_attack_hits__14TBoss7CrawfishFPv(arg0);
    if (TBoss7Crawfish__data_805DF0D8 == get_health__14TBoss7CrawfishFPv(arg0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
