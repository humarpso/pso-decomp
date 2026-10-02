#include "types.h"

extern "C" {
s32 obj_isState2_324(void *);
u8 *get_player_data__10TObjPlayerFi(int);
s32 get_game_mode__6TLobbyFv();
s32 is_valid_target__9TObjEneDDFPv(void *);
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805D9FF4;
u8 *TObjEneRe2Flower__sub_800C3BAC(u8 *arg0);
}

extern "C" {

int get_flag_11__16TObjEneRe2FlowerFPv(void* p);
void TObjEneRe2Flower__sub_800C3BA8(void);

void TObjEneRe2Flower__sub_800C3BA8(void) {  }
u8 *TObjEneRe2Flower__sub_800C3BAC(u8 *arg0) {
    s32 n;
    u8 *result;
    u8 *p;
    s32 i;
    result = NULL;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_valid_target__9TObjEneDDFPv(p) != 0 && obj_isState2_324(p) == 0) {
            result = p;
            break;
        }
    }
    if (is_valid_target__9TObjEneDDFPv(result) != 0 && horizontal_distance_squared(arg0 + 0x38, result + 0x38) < lbl_805D9FF4) {
        return result;
    }
    return NULL;
}

}
