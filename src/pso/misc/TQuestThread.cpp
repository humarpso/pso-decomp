#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestThread__sub_801F64CC(int a0);
void destroy_quest_obj__12TQuestThreadFv(void);
void fn_801F6520(void* p);
void free_menu_object(void* p);
int queue_destruction__12TQuestThreadFPv(void* p);
void set_status_flag_80__12TQuestThreadFPv(void* p);
int queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D5EEC;

void destroy_quest_obj__12TQuestThreadFv(void) {
    if ((u32) lbl_805D5EEC != 0U) {
        queue_destruction__7TObjectFv((void*)((void*)lbl_805D5EEC));
        lbl_805D5EEC = 0U;
    }
}

void set_status_flag_80__12TQuestThreadFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }

    extern int lbl_805D5EF4;
void TQuestThread__sub_801F64CC(int a0) { lbl_805D5EF4 = a0; }

int queue_destruction__12TQuestThreadFPv(void* p) { return queue_destruction__7TObjectFv((void*)(p)); }
void free_menu_object(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) fn_801F6520((void*)(m)); }
void fn_801F6520(void* p) { *(u16*)((char*)p + 0x60) &= 0xfffe; }

}
