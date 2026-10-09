#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TItemTexLoadFPv(void *arg0);
void free_textures__12TItemTexLoadFv(void);
void *TItemTexLoad__ct(void *, void *);
void *__nw__7TObjectFUl(int);
int free__11TOBoss4RockFUi(void*);

void *create__12TItemTexLoadFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TItemTexLoad__ct(o, arg0);
    }
    return o;
}

    extern int item_tex_load_buffer_a;
    extern int TItemTexLoad__name_buffer;
void free_textures__12TItemTexLoadFv(void) { free__11TOBoss4RockFUi((void*)(TItemTexLoad__name_buffer)); TItemTexLoad__name_buffer = 0; free__11TOBoss4RockFUi((void*)(item_tex_load_buffer_a)); item_tex_load_buffer_a = 0; }

}
