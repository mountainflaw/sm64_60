// floating_platform.c.inc

f32 func_802F54F8(void) {
    struct Surface *sp24;
    f32 sp20;
    f32 sp1C;

    sp20 = find_water_level(o->oPosX, o->oPosZ);
    sp1C = find_floor(o->oPosX, o->oPosY, o->oPosZ, &sp24);
    if (sp20 > sp1C + o->oFloatingPlatformUnkFC) {
        o->oFloatingPlatformUnkF4 = 0;
        return sp20 + o->oFloatingPlatformUnkFC;
    } else {
        o->oFloatingPlatformUnkF4 = 1;
        return sp1C + o->oFloatingPlatformUnkFC;
    }
}

void func_802F55CC(void) {
    s16 sp6 = (gMarioObject->header.gfx.pos[0] - o->oPosX) * coss(-o->oMoveAngleYaw)
              + (gMarioObject->header.gfx.pos[2] - o->oPosZ) * sins(-o->oMoveAngleYaw);
    s16 sp4 = (gMarioObject->header.gfx.pos[2] - o->oPosZ) * coss(-o->oMoveAngleYaw)
              - (gMarioObject->header.gfx.pos[0] - o->oPosX) * sins(-o->oMoveAngleYaw);

    if (gMarioObject->platform == o) {
        o->oFaceAnglePitch = sp4 * 2;
        o->oFaceAngleRoll = -sp6 * 2;
        o->oVelY -= 1.0f;
        if (o->oVelY < 0.0f)
            o->oVelY = 0.0f;

        o->oFloatingPlatformUnkF8 += o->oVelY;
        if (o->oFloatingPlatformUnkF8 > 90.0f)
            o->oFloatingPlatformUnkF8 = 90.0f;
    } else {
        o->oFaceAnglePitch /= 2;
        o->oFaceAngleRoll /= 2;
        o->oFloatingPlatformUnkF8 -= 5.0;
        o->oVelY = 10.0f;
        if (o->oFloatingPlatformUnkF8 < 0.0f)
            o->oFloatingPlatformUnkF8 = 0.0f;
    }

    o->oPosY = o->oHomeY - 64.0f - o->oFloatingPlatformUnkF8 + sins(o->oFloatingPlatformUnk100 * 0x800) * 10.0f;
    o->oFloatingPlatformUnk100++;
    if (o->oFloatingPlatformUnk100 == 32)
        o->oFloatingPlatformUnk100 = 0;
}

void bhv_floating_platform_loop(void) {
    o->oHomeY = func_802F54F8();
    if (o->oFloatingPlatformUnkF4 == 0)
        o->oAction = 0;
    else
        o->oAction = 1;

    switch (o->oAction) {
        case 0:
            func_802F55CC();
            break;

        case 1:
            o->oPosY = o->oHomeY;
            break;
    }
}
