// 0x07010DB4 - 0x07010E10
const Collision castle_grounds_seg7_collision_moat_grills[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
    COL_VERTEX(-3225, -562, -2178),
    COL_VERTEX(-3532, -562, -2178),
    COL_VERTEX(-3225, -562, -1871),
    COL_VERTEX(-3532, -562, -1871),
    COL_VERTEX(-3532, -1330, -6069),
    COL_VERTEX(-4044, -1330, -6069),
    COL_VERTEX(-4044, -1330, -5557),
    COL_VERTEX(-3532, -1330, -5557),
    COL_TRI_INIT(SURFACE_FLOWING_WATER, 4),
    COL_TRI_SPECIAL(0, 1, 2, 0x235),
    COL_TRI_SPECIAL(1, 3, 2, 0x235),
    COL_TRI_SPECIAL(4, 5, 6, 0x100),
    COL_TRI_SPECIAL(4, 6, 7, 0x100),
    COL_TRI_STOP(),
    COL_END(),
};
