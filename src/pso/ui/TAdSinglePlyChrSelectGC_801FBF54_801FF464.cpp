#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct M2CCopy_FC0 { u8 bytes[0xfc0]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off

struct M2CCopy_C0
{
  u8 bytes[0xc0];
};

extern "C" {
u8 *TAdSinglePlyChrSelectGC__sub_801FFC74(u8 *arg0, u8 *arg1);
s32 is_technique_ready__8TTecCtrlFv();
s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_card_window__17TWindowSubComCardFUi(u32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32, u16);
s32 TLobby__sub_8030A770(void);
M2C_UNK TCameraCtrl__sub_8006B324();
u32 get_player_by_client_id(s32);
s32 setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK copy_card__17TWindowSubComCardFiPv(int, int);
s32 TAdSinglePlyChrSelectGC__sub_801FFCFC(s32 arg0, s32 arg1);
void *memset(void *, int, unsigned long);
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
void clear_load_buffers__23TAdSinglePlyChrSelectGCFv(void);
s32 get_main_phase();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
u32 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u32 alloc__22TQuestVmDownLoadServerFPv(u32);
M2C_UNK disconnect_protocol__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 get_ptr_4__10TObjPlayerFPv(void *);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
u32 get_load_result__15TAdPlayerLoadGCFv(int);
s32 TAdPlayerLoadGC__sub_801E1944(s32, void *, u32, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, void *);
M2C_UNK render_tick__Fv();
M2C_UNK copy_card_window_data();
M2C_UNK register_callback__23TAdSinglePlyChrSelectGCFis(u8 *, s16);
u8 *init_char_slots__23TAdSinglePlyChrSelectGCFi();
u8 *TAdSinglePlyChrSelectGC__sub_801FCD04(u32);
u8 *TAdSinglePlyChrSelectGC__sub_801FCD3C(u32);
M2C_UNK render_frame__23TAdSinglePlyChrSelectGCFv();
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(u8 *, s32, u8 *, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK increment_counter__23TAdSinglePlyChrSelectGCFv();
M2C_UNK decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(u8 *);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
M2C_UNK update_play_time__23TAdSinglePlyChrSelectGCFv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
M2C_UNK set_global_flags__23TAdSinglePlyChrSelectGCFi(int);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
int clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(void *);
s32 fn_80203284();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
M2C_UNK sync_char_select_state__10TObjPlayerFv();
M2C_UNK memcpy(s32, s32, u32);
void *memset(void *, int, unsigned long);
extern u8 lbl_804C88C0[];
extern s32 lbl_80513910[];
extern s32 lbl_805D55C0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 TAdSinglePlyChrSelectGC__sub_801FF5E4(s32 arg0);
}

extern "C" {

s32 init__23TAdSinglePlyChrSelectGCFv(void);
s32 load_and_verify_data(s32 arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF98(s32);
M2C_UNK prepare_save_data__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_play_time__23TAdSinglePlyChrSelectGCFv();
u32 TAdSinglePlyChrSelectGC__sub_80201204(u32 *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
u32 get_player_by_client_id(s32);
M2C_UNK __dl__FPv(u32 *);
u32 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK copy_card_window_data();
s32 fn_80203284();
s32 get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
M2C_UNK init_battle_selection__10TObjPlayerFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_timestamped_data();
u32 *init_windows__23TAdSinglePlyChrSelectGCFi();
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK memcpy(s32, s32, u32);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);

extern s32 lbl_805D53A0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;

s32 init__23TAdSinglePlyChrSelectGCFv(void) {
    init_slots__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U)) {
        if ((get_player_by_client_id(lbl_805D53A0) != 0U) && (is_technique_ready__8TTecCtrlFv() == 0) && (fn_80203284() != 1)) {
            init_battle_selection__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
        }
        clear_flags__23TAdSinglePlyChrSelectGCFi(3);
        update_play_time__23TAdSinglePlyChrSelectGCFv();
        copy_card_window_data();
        prepare_save_data__23TAdSinglePlyChrSelectGCFv();
    }
    return 0xFFFF0000;
}

extern s32 lbl_80513910[];
extern s32 lbl_805D5F68;
extern s32 lbl_805D5F98;

s32 setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv(void) {
  u32 temp_r3;
  u32 var_r31;
  u8 *temp_r3_2;
  init_slots__23TAdSinglePlyChrSelectGCFv();
  TCameraCtrl__sub_8006B324();
  var_r31 = 0;
  do
  {
    if (((get_player_by_client_id((s32)((int) var_r31)) != 0U) && (((volatile long)is_technique_ready__8TTecCtrlFv()) == 0)) && (TLobby__sub_8030A770() == 0))
    {
      temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
      if (temp_r3 != 0U)
      {
        try_assign_battle_ctrl__10TObjPlayerFiUs((s32) temp_r3, (u16) var_r31);
      }
      temp_r3_2 = (u8 *) get_card_window__17TWindowSubComCardFUi(var_r31);
      if (temp_r3_2 != 0)
      {
        update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(temp_r3_2);
      }
    }
    clear_flags__23TAdSinglePlyChrSelectGCFi((M2C_UNK)(3));
    var_r31 += 1;
  }
  while (((s32) var_r31) < 4);
  return 0xFFFF0000;
}

void clear_load_buffers__23TAdSinglePlyChrSelectGCFv(void) {
    if (lbl_805D5F58 != 0) {
        memset((void *)lbl_805D5F58, 0, 0x1156C);
        memset((void *)lbl_805D5F60, 0, 0x41C);
        memset((void *)lbl_805D5F64, 0, 0x2370);
    }
}

s32 TAdSinglePlyChrSelectGC__sub_801FF5E4(s32 arg0) {
    s32 ret;
    u8 *obj;
    u32 buf;
    s32 t;
    s32 i;
    s32 p;
    u32 size;
    if (get_main_phase() == 0xE || (get_global_state__14TOKeyMachine01Fv() == 0xF && arg0 != 1) ||
        lbl_805D55C0 == 1 || is_technique_ready__8TTecCtrlFv() != 0 || fn_80203284() == 1) {
        return 0xFFFF0000;
    }
    init_slots__23TAdSinglePlyChrSelectGCFv();
    ret = 0xFFFF0000;
    if (lbl_805D5F60 != 0 && lbl_805D5F64 != 0 && lbl_805D5F58 != 0) {
        lbl_805D5F7C = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0xFFFF0000;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        if (arg0 != 1) {
            arg0 = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F7C, lbl_804C88C0);
            if (arg0 != 0) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return arg0;
            }
            size = lbl_805D5F84 << 13;
            buf = alloc__22TQuestVmDownLoadServerFPv(size);
            memset((void *)buf, 0, size);
            while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, lbl_804C88C0, buf, lbl_805D5F84) != 0) {
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (buf != 0) {
                        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                    }
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (buf != 0) {
                        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                    }
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            t = get_field_118__22TAdEnterSerialAccessGCFv();
            lbl_80513910[1] = t;
            lbl_80513910[0] = t;
            obj = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
            if (obj != NULL) {
                obj = init_char_slots__23TAdSinglePlyChrSelectGCFi();
            }
            memset(obj, 0, 0x1156C);
            memcpy((s32)obj, buf + 0x2048, 0x1156C);
            decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(obj);
            ret = compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(TAdSinglePlyChrSelectGC__sub_801FCD3C((u32)obj), get_card_window__17TWindowSubComCardFUi(0xFFFF), obj, get_instance__23TAdSinglePlyChrSelectGCFv());
            if (ret != 7) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                if (obj != NULL) {
                    register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
                }
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return ret;
            }
            if (*(u32 *)(lbl_805D5F64 + 0x14) != *(u32 *)(TAdSinglePlyChrSelectGC__sub_801FCD3C((u32)obj) + 0x14)) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                if (obj != NULL) {
                    register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
                }
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 2;
            }
            if (buf != 0) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            }
            if (obj != NULL) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0 && (ret = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C)) == 0) {
            sync_char_select_state__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
            update_play_time__23TAdSinglePlyChrSelectGCFv();
            increment_counter__23TAdSinglePlyChrSelectGCFv();
            switch (get_main_phase()) {
            case 0xF:
                set_global_flags__23TAdSinglePlyChrSelectGCFi(1);
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), lbl_805D5F60, 0x41C);
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), lbl_805D5F64, 0x2370);
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
                    p = get_ptr_4__10TObjPlayerFPv(TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58));
                    for (i = 0; i < 30; i++) {
                        clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv((void *)p);
                        p += 0x1C;
                    }
                    *TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58) = 0;
                    memset(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58) + 0x250, 0, 0x12C0);
                    *(s32 *)(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58) + 0x248) = 0;
                    *(s32 *)(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58) + 0x24C) = 0;
                }
                *(s32 *)(TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58) + 0x36C) = 0;
                break;
            default:
                copy_card_window_data();
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), lbl_805D5F60, 0x41C);
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), lbl_805D5F64, 0x2370);
                break;
            }
            t = get_field_118__22TAdEnterSerialAccessGCFv();
            lbl_80513910[1] = t;
            lbl_80513910[0] = t;
            encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)lbl_805D5F58, lbl_80513910);
            save_character_file__23TAdSinglePlyChrSelectGCFi(1);
            while (TAdSinglePlyChrSelectGC__sub_801FDA4C() != 0) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            lbl_805D5F78 = 6;
            while (get_instance__15TAdPlayerLoadGCFv() != 0) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            if (get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF81 || get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF83) {
                ret = 1;
            } else {
                ret = 7;
            }
        }
    }
    return ret;
}

s32 load_and_verify_data(s32 arg0) {
    s32 temp_r3;
    u32 *var_r31;
    u32 temp_r30;

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    temp_r3 = get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
    lbl_80513910[1] = temp_r3;
    lbl_80513910[0] = temp_r3;
    memcpy(lbl_805D5F68, lbl_805D5F98 + 0x2048, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFF98(lbl_805D5F68);
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (var_r31 != NULL) {
        var_r31 = init_windows__23TAdSinglePlyChrSelectGCFi();
    }
    TAdSinglePlyChrSelectGC__sub_801FFC74((u8 *)(var_r31), (u8 *)(lbl_805D5F68));
    temp_r30 = *var_r31;
    *var_r31 = 0U;
    if (temp_r30 != TAdSinglePlyChrSelectGC__sub_80201204(var_r31, 0xE28C)) {
        if (arg0 != 0) {
            __dl__FPv(var_r31);
            return 0;
        }
        init_timestamped_data();
        goto block_9;
    }
    if (arg0 != 0) {
        __dl__FPv(var_r31);
        return 1;
    }
    set_save_slot__23TAdSinglePlyChrSelectGCFi(1);
block_9:
    __dl__FPv(var_r31);
    return 1;
}
u8 *TAdSinglePlyChrSelectGC__sub_801FFC74(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    TAdSinglePlyChrSelectGC__sub_801FFCFC((s32)((void *) (arg0 + 4)), (s32)((void *) (arg1 + 4)));
    *(M2CCopy_FC0 *)((s32) (arg0 + 0xD2C0) + 4) = *(const M2CCopy_FC0 *)((s32) (arg1 + 0xD2C0) + 4);
    M2C_FIELD(arg0, s32 *, 0xE284) = (s32) M2C_FIELD(arg1, s32 *, 0xE284);
    M2C_FIELD(arg0, s32 *, 0xE288) = (s32) M2C_FIELD(arg1, s32 *, 0xE288);
    return arg0;
}
typedef struct M2CCopy_C0 M2CCopy_C0;
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
s32 TAdSinglePlyChrSelectGC__sub_801FFCFC(s32 arg0, s32 arg1) {
  u32 end;
  u32 var_r30;
  s32 var_r29;
  *((M2CCopy_C0 *) arg0) = *((const M2CCopy_C0 *) arg1);
  var_r30 = arg0 + 0xC0;
  end = arg0;
  end = end + 0xD2C0;
  var_r29 = arg1 + 0xC0;
  do
  {
    copy_card__17TWindowSubComCardFiPv((int) var_r30, (int) var_r29);
    var_r30 += 0x100;
    var_r29 += 0x100;
  }
  while (var_r30 < end);
  return arg0;
}

}
