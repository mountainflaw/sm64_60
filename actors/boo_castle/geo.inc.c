// 0x0D0005B0
const uintptr_t boo_castle_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 26214),
      GEO_OPEN_NODE(),
         GEO_ASM(0, Geo18_8029D924),
         GEO_SWITCH_CASE(2, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_castle_seg6_dl_06017CE0),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, boo_castle_seg6_dl_06017CE0),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(), //! more close than open nodes
GEO_END(),
};

