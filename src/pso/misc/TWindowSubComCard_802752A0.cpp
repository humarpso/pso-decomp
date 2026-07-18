#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_display_page__17TWindowSubComCardFi(s32 arg0);
s16 TWindowSubComCard__sub_80265BF8();
void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
void* get_sub_obj__17TWindowSubComCardFPv(void* p);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
void set_page__17TWindowSubComCardFPvs(void* p, s16 v);
void set_flag_10__17TWindowSubComCardFPv(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
int fn_80247ED8(void*);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void set_display_page__17TWindowSubComCardFi(s32 arg0) {
    set_page__17TWindowSubComCardFPvs((void *) (arg0), (int) (TWindowSubComCard__sub_80265BF8()));
}

}

}
