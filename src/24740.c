#include "common.h"
#include "24740.h"

INCLUDE_ASM(s32, "24740", func_80023B40);

INCLUDE_ASM(s32, "24740", LoadFormBinary);

INCLUDE_ASM(s32, "24740", func_80023FC8);

INCLUDE_ASM(s32, "24740", func_80024198);

INCLUDE_ASM(s32, "24740", func_80024464);

INCLUDE_ASM(s32, "24740", func_800244C4);

INCLUDE_ASM(s32, "24740", func_8002451C);

INCLUDE_ASM(s32, "24740", func_8002456C);

INCLUDE_ASM(s32, "24740", func_80024754);

INCLUDE_ASM(s32, "24740", func_800247FC);

INCLUDE_ASM(s32, "24740", func_800253EC);

INCLUDE_ASM(s32, "24740", func_800255DC);

INCLUDE_ASM(s32, "24740", func_80025658);

INCLUDE_ASM(s32, "24740", func_8002578C);

INCLUDE_ASM(s32, "24740", func_80025798);

INCLUDE_ASM(s32, "24740", func_800257E4);

INCLUDE_ASM(s32, "24740", func_80025830);

INCLUDE_ASM(s32, "24740", func_8002587C);

INCLUDE_ASM(s32, "24740", func_800258EC);

INCLUDE_ASM(s32, "24740", func_80025930);

INCLUDE_ASM(s32, "24740", func_800259D0);

INCLUDE_ASM(s32, "24740", func_80025A7C);

INCLUDE_ASM(s32, "24740", func_80025AD4);

INCLUDE_ASM(s32, "24740", func_80025B34);

INCLUDE_ASM(s32, "24740", func_80025BB8);

INCLUDE_ASM(s32, "24740", func_80025C20);

INCLUDE_ASM(s32, "24740", func_80025CA8);

INCLUDE_ASM(s32, "24740", func_80025D18);

INCLUDE_ASM(s32, "24740", func_80025D40);

INCLUDE_ASM(s32, "24740", func_80025D90);

INCLUDE_ASM(s32, "24740", func_80025DD8);

INCLUDE_ASM(s32, "24740", func_80025E48);

INCLUDE_ASM(s32, "24740", func_80025E70);

INCLUDE_ASM(s32, "24740", func_80025EB4);

INCLUDE_ASM(s32, "24740", func_80025F10);

INCLUDE_ASM(s32, "24740", func_80025F38);

INCLUDE_ASM(s32, "24740", func_80025F60);

INCLUDE_ASM(s32, "24740", func_80025FC8);

INCLUDE_ASM(s32, "24740", func_80025FF0);

INCLUDE_ASM(s32, "24740", func_80026018);

INCLUDE_ASM(s32, "24740", func_80026040);

INCLUDE_ASM(s32, "24740", func_80026174);

INCLUDE_ASM(s32, "24740", func_80026404);

void func_800264F8(s16 arg0, s16 arg1, f32 arg2, char* arg3, char* arg4, s32 arg5) { //arg4 is char array string ptr?
    s16 temp_s0;
    s16 temp_v0;
    s32 temp_s2;
    s32 temp_s3;

    temp_s3 = D_800F2B7C[arg0].unk_6C;
    temp_s2 = D_800F2B7C[arg1].unk_6C;
    temp_s0 = func_80033718(temp_s3, arg3);
    temp_v0 = func_80033718(temp_s2, arg4);
    if (((~temp_s0 == 0) | (~temp_v0 == 0)) == 0) {
        func_800265EC(temp_s3, temp_s2, arg2, temp_s0, temp_v0, arg5);
    }
}

INCLUDE_ASM(s32, "24740", func_800265EC);

INCLUDE_ASM(s32, "24740", func_80026A00);

INCLUDE_ASM(s32, "24740", func_80026A0C);

INCLUDE_ASM(s32, "24740", func_80026B8C);

INCLUDE_ASM(s32, "24740", func_80026C6C);

INCLUDE_ASM(s32, "24740", func_80026EA8);

INCLUDE_ASM(s32, "24740", func_80027100);

INCLUDE_ASM(s32, "24740", func_80027440);

INCLUDE_ASM(s32, "24740", func_80027AC8);

INCLUDE_ASM(s32, "24740", func_80027C1C);

INCLUDE_ASM(s32, "24740", func_80027E48);

INCLUDE_ASM(s32, "24740", func_80028180);

INCLUDE_ASM(s32, "24740", func_80028314);

INCLUDE_ASM(s32, "24740", func_80028498);

INCLUDE_ASM(s32, "24740", func_800284E4);

INCLUDE_ASM(s32, "24740", func_80028510);

INCLUDE_ASM(s32, "24740", func_8002854C);

INCLUDE_ASM(s32, "24740", func_80028558);

INCLUDE_ASM(s32, "24740", func_8002859C);

INCLUDE_ASM(s32, "24740", func_8002861C);

INCLUDE_ASM(s32, "24740", func_80028668);

INCLUDE_ASM(s32, "24740", func_80028784);

INCLUDE_ASM(s32, "24740", func_8002888C);

INCLUDE_ASM(s32, "24740", func_800288D8);

INCLUDE_ASM(s32, "24740", func_8002890C);

INCLUDE_ASM(s32, "24740", func_80028928);

INCLUDE_ASM(s32, "24740", func_800289D0);

INCLUDE_ASM(s32, "24740", func_80028A34);

INCLUDE_ASM(s32, "24740", func_80028BE0);

INCLUDE_ASM(s32, "24740", func_80028BEC);

INCLUDE_ASM(s32, "24740", func_80028C28);

INCLUDE_ASM(s32, "24740", func_80028C64);

INCLUDE_ASM(s32, "24740", func_80028E8C);

INCLUDE_ASM(s32, "24740", func_80028EA4);
