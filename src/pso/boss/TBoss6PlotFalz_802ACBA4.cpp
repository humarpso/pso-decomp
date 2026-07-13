#include "types.h"

extern "C" {

void free_all__14TBoss6PlotFalzFv(void);
int free_resources__10TBoss6TubeFv(void);
int TLobby__sub_8001FE7C(void*, void*);
int TItemEffOrgaFlowShot__sub_80357204(void);
int free_data__10TBoss6RockFv(void);
int free_global_instance__14TBoss4DarkFalzFv(void);

    extern int lbl_805D66E8;
void free_all__14TBoss6PlotFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); free_resources__10TBoss6TubeFv(); free_data__10TBoss6RockFv(); TItemEffOrgaFlowShot__sub_80357204(); TLobby__sub_8001FE7C((void*)(lbl_805D66E8), (void*)1); lbl_805D66E8 = 0; }

}
