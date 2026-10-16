#include "pso/enemy/EnemyFactoryTables.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/boss/TBoss3VoloptMonitor.h"
#include "pso/boss/TBoss3VoloptP01.h"
#include "pso/boss/TBoss7DeRolLeC.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/enemy/TObjEneBm3FlyNest.h"
#include "pso/enemy/TObjEneBm5GibonU.h"
#include "pso/enemy/TObjEneBm5Wolf.h"
#include "pso/enemy/TObjEneBm9Mericarol.h"
#include "pso/enemy/TObjEneDarkGunCenter.h"
#include "pso/enemy/TObjEneDimedian.h"
#include "pso/enemy/TObjEneGibbles.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEneMe1Canadin.h"
#include "pso/enemy/TObjEneMe1CanadinLeader.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/enemy/TObjEneMoja.h"
#include "pso/enemy/TObjEneNanoDrago.h"
#include "pso/enemy/TObjEneRe2Flower.h"
#include "pso/enemy/TObjEneShark.h"
#include "pso/misc/TOCtrlDubchik.h"
#include "pso/npc/TObjNpcCloakroomBase.h"
#include "pso/object/TObjGrass.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void* create__12TBoss1DragonFl(void* placement);
void* create__13TBoss2DeRolLeFPv(void* placement);
void* TBoss3VoloptCore__sub_800407E0(void* placement);
void* TBoss3Volopt__sub_80047DD4(void* placement);
void* create__14TBoss4DarkFalzFl(void* placement);
void* create__13TBoss5GryphonFPv(void* placement);
void* create__18TObjEneBalClawBodyFPv(void* placement);
void* create__18TObjEneBalClawClawFv(void* placement);
void* create__16TObjEneRe7BeruraFv(void* placement);
void* create__17TObjEneDf2BringerFv(void* placement);
void* create_ene_saver(void* placement);
void* create__13TObjEneMe1GeeFPv(void* placement);
void* create__15TObjEneGyaranzoFPv(void* placement);
void* TObjEneMerillLia__create(void* placement);
void* create__14TObjEnePanarmsFl(void* placement);
void* TObjEneMe3ShinowaMirage__sub_800E7B74(void* placement);
void* create__12TObjEneSlimeFl(void* placement);
void* create__18TObjEneRe4SorcererFv(void* placement);
void* create_real__16TObjEneMe3StelthFPv(void* placement);
void* TObjNpcAHM01__create(void* placement);
void* TObjNpcARM00__create(void* placement);
void* TObjNpcARW00__create(void* placement);
void* create__14TObjNpcBringerFPv(void* placement);
void* TObjNpcConnoisseur__create(void* placement);
void* TObjNpcExpertBase__create(void* placement);
void* TObjNpcFemaleBase__create(void* placement);
void* TObjNpcFemaleChild__create(void* placement);
void* TObjNpcFemaleDwarf__create(void* placement);
void* TObjNpcFemaleFat__create(void* placement);
void* TObjNpcFemaleMacho__create(void* placement);
void* TObjNpcFemaleOld__create(void* placement);
void* TObjNpcFemaleTall__create(void* placement);
void* TObjNpcGovernorBase__create(void* placement);
void* TObjNpcHFW00__create(void* placement);
void* TObjNpcHFW01__create(void* placement);
void* TObjNpcHHM00__create(void* placement);
void* TObjNpcHRM00__create(void* placement);
void* TObjNpcHRM01__create(void* placement);
void* TObjNpcLappy__create(void* placement);
void* TObjNpcMaleBase__create(void* placement);
void* TObjNpcMaleChild__create(void* placement);
void* TObjNpcMaleDwarf__create(void* placement);
void* TObjNpcMaleFat__create(void* placement);
void* TObjNpcMaleMacho__create(void* placement);
void* TObjNpcMaleOld__create(void* placement);
void* TObjNpcMaleTall__create(void* placement);
void* create__11TObjNpcMojaFPv(void* placement);
void* TObjNpcNFM00__create(void* placement);
void* TObjNpcNFM01__create(void* placement);
void* TObjNpcNFW00__create(void* placement);
void* TObjNpcNFW01__create(void* placement);
void* TObjNpcNHW00__create(void* placement);
void* TObjNpcNHW01__create(void* placement);
void* TObjNpcNurseBase__create(void* placement);
void* TObjNpcSecretaryBase__create(void* placement);
void* TObjNpcSoldierBase__create(void* placement);
void* TObjNpcSoldierMacho__create(void* placement);
void* TObjNpcKenkyu__create(void* placement);
void* TObjNpcSoutokufu__create(void* placement);
void* TObjNpcHosa__create(void* placement);
void* TObjNpcKenkyuW__create(void* placement);
void* create__14TBoss6PlotFalzFl(void* placement);
void* TObjNpcEnemy__create(void* placement);
void* TObjNpcKenkyu2__create(void* placement);
void* TObjNpcHosa2__create(void* placement);
void* TObjEneDolmOlm__create(void* placement);
void* TObjEneDellBiter__create(void* placement);
void* TObjEneDelDepth__create(void* placement);
void* TObjEneMe3SinowZoaReal__create(void* placement);
void* TObjEneRecobox__create(void* placement);
void* create__13TObjEneMorfosFv(void* placement);
void* create_variant_13__14TObjNpcNgcBaseFi(void* placement);
void* TObjNpcNgcBase__sub_80358B70(void* placement);
void* TObjNpcNgcBase__sub_80358BF8(void* placement);
void* TObjNpcNgcBase__sub_80358C80(void* placement);
void* TObjNpcNgcBase__sub_80358D08(void* placement);
void* create_variant_8__14TObjNpcNgcBaseFi(void* placement);
void* create_variant_7__14TObjNpcNgcBaseFi(void* placement);
void* create_variant_6__14TObjNpcNgcBaseFi(void* placement);
void* create_variant_5__14TObjNpcNgcBaseFi(void* placement);
void* TObjNpcNgcBase__sub_80358FB0(void* placement);
void* TObjNpcNgcBase__sub_80359038(void* placement);
void* TObjNpcNgcBase__sub_803590C0(void* placement);
void* TObjNpcNgcBase__sub_80359148(void* placement);
void* TObjNpcNgcBase__create(void* placement);
void* create_TObjEneEpsilonBody(void* placement);
void* create__14TObjEneIllGillFv(void* placement);

EnemyFactoryEntry enemy_factories_floor_00[40] = {
    { 0x0001, TObjNpcFemaleBase__create, 250000.0f, 0 },
    { 0x0002, TObjNpcFemaleChild__create, 250000.0f, 0 },
    { 0x0003, TObjNpcFemaleDwarf__create, 250000.0f, 0 },
    { 0x0004, TObjNpcFemaleFat__create, 250000.0f, 0 },
    { 0x0005, TObjNpcFemaleMacho__create, 250000.0f, 0 },
    { 0x0006, TObjNpcFemaleOld__create, 250000.0f, 0 },
    { 0x0007, TObjNpcFemaleTall__create, 250000.0f, 0 },
    { 0x0008, TObjNpcMaleBase__create, 250000.0f, 0 },
    { 0x0009, TObjNpcMaleChild__create, 250000.0f, 0 },
    { 0x000A, TObjNpcMaleDwarf__create, 250000.0f, 0 },
    { 0x000B, TObjNpcMaleFat__create, 250000.0f, 0 },
    { 0x000C, TObjNpcMaleMacho__create, 250000.0f, 0 },
    { 0x000D, TObjNpcMaleOld__create, 250000.0f, 0 },
    { 0x000E, TObjNpcMaleTall__create, 250000.0f, 0 },
    { 0x001C, TObjNpcConnoisseur__create, 250000.0f, 0 },
    { 0x0019, TObjNpcSoldierBase__create, 250000.0f, 0 },
    { 0x001A, TObjNpcSoldierMacho__create, 250000.0f, 0 },
    { 0x001B, TObjNpcGovernorBase__create, 250000.0f, 0 },
    { 0x001D, TObjNpcCloakroomBase::create, 250000.0f, 0 },
    { 0x001E, TObjNpcExpertBase__create, 250000.0f, 0 },
    { 0x001F, TObjNpcNurseBase__create, 250000.0f, 0 },
    { 0x0020, TObjNpcSecretaryBase__create, 250000.0f, 0 },
    { 0x0021, TObjNpcHHM00__create, 250000.0f, 0 },
    { 0x0022, TObjNpcNHW00__create, 250000.0f, 0 },
    { 0x0024, TObjNpcHRM00__create, 250000.0f, 0 },
    { 0x0025, TObjNpcARM00__create, 250000.0f, 0 },
    { 0x0026, TObjNpcARW00__create, 250000.0f, 0 },
    { 0x0027, TObjNpcHFW00__create, 250000.0f, 0 },
    { 0x0028, TObjNpcNFM00__create, 250000.0f, 0 },
    { 0x0029, TObjNpcNFW00__create, 250000.0f, 0 },
    { 0x002B, TObjNpcNHW01__create, 250000.0f, 0 },
    { 0x002C, TObjNpcAHM01__create, 250000.0f, 0 },
    { 0x002D, TObjNpcHRM01__create, 250000.0f, 0 },
    { 0x0030, TObjNpcHFW01__create, 250000.0f, 0 },
    { 0x0031, TObjNpcNFM01__create, 250000.0f, 0 },
    { 0x0032, TObjNpcNFW01__create, 250000.0f, 0 },
    { 0x00D0, TObjNpcKenkyu__create, 250000.0f, 0 },
    { 0x00D1, TObjNpcSoutokufu__create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_01[8] = {
    { 0x0044, TObjEneBeast::create, 250000.0f, 0 },
    { 0x0041, TObjEneLappy::create, 250000.0f, 0 },
    { 0x0042, TObjEneBm3FlyNest::create, 250000.0f, 30 },
    { 0x0043, TObjEneBm5Wolf::create, 250000.0f, 0 },
    { 0x0044, TObjEneBeast::create, 250000.0f, 0 },
    { 0x0045, TObjNpcLappy__create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_02[9] = {
    { 0x0040, TObjEneMoja::create, 250000.0f, 0 },
    { 0x0041, TObjEneLappy::create, 250000.0f, 0 },
    { 0x0042, TObjEneBm3FlyNest::create, 250000.0f, 30 },
    { 0x0043, TObjEneBm5Wolf::create, 250000.0f, 0 },
    { 0x0044, TObjEneBeast::create, 250000.0f, 0 },
    { 0x0045, TObjNpcLappy__create, 250000.0f, 0 },
    { 0x0046, create__11TObjNpcMojaFPv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_03[7] = {
    { 0x0060, TObjGrass::create, 250000.0f, 0 },
    { 0x0061, TObjEneRe2Flower::create, 250000.0f, 0 },
    { 0x0062, TObjEneNanoDrago::create, 250000.0f, 0 },
    { 0x0063, TObjEneShark::create, 250000.0f, 0 },
    { 0x0065, create__14TObjEnePanarmsFl, 250000.0f, 2 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_04[7] = {
    { 0x0060, TObjGrass::create, 250000.0f, 0 },
    { 0x0061, TObjEneRe2Flower::create, 250000.0f, 0 },
    { 0x0062, TObjEneNanoDrago::create, 250000.0f, 0 },
    { 0x0063, TObjEneShark::create, 250000.0f, 0 },
    { 0x0064, create__12TObjEneSlimeFl, 250000.0f, 4 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_05[8] = {
    { 0x0061, TObjEneRe2Flower::create, 250000.0f, 0 },
    { 0x0062, TObjEneNanoDrago::create, 250000.0f, 0 },
    { 0x0063, TObjEneShark::create, 250000.0f, 0 },
    { 0x0064, create__12TObjEneSlimeFl, 250000.0f, 4 },
    { 0x0065, create__14TObjEnePanarmsFl, 250000.0f, 2 },
    { 0x001D, TObjNpcCloakroomBase::create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floors_06_07[8] = {
    { 0x0080, TObjPlayer::create_dubchik, 250000.0f, 0 },
    { 0x0081, create__15TObjEneGyaranzoFPv, 250000.0f, 0 },
    { 0x0082, TObjEneMe3ShinowaMirage__sub_800E7B74, 250000.0f, 4 },
    { 0x0083, TObjEneMe1Canadin::create, 250000.0f, 0 },
    { 0x0084, TObjEneMe1CanadinLeader::create, 250000.0f, 8 },
    { 0x0085, TOCtrlDubchik::create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_08[8] = {
    { 0x00A0, create_ene_saver, 250000.0f, 0 },
    { 0x00A1, create__18TObjEneRe4SorcererFv, 250000.0f, 2 },
    { 0x00A5, create__16TObjEneRe7BeruraFv, 250000.0f, 0 },
    { 0x00A6, TObjEneDimedian::create, 250000.0f, 0 },
    { 0x00A7, create__18TObjEneBalClawBodyFPv, 250000.0f, 4 },
    { 0x00A8, create__18TObjEneBalClawClawFv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_09[10] = {
    { 0x00A0, create_ene_saver, 250000.0f, 0 },
    { 0x00A2, TObjPlayer::create_instance, 250000.0f, 0 },
    { 0x00A3, TObjEneDarkGunCenter::create, 250000.0f, 0 },
    { 0x00A4, create__17TObjEneDf2BringerFv, 250000.0f, 0 },
    { 0x00A6, TObjEneDimedian::create, 250000.0f, 0 },
    { 0x00A7, create__18TObjEneBalClawBodyFPv, 250000.0f, 4 },
    { 0x00A8, create__18TObjEneBalClawClawFv, 250000.0f, 0 },
    { 0x00A9, create__14TObjNpcBringerFPv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_10[11] = {
    { 0x00A1, create__18TObjEneRe4SorcererFv, 250000.0f, 2 },
    { 0x00A2, TObjPlayer::create_instance, 250000.0f, 0 },
    { 0x00A3, TObjEneDarkGunCenter::create, 250000.0f, 0 },
    { 0x00A4, create__17TObjEneDf2BringerFv, 250000.0f, 0 },
    { 0x00A5, create__16TObjEneRe7BeruraFv, 250000.0f, 0 },
    { 0x00A6, TObjEneDimedian::create, 250000.0f, 0 },
    { 0x00A7, create__18TObjEneBalClawBodyFPv, 250000.0f, 4 },
    { 0x00A8, create__18TObjEneBalClawClawFv, 250000.0f, 0 },
    { 0x00A9, create__14TObjNpcBringerFPv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_11[3] = {
    { 0x00C0, create__12TBoss1DragonFl, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_12[3] = {
    { 0x00C1, create__13TBoss2DeRolLeFPv, 250000.0f, 19 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_13[8] = {
    { 0x00C2, TBoss3Volopt::create, 250000.0f, 35 },
    { 0x00C3, TBoss3VoloptP01::create, 250000.0f, 0 },
    { 0x00C4, TBoss3VoloptCore__sub_800407E0, 250000.0f, 0 },
    { 0x00C5, TBoss3Volopt__sub_80047DD4, 250000.0f, 0 },
    { 0x00C6, TBoss3VoloptMonitor::create, 250000.0f, 0 },
    { 0x00C7, TBoss3VoloptHiraisin::create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_14[3] = {
    { 0x00C8, create__14TBoss4DarkFalzFl, 250000.0f, 512 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_31[3] = {
    { 0x00CA, create__14TBoss6PlotFalzFl, 250000.0f, 512 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_32[3] = {
    { 0x00CB, TBoss7DeRolLeC::create, 250000.0f, 47 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_33[3] = {
    { 0x00CC, TBoss8Dragon::create, 250000.0f, 5 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_15[3] = {
    { 0x0008, TObjNpcMaleBase__create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_16[8] = {
    { 0x0040, TObjEneMoja::create, 250000.0f, 0 },
    { 0x0063, TObjEneShark::create, 250000.0f, 0 },
    { 0x0060, TObjGrass::create, 250000.0f, 0 },
    { 0x0082, TObjEneMe3ShinowaMirage__sub_800E7B74, 250000.0f, 4 },
    { 0x00A0, create_ene_saver, 250000.0f, 0 },
    { 0x00A4, create__17TObjEneDf2BringerFv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_17[8] = {
    { 0x0040, TObjEneMoja::create, 250000.0f, 0 },
    { 0x0063, TObjEneShark::create, 250000.0f, 0 },
    { 0x0060, TObjGrass::create, 250000.0f, 0 },
    { 0x0082, TObjEneMe3ShinowaMirage__sub_800E7B74, 250000.0f, 4 },
    { 0x00A0, create_ene_saver, 250000.0f, 0 },
    { 0x00A4, create__17TObjEneDf2BringerFv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_18[39] = {
    { 0x0003, TObjNpcFemaleDwarf__create, 250000.0f, 0 },
    { 0x0006, TObjNpcFemaleOld__create, 250000.0f, 0 },
    { 0x0009, TObjNpcMaleChild__create, 250000.0f, 0 },
    { 0x000B, TObjNpcMaleFat__create, 250000.0f, 0 },
    { 0x000D, TObjNpcMaleOld__create, 250000.0f, 0 },
    { 0x000E, TObjNpcMaleTall__create, 250000.0f, 0 },
    { 0x001C, TObjNpcConnoisseur__create, 250000.0f, 0 },
    { 0x0019, TObjNpcSoldierBase__create, 250000.0f, 0 },
    { 0x001B, TObjNpcGovernorBase__create, 250000.0f, 0 },
    { 0x001D, TObjNpcCloakroomBase::create, 250000.0f, 0 },
    { 0x001F, TObjNpcNurseBase__create, 250000.0f, 0 },
    { 0x0020, TObjNpcSecretaryBase__create, 250000.0f, 0 },
    { 0x00F2, TObjNpcNgcBase__create, 250000.0f, 0 },
    { 0x00F3, TObjNpcNgcBase__sub_80359148, 250000.0f, 0 },
    { 0x0025, TObjNpcARM00__create, 250000.0f, 0 },
    { 0x0026, TObjNpcARW00__create, 250000.0f, 0 },
    { 0x0027, TObjNpcHFW00__create, 250000.0f, 0 },
    { 0x0028, TObjNpcNFM00__create, 250000.0f, 0 },
    { 0x00F4, TObjNpcNgcBase__sub_803590C0, 250000.0f, 0 },
    { 0x00F5, TObjNpcNgcBase__sub_80359038, 250000.0f, 0 },
    { 0x00F6, TObjNpcNgcBase__sub_80358FB0, 250000.0f, 0 },
    { 0x0031, TObjNpcNFM01__create, 250000.0f, 0 },
    { 0x00F7, create_variant_5__14TObjNpcNgcBaseFi, 250000.0f, 0 },
    { 0x00D0, TObjNpcKenkyu__create, 250000.0f, 0 },
    { 0x00D1, TObjNpcSoutokufu__create, 250000.0f, 0 },
    { 0x00D2, TObjNpcHosa__create, 250000.0f, 0 },
    { 0x00D3, TObjNpcKenkyuW__create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { 0x00F0, TObjNpcHosa2__create, 250000.0f, 0 },
    { 0x00F1, TObjNpcKenkyu2__create, 250000.0f, 0 },
    { 0x00F8, create_variant_6__14TObjNpcNgcBaseFi, 250000.0f, 0 },
    { 0x00F9, create_variant_7__14TObjNpcNgcBaseFi, 250000.0f, 0 },
    { 0x00FA, create_variant_8__14TObjNpcNgcBaseFi, 250000.0f, 0 },
    { 0x00FB, TObjNpcNgcBase__sub_80358D08, 250000.0f, 0 },
    { 0x00FC, TObjNpcNgcBase__sub_80358C80, 250000.0f, 0 },
    { 0x00FD, TObjNpcNgcBase__sub_80358BF8, 250000.0f, 0 },
    { 0x00FE, TObjNpcNgcBase__sub_80358B70, 250000.0f, 0 },
    { 0x00FF, create_variant_13__14TObjNpcNgcBaseFi, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_21[8] = {
    { 0x0085, TOCtrlDubchik::create, 250000.0f, 0 },
    { 0x0080, TObjPlayer::create_dubchik, 250000.0f, 0 },
    { 0x0081, create__15TObjEneGyaranzoFPv, 250000.0f, 0 },
    { 0x0043, TObjEneBm5Wolf::create, 250000.0f, 0 },
    { 0x0065, create__14TObjEnePanarmsFl, 250000.0f, 2 },
    { 0x00A0, create_ene_saver, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_22[8] = {
    { 0x0085, TOCtrlDubchik::create, 250000.0f, 0 },
    { 0x0080, TObjPlayer::create_dubchik, 250000.0f, 0 },
    { 0x0043, TObjEneBm5Wolf::create, 250000.0f, 0 },
    { 0x0065, create__14TObjEnePanarmsFl, 250000.0f, 2 },
    { 0x00A0, create_ene_saver, 250000.0f, 0 },
    { 0x00A1, create__18TObjEneRe4SorcererFv, 250000.0f, 2 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floors_19_20[9] = {
    { 0x0041, TObjEneLappy::create, 250000.0f, 0 },
    { 0x0040, TObjEneMoja::create, 250000.0f, 0 },
    { 0x0060, TObjGrass::create, 250000.0f, 0 },
    { 0x0061, TObjEneRe2Flower::create, 250000.0f, 0 },
    { 0x0042, TObjEneBm3FlyNest::create, 250000.0f, 30 },
    { 0x00A6, TObjEneDimedian::create, 250000.0f, 0 },
    { 0x00A5, create__16TObjEneRe7BeruraFv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floors_23_24_25_26_27[12] = {
    { 0x00D4, create_real__16TObjEneMe3StelthFPv, 250000.0f, 4 },
    { 0x00D5, TObjEneMerillLia__create, 250000.0f, 0 },
    { 0x00D6, TObjEneBm9Mericarol::create, 250000.0f, 0 },
    { 0x00D7, TObjEneBm5GibonU::create, 250000.0f, 0 },
    { 0x00D8, TObjEneGibbles::create, 250000.0f, 0 },
    { 0x00D9, create__13TObjEneMe1GeeFPv, 250000.0f, 0 },
    { 0x00DA, TObjEneMe1GiGue::create, 250000.0f, 0 },
    { 0x00F6, TObjNpcNgcBase__sub_80358FB0, 250000.0f, 0 },
    { 0x00FD, TObjNpcNgcBase__sub_80358BF8, 250000.0f, 0 },
    { 0x0045, TObjNpcLappy__create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_34[9] = {
    { 0x00DD, TObjEneDolmOlm__create, 250000.0f, 0 },
    { 0x00DF, TObjEneRecobox__create, 250000.0f, 0 },
    { 0x00D5, TObjEneMerillLia__create, 250000.0f, 0 },
    { 0x00D7, TObjEneBm5GibonU::create, 250000.0f, 0 },
    { 0x00D9, create__13TObjEneMe1GeeFPv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { 0x00FD, TObjNpcNgcBase__sub_80358BF8, 250000.0f, 0 },
    { 0x0045, TObjNpcLappy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_35[11] = {
    { 0x00D6, TObjEneBm9Mericarol::create, 250000.0f, 0 },
    { 0x00D8, TObjEneGibbles::create, 250000.0f, 0 },
    { 0x00DA, TObjEneMe1GiGue::create, 250000.0f, 0 },
    { 0x00DF, TObjEneRecobox__create, 250000.0f, 0 },
    { 0x00DC, TObjEneDellBiter__create, 250000.0f, 0 },
    { 0x00E0, create_TObjEneEpsilonBody, 250000.0f, 4 },
    { 0x0061, TObjEneRe2Flower::create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { 0x00F6, TObjNpcNgcBase__sub_80358FB0, 250000.0f, 0 },
    { 0x00E1, create__14TObjEneIllGillFv, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floors_28_29[9] = {
    { 0x00DD, TObjEneDolmOlm__create, 250000.0f, 0 },
    { 0x00DE, create__13TObjEneMorfosFv, 250000.0f, 0 },
    { 0x00DF, TObjEneRecobox__create, 250000.0f, 0 },
    { 0x00E0, TObjEneMe3SinowZoaReal__create, 250000.0f, 0 },
    { 0x00DB, TObjEneDelDepth__create, 250000.0f, 0 },
    { 0x00DC, TObjEneDellBiter__create, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { 0x00F4, TObjNpcNgcBase__sub_803590C0, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry enemy_factories_floor_30[3] = {
    { 0x00C0, create__13TBoss5GryphonFPv, 250000.0f, 0 },
    { 0x0033, TObjNpcEnemy__create, 250000.0f, 0 },
    { -1, 0, 250000.0f, 0 },
};

EnemyFactoryEntry* enemy_factory_area_table[36] = {
    enemy_factories_floor_00,
    enemy_factories_floor_01,
    enemy_factories_floor_02,
    enemy_factories_floor_03,
    enemy_factories_floor_04,
    enemy_factories_floor_05,
    enemy_factories_floors_06_07,
    enemy_factories_floors_06_07,
    enemy_factories_floor_08,
    enemy_factories_floor_09,
    enemy_factories_floor_10,
    enemy_factories_floor_11,
    enemy_factories_floor_12,
    enemy_factories_floor_13,
    enemy_factories_floor_14,
    enemy_factories_floor_15,
    enemy_factories_floor_16,
    enemy_factories_floor_17,
    enemy_factories_floor_18,
    enemy_factories_floors_19_20,
    enemy_factories_floors_19_20,
    enemy_factories_floor_21,
    enemy_factories_floor_22,
    enemy_factories_floors_23_24_25_26_27,
    enemy_factories_floors_23_24_25_26_27,
    enemy_factories_floors_23_24_25_26_27,
    enemy_factories_floors_23_24_25_26_27,
    enemy_factories_floors_23_24_25_26_27,
    enemy_factories_floors_28_29,
    enemy_factories_floors_28_29,
    enemy_factories_floor_30,
    enemy_factories_floor_31,
    enemy_factories_floor_32,
    enemy_factories_floor_33,
    enemy_factories_floor_34,
    enemy_factories_floor_35,
};
}
