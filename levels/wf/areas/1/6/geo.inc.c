// 0x0E000820
const GeoLayout wf_geo_000820[] = {
   GEO_CULLING_RADIUS(1800),
   GEO_OPEN_NODE(),
      GEO_RENDER_RANGE(-2048, 5000),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_070064E8),
      GEO_CLOSE_NODE(),
      GEO_RENDER_RANGE(5000, 32767),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_070065F8),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

