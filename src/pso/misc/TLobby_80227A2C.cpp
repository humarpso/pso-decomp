#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80228634_lbl_804CBE98 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80228754_lbl_804CBE98 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802286C4_lbl_804CBE98 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8022804C_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_80228074_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_8022809C_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_802280C4_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_802287F0_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct O_80228A74 { u8 pad[0x1c]; char names[1][0x20]; };

struct P_80228A74 { u8 pad[0x109c]; s32 count; };

struct L_8022884C { u8 pad[0x109c]; s32 count; s32 hi; s32 lo; };

extern "C" {
s32 get_instance__6TLobbyFv();
s32 get_player_floor__6TLobbyFi(s32);
s32 select_area_entrance(void *arg0);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
extern RecoveredGlobal_80228634_lbl_804CBE98 area_initializer_dispatch_table;
void run_area_scene_cleanup(u8 *arg0);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
M2C_UNK reset_story_select_state__6TLobbyFv();
extern RecoveredGlobal_80228634_lbl_804CBE98 area_initializer_dispatch_table;
void promote_area_floor(u8 *arg0);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
M2C_UNK set_scene__6TSceneFi(int);
M2C_UNK set_current_floor_area(int);
extern RecoveredGlobal_80228634_lbl_804CBE98 area_initializer_dispatch_table;
void load_area_scene_and_init(u8 *arg0);
M2C_UNK TLobby__sub_802401C8(void *);
extern unsigned char lbl_80514F64[];
void TLobby__sub_8022804C(void);
M2C_UNK update_sound_frame(void *);
extern unsigned char lbl_80514F64[];
void update_global_sound_frame(void);
M2C_UNK reset_sound_state__6TLobbyFPv(void *);
extern unsigned char lbl_80514F64[];
void TLobby__sub_8022809C(void);
M2C_UNK run_disk_error_check__6TLobbyFv();
int render_tick__Fv(void);
s32 is_sound_enabled();
M2C_UNK init_sound_aux_effects(void *);
M2C_UNK validate_and_set_selection__6TLobbyFPvi(void *, int);
M2C_UNK TLobby__sub_803382E4();
M2C_UNK TLobby__sub_803CB81C();
extern unsigned char lbl_80514F64[];
void wait_for_sound_init__6TLobbyFv(void);
s32 init_range_zero__6TLobbyFPv(void* arg0);
extern RecoveredGlobal_802287F0_lbl_80515BA0 lbl_80515BA0;
s32 init_range_zero_global__6TLobbyFv(void);
void *reset_sound_owner_state(void *self);
void TLobby__sub_80240808(void *self, s32 x);
void *__register_global_object(void *obj, void *dtor, void *entry);
extern unsigned char lbl_80514F64[];
extern char lbl_80514F58[];
void TLobby__sub_80228118(void);
char *strcpy(char *dst, const char *src);
void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src);
void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src);
void clear_work_buffer(u8 *arg0);
void tokenize_args__6TLobbyFPvPv(O_80228A74 *self, char *s);
extern char lbl_805DC788[4];
u32 strlen(const char *s);
char *strcpy(char *dst, const char *src);
void trim_whitespace__6TLobbyFPv(char *s);
s32 debug_printf_at(u32, void *, ...);
void TLobby__sub_8022884C(L_8022884C *self);
M2C_UNK run_frame__6TLobbyFv();
M2C_UNK TLobby__sub_80226B64(int);
s32 is_ready__6TLobbyFPv(void *);
extern M2C_UNK lbl_8044C8D0[];
extern M2C_UNK lbl_8044C960[];
void load_floor_sound_bank(s32 arg0);
void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src);
void clear_work_buffer(u8 *arg0);
void parse_csv_line__6TLobbyFPvPv(O_80228A74 *self, char *s);
}

extern "C" {

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0);
void clear_work_buffer(u8 *arg0);
void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s32 init_range_zero__6TLobbyFPv(void* arg0);
void refresh_render_state__6TLobbyFv(void);
void set_area__6TLobbyFPvi(void *arg0, s32 arg1);
s32 get_floor_map_terrain(s32);
int apply_clamped_field_27c__6TLobbyFv(float);
int pop_sound_groups__6TLobbyFPvi(void*, void*);
void __ct__7TObjectFP7TObject(void *);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_range__6TLobbyFPvi(void*, int);
void memset(void *, int, int);
int render_tick__Fv(void);

    extern unsigned char lbl_80514F64[];
    extern float lbl_805DC76C;
void refresh_render_state__6TLobbyFv(void) { pop_sound_groups__6TLobbyFPvi(lbl_80514F64, (void*)0); apply_clamped_field_27c__6TLobbyFv(lbl_805DC76C); render_tick__Fv(); }

void load_floor_sound_bank(s32 arg0) {
    s32 temp_r0;
    s32 temp_r31;

    if (arg0 >= 0) {
        temp_r0 = arg0 * 4;
        temp_r31 = M2C_FIELD(((u8 *)(lbl_8044C8D0) + temp_r0), s32 *, 0);
        if (temp_r31 >= 0) {
            if (arg0 < 0x24) {
                ((M2C_UNK (*)(void *, f32))apply_clamped_field_27c__6TLobbyFv)((void *) (lbl_8044C960), (f32) (M2C_FIELD(((u8 *)(lbl_8044C960) + temp_r0), f32 *, 0)));
            }
            validate_and_set_selection__6TLobbyFPvi((void *) (lbl_80514F64), (int) (temp_r31));
            do {
                run_disk_error_check__6TLobbyFv();
                TLobby__sub_803CB81C();
                run_frame__6TLobbyFv();
            } while (is_ready__6TLobbyFPv((void *) (lbl_80514F64)) == 0);
            TLobby__sub_80226B64((int) (0));
        }
    }
}

typedef char RecoveredGlobal_8022804C_lbl_80514F64_size[sizeof(RecoveredGlobal_8022804C_lbl_80514F64) == 0xC3C ? 1 : -1];
void TLobby__sub_8022804C(void) {
    M2C_UNK *var_r3;
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_8022804C_lbl_80514F64 *)&lbl_80514F64).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_8022804C_lbl_80514F64 *)&lbl_80514F64).value);
    TLobby__sub_802401C8((void *) (&(*(RecoveredGlobal_8022804C_lbl_80514F64 *)&lbl_80514F64).value));
}

typedef char RecoveredGlobal_80228074_lbl_80514F64_size[sizeof(RecoveredGlobal_80228074_lbl_80514F64) == 0xC3C ? 1 : -1];
void update_global_sound_frame(void) {
    update_sound_frame((void *) (&(*(RecoveredGlobal_80228074_lbl_80514F64 *)&lbl_80514F64).value));
}

typedef char RecoveredGlobal_8022809C_lbl_80514F64_size[sizeof(RecoveredGlobal_8022809C_lbl_80514F64) == 0xC3C ? 1 : -1];
void TLobby__sub_8022809C(void) {
    reset_sound_state__6TLobbyFPv((void *) (&(*(RecoveredGlobal_8022809C_lbl_80514F64 *)&lbl_80514F64).value));
}

typedef char RecoveredGlobal_802280C4_lbl_80514F64_size[sizeof(RecoveredGlobal_802280C4_lbl_80514F64) == 0xC3C ? 1 : -1];
void wait_for_sound_init__6TLobbyFv(void) {
    init_sound_aux_effects((void *) (&(*(RecoveredGlobal_802280C4_lbl_80514F64 *)&lbl_80514F64).value));
    validate_and_set_selection__6TLobbyFPvi((void *) (&(*(RecoveredGlobal_802280C4_lbl_80514F64 *)&lbl_80514F64).value), (int) (0));
    do {
        TLobby__sub_803382E4();
        run_disk_error_check__6TLobbyFv();
        TLobby__sub_803CB81C();
        render_tick__Fv();
    } while (is_sound_enabled() == 0);
}

void TLobby__sub_80228118(void) {
    __register_global_object(reset_sound_owner_state(((char *)&lbl_80514F64)), (void *)TLobby__sub_80240808, lbl_80514F58);
}

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
    }
}

void set_area__6TLobbyFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = get_floor_map_terrain(M2C_FIELD(arg0, s32 *, 0xC));
}

#pragma push
#pragma fp_contract on
s32 select_area_entrance(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0x11) {
        return 4;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) & 1) {
        return 2;
    }
    if ((get_instance__6TLobbyFv() == 0) && (get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 0)) == 0xD)) {
        switch (get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 4))) {
        case 8:
        case 9:
        case 10:
            return 1;
        default:
            return 0;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 0) {
        return 1;
    }
    return (temp_r0 < 0) ? 0 : 4;
}
#pragma pop

typedef char RecoveredGlobal_80228634_lbl_804CBE98_size[sizeof(RecoveredGlobal_80228634_lbl_804CBE98) == 0x1B0 ? 1 : -1];
void run_area_scene_cleanup(u8 *arg0) {
    s32 sp8;
    M2C_UNK (*var_r12)(s32);
    s32 *var_r4;
    s32 var_r3;
    u8 *var_r31;
    var_r4 = (s32 *)(&sp8);
    var_r31 = (u8 *)(arg0);
    var_r3 = M2C_FIELD(arg0, s32 *, 4);
    if (lookup_scene_object__6TLobbyFPv(var_r3, var_r4) != 0) {
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 += sp8 * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    } else {
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 += M2C_FIELD(var_r31, s32 *, 4) * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    }
    M2C_FIELD(var_r31, s32 *, 4) = 0;
    M2C_FIELD(var_r31, s32 *, 8) = 0;
    M2C_FIELD(var_r31, s32 *, 0xC) = 0;
}

typedef char RecoveredGlobal_80228754_lbl_804CBE98_size[sizeof(RecoveredGlobal_80228754_lbl_804CBE98) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_802286C4_lbl_804CBE98_size[sizeof(RecoveredGlobal_802286C4_lbl_804CBE98) == 0x1B0 ? 1 : -1];
void load_area_scene_and_init(u8 *arg0) {
    s32 sp8;
    M2C_UNK (*var_r12)(s32);
    s32 *var_r4;
    s32 var_r3;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    var_r3 = M2C_FIELD(arg0, s32 *, 4);
    set_current_floor_area((int) (var_r3));
    var_r3 = M2C_FIELD(var_r31, s32 *, 0x10);
    set_scene__6TSceneFi((int) (var_r3));
    var_r3 = M2C_FIELD(var_r31, s32 *, 4);
    var_r4 = (s32 *)(&sp8);
    if (lookup_scene_object__6TLobbyFPv(var_r3, var_r4) != 0) {
        var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 += sp8 * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 4);
        var_r12(var_r3);
        return;
    }
    var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
    var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
    var_r3 += M2C_FIELD(var_r31, s32 *, 4) * 0xC;
    var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 4);
    var_r12(var_r3);
}

void promote_area_floor(u8 *arg0) {
    s32 sp8;
    M2C_UNK (*var_r12)(s32);
    s32 *var_r4;
    s32 var_r3;
    u8 *var_r31;
    var_r4 = (s32 *)(&sp8);
    var_r31 = (u8 *)(arg0);
    var_r3 = M2C_FIELD(arg0, s32 *, 4);
    if (lookup_scene_object__6TLobbyFPv(var_r3, var_r4) != 0) {
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 += sp8 * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    } else {
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 += M2C_FIELD(var_r31, s32 *, 4) * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    }
    M2C_FIELD(var_r31, s32 *, 0) = (s32) M2C_FIELD(var_r31, s32 *, 4);
    M2C_FIELD(var_r31, s32 *, 4) = (s32) M2C_FIELD(var_r31, s32 *, 0xC);
    M2C_FIELD(var_r31, s32 *, 0x10) = (s32) M2C_FIELD(var_r31, s32 *, 0x18);
    reset_story_select_state__6TLobbyFv();
}

typedef char RecoveredGlobal_802287F0_lbl_80515BA0_size[sizeof(RecoveredGlobal_802287F0_lbl_80515BA0) == 0x28 ? 1 : -1];
s32 init_range_zero_global__6TLobbyFv(void) { return init_range_zero__6TLobbyFPv((void*)((s32) &lbl_80515BA0.value)); }

s32 init_range_zero__6TLobbyFPv(void* arg0) {
    init_range__6TLobbyFPvi(arg0, 0);
    return (s32)arg0;
}

struct O_80228A74;

#pragma push
#pragma opt_propagation off
void TLobby__sub_8022884C(L_8022884C *self) {
    s32 off;
    s32 i;
    s32 t;
    i = 0;
    off = 0;
    while (i < self->count) {
        t = off + 0x1c;
        debug_printf_at((self->hi << 16) | (self->lo + i), (u8 *)self + t);
        i++;
        off += 0x20;
    }
}
#pragma pop

void tokenize_args__6TLobbyFPvPv(O_80228A74 *self, char *s) {
    char *start;
    s32 quoted;
    clear_work_buffer((u8 *)self);
    start = s;
    quoted = 0;
    for (;;) {
        switch (*s) {
        case 0:
            add_token__6TLobbyFPvPv(self, start);
            return;
        case '"':
            if (quoted) {
                quoted = 0;
                *s = 0;
                s++;
            } else {
                s++;
                quoted = 1;
                start = s;
            }
            break;
        case '\t':
        case '\n':
            if (quoted) {
                s++;
            } else {
                *s = 0;
                s++;
                add_token__6TLobbyFPvPv(self, start);
                start = s;
            }
            break;
        default:
            s++;
            break;
        }
    }
}

void parse_csv_line__6TLobbyFPvPv(O_80228A74 *self, char *s) {
    char *start;
    s32 quoted;
    clear_work_buffer((u8 *)self);
    start = s;
    quoted = 0;
    for (;;) {
        switch (*s) {
        case 0:
            add_token__6TLobbyFPvPv(self, start);
            return;
        case '"':
            if (quoted) {
                quoted = 0;
                *s = 0;
                s++;
            } else {
                s++;
                quoted = 1;
                start = s;
            }
            break;
        case '\t':
        case '\n':
        case ',':
            if (quoted) {
                s++;
            } else {
                *s = 0;
                s++;
                add_token__6TLobbyFPvPv(self, start);
                start = s;
            }
            break;
        default:
            s++;
            break;
        }
    }
}

void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src) {
    strcpy(self->names[((P_80228A74 *)self)->count++], src);
}

void clear_work_buffer(u8 *arg0) {
    memset((void *)(arg0 + 0x1C), (int)(0), (int)(0x1000));
    M2C_FIELD(arg0, s32 *, 0x109C) = 0;
}

extern M2C_UNK lbl_804CC048[];

void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC048;
    M2C_FIELD(arg0, void **, 0x10A0) = arg2;
    M2C_FIELD(arg0, void **, 0x10A4) = arg3;
    memset((void *)((void *)((char *)arg0 + 28)), (int)(0), (int)(4096));
    M2C_FIELD(arg0, u32 *, 0x109C) = 0;
    return arg0;
}
void trim_whitespace__6TLobbyFPv(char *s) {
    s32 len = strlen(s);
    s32 i;
    for (i = 0; i <= len && ((u8 *)s)[i] <= ' '; i++) {
    }
    if (i > len) {
        strcpy(s, lbl_805DC788);
    } else {
        for (; ((u8 *)s)[len] <= ' '; len--) {
            s[len] = 0;
        }
        strcpy(s, s + i);
    }
}

}
