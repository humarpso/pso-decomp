#include "types.h"

extern "C" {

int get_result_entry__18TChallenge4PResultFPv(void* p);
int get_player_rank__18TChallenge4PResultFPv(void* p);
int get_field_340__18TChallenge4PResultFPv(void* p);
int get_player_result__18TChallenge4PResultFPv(void* p);
int TObjPlayer__sub_801BF460(void*);
int TObjPlayer__sub_801BF47C(void*);
int TObjPlayer__sub_801BF488(void*);
int TObjPlayer__sub_801BF4A0(void*);

int get_result_entry__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF460((char*)p + 0x340); }
int get_player_rank__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF47C((char*)p + 0x340); }
int get_field_340__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF488((char*)p + 0x340); }
int get_player_result__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF4A0((char*)p + 0x340); }

}
