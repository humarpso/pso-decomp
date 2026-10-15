#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801058AC_lbl_8049EE60 {
    s32 value;
    u8 remaining[0x74];
};

extern "C" {
void clear_id__10TObjPlayerFv(void *);
void fn_80103674(void);
s32 fn_8010F210(s32);
void init_resources__9TItemLoadFv(void);
extern RecoveredGlobal_801058AC_lbl_8049EE60 item_class_load_unload_table;
extern s32 lbl_805D5440;
extern int item_class_load_handle;
}

extern "C" {

void fn_801058E8(void* p);
int TItemDrop__sub_8010F168(void*, void*);
int initialize_mag_item_data(void*);
void clear_fields__20TWindowSubStatusDispFv(void* p);
int free_all__9TItemLoadFv(void);
int free_all_and_init__9TItemBuffFv(void);
int get_item_field_2__9TItemDataFv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
int test_flag3__9TItemDataFv(void* p);

    extern int item_class_load_handle;
void TObjPlayer::free_item_globals() { TItemDrop__sub_8010F168((void*)(item_class_load_handle), (void*)1); item_class_load_handle = 0; free_all__9TItemLoadFv(); free_all_and_init__9TItemBuffFv(); }

typedef char RecoveredGlobal_801058AC_lbl_8049EE60_size[sizeof(RecoveredGlobal_801058AC_lbl_8049EE60) == 0x78 ? 1 : -1];
void TObjPlayer::init_game_resources() {
    fn_80103674();
    init_resources__9TItemLoadFv();
    (*(s32 *)&item_class_load_handle) = fn_8010F210((s32) &item_class_load_unload_table.value);
    clear_id__10TObjPlayerFv(&lbl_805D5440);
}

void fn_801058E8(void* p) { *(u8*)((char*)p + 0x7) |= 0x1; }

u8 TObjPlayer::is_script_controlled() {
    u8 *arg0 = (u8 *)this;
    return (u8) (*(s16 *)((s8 *)arg0 + 0x324) == 6);
}

int TObjPlayer::activate_d04_slot() { return get_slot_value__10TObjPlayerFPvi((char*)this + 0xd04, 1); }

}
