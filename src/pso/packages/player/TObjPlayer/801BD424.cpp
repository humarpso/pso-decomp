#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_801BC688(void *);
void free_chara_making__10TObjPlayerFPv(void *);
void destroy_child__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BCD54(void *);
void TObjPlayer__sub_801BCC50(void *);
void TObjPlayer__sub_801BCB28(void *);
void TObjPlayer__sub_801BCA10(void *);
void destroy_owned_object__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BD314(void *);
void TObjPlayer__sub_801BC504(void *);
void TObjPlayer__sub_801BBC64(void *);
void TObjPlayer__sub_801BBB94(void *);
void TObjPlayer__sub_801BB8AC(void *);
void unregister__10TObjPlayerFi(void *);
void free_owned_buffer_b__10TObjPlayerFis(void *, int);
void destroy__10TObjPlayerFis(void *, int);
void TObjPlayer__sub_801BFAD4(void *, int);
void dt__10TObjPlayerFis(void *, int);
void __dt__14TPlyDispConfigFv(void *, int);
void free_owned_buffer_a__10TObjPlayerFis(void *, int);
void TObjPlayer__sub_80309E4C(void *, int);
void TObjPlayer__sub_801BEDC0(void *, int);
void TObjPlayer__sub_801BFA4C(void *, int);
void conditional_delete_ex__10TObjPlayerFis(void *, int);
void TObjPlayer__sub_801BF9F0(void *, int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__10TObjPlayer[];

void *__dt__10TObjPlayerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjPlayer;
        TObjPlayer__sub_801BC688(arg0);
        free_chara_making__10TObjPlayerFPv(arg0);
        destroy_child__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801BCD54(arg0);
        TObjPlayer__sub_801BCC50(arg0);
        TObjPlayer__sub_801BCB28(arg0);
        TObjPlayer__sub_801BCA10(arg0);
        destroy_owned_object__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801BD314(arg0);
        TObjPlayer__sub_801BC504(arg0);
        TObjPlayer__sub_801BBC64(arg0);
        TObjPlayer__sub_801BBB94(arg0);
        TObjPlayer__sub_801BB8AC(arg0);
        unregister__10TObjPlayerFi(arg0);
        free_owned_buffer_b__10TObjPlayerFis((s8 *)arg0 + 0x7CC, -1);
        destroy__10TObjPlayerFis((s8 *)arg0 + 0x754, -1);
        TObjPlayer__sub_801BFAD4((s8 *)arg0 + 0x644, -1);
        dt__10TObjPlayerFis((s8 *)arg0 + 0x550, -1);
        __dt__14TPlyDispConfigFv((s8 *)arg0 + 0x500, -1);
        free_owned_buffer_a__10TObjPlayerFis((s8 *)arg0 + 0x4AC, -1);
        TObjPlayer__sub_80309E4C((s8 *)arg0 + 0x384, -1);
        TObjPlayer__sub_801BEDC0((s8 *)arg0 + 0x374, -1);
        TObjPlayer__sub_801BFA4C((s8 *)arg0 + 0x360, -1);
        conditional_delete_ex__10TObjPlayerFis((s8 *)arg0 + 0x34C, -1);
        TObjPlayer__sub_801BF9F0((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
