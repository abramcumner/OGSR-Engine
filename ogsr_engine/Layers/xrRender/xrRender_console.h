#pragma once

// Common
extern ECORE_API u32 r2_SmapSize;

extern ECORE_API u32 ps_r_pp_aa_mode;

extern ECORE_API u32 ps_r_sun_shafts;
extern ECORE_API u32 ps_r_sunshafts_mode;
extern ECORE_API float ps_r_ss_sunshafts_length;
extern ECORE_API float ps_r_ss_sunshafts_radius;
extern ECORE_API float ps_r_prop_ss_radius;
extern ECORE_API float ps_r_prop_ss_blend;
extern ECORE_API float ps_r_prop_ss_sample_step_phase0;
extern ECORE_API float ps_r_prop_ss_sample_step_phase1;

extern ECORE_API u32 ps_r_ssao; //	=	0;

enum : u32
{
    AO_MODE_GTAO,
    AO_MODE_SSDO
};
extern u32 ps_r_ao_mode;

extern ECORE_API u32 ps_r_sun_quality; //	=	0;

extern ECORE_API u32 ps_r3_msaa; //	=	0;

extern ECORE_API u32 ps_r3_msaa_atest; //=	0;

extern ECORE_API u32 ps_r3_minmax_sm; //	=	0;


extern ECORE_API int ps_r__LightSleepFrames;

extern ECORE_API float ps_r__Detail_l_ambient;
extern ECORE_API float ps_r__Detail_l_aniso;
extern ECORE_API float ps_r__Detail_density;

extern ECORE_API float ps_r__Tree_w_rot;
extern ECORE_API float ps_r__Tree_w_speed;
extern ECORE_API float ps_r__Tree_w_amp;
extern ECORE_API float ps_r__Tree_SBC; // scale bias correct
extern ECORE_API Fvector ps_r__Tree_Wave;

extern ECORE_API float ps_r__WallmarkTTL;
extern ECORE_API float ps_r__WallmarkSHIFT;
extern ECORE_API float ps_r__WallmarkSHIFT_V;

extern ECORE_API float ps_r__GLOD_ssa_start;
extern ECORE_API float ps_r__GLOD_ssa_end;
extern ECORE_API float ps_r__LOD;
//.extern ECORE_API	float		ps_r__LOD_Power		;
extern ECORE_API float ps_r__ssaDISCARD;
extern ECORE_API float ps_r__ssaDONTSORT;
extern ECORE_API float ps_r__ssaHZBvsTEX;
extern ECORE_API int ps_r__tf_Anisotropic;
extern ECORE_API float ps_r__tf_Mipbias;

// R1
extern ECORE_API float ps_r1_ssaLOD_A;
extern ECORE_API float ps_r1_ssaLOD_B;
extern ECORE_API float ps_r1_lmodel_lerp;
extern ECORE_API float ps_r1_dlights_clip;
extern ECORE_API float ps_r1_pps_u;
extern ECORE_API float ps_r1_pps_v;

// R1-specific
extern ECORE_API int ps_r1_GlowsPerFrame; // r1-only
extern ECORE_API Flags32 ps_r1_flags; // r1-only

extern ECORE_API float ps_r1_fog_luminance; // 1.f r1-only
extern ECORE_API int ps_r1_SoftwareSkinning; // r1-only

enum
{
    R1FLAG_DLIGHTS = (1 << 0),
};

// R2
extern ECORE_API float ps_r2_ssaLOD_A;
extern ECORE_API float ps_r2_ssaLOD_B;

// R2-specific
extern ECORE_API Flags32 ps_r2_ls_flags; // r2-only
extern ECORE_API Flags32 ps_r2_ls_flags_ext;
extern ECORE_API float ps_r2_df_parallax_h; // r2-only
extern ECORE_API float ps_r2_df_parallax_range; // r2-only
extern ECORE_API float ps_r2_gmaterial; // r2-only
extern ECORE_API float ps_r2_tonemap_middlegray; // r2-only
extern ECORE_API float ps_r2_tonemap_adaptation; // r2-only
extern ECORE_API float ps_r2_tonemap_low_lum; // r2-only
extern ECORE_API float ps_r2_tonemap_amount; // r2-only
extern ECORE_API float ps_r2_ls_bloom_kernel_scale; // r2-only	// gauss
extern ECORE_API float ps_r2_ls_bloom_kernel_g; // r2-only	// gauss
extern ECORE_API float ps_r2_ls_bloom_kernel_b; // r2-only	// bilinear
extern ECORE_API float ps_r2_ls_bloom_threshold; // r2-only
extern ECORE_API float ps_r2_ls_bloom_speed; // r2-only
extern ECORE_API float ps_r2_ls_dsm_kernel; // r2-only
extern ECORE_API float ps_r2_ls_psm_kernel; // r2-only
extern ECORE_API float ps_r2_ls_ssm_kernel; // r2-only
extern ECORE_API float ps_r2_mblur; // .5f
extern ECORE_API int ps_r2_GI_depth; // 1..5
extern ECORE_API int ps_r2_GI_photons; // 8..256
extern ECORE_API float ps_r2_GI_clip; // EPS
extern ECORE_API float ps_r2_GI_refl; // .9f
extern ECORE_API float ps_r2_ls_depth_scale; // 1.0f
extern ECORE_API float ps_r2_ls_depth_bias; // -0.0001f
extern ECORE_API float ps_r2_ls_squality; // 1.0f
extern ECORE_API float ps_r2_sun_near; // 10.0f
extern ECORE_API float ps_r2_sun_near_border; // 1.0f
extern ECORE_API float ps_r2_sun_tsm_projection; // 0.2f
extern ECORE_API float ps_r2_sun_tsm_bias; // 0.0001f
extern ECORE_API float ps_r2_sun_depth_far_scale; // 1.00001f
extern ECORE_API float ps_r2_sun_depth_far_bias; // -0.0001f
extern ECORE_API float ps_r2_sun_depth_near_scale; // 1.00001f
extern ECORE_API float ps_r2_sun_depth_near_bias; // -0.0001f
extern ECORE_API float ps_r2_sun_lumscale; // 0.5f
extern ECORE_API float ps_r2_sun_lumscale_hemi; // 1.0f
extern ECORE_API float ps_r2_sun_lumscale_amb; // 1.0f
extern ECORE_API float ps_r2_zfill; // .1f

extern ECORE_API float ps_r2_dhemi_sky_scale; // 1.5f
extern ECORE_API float ps_r2_dhemi_light_scale; // 1.f
extern ECORE_API float ps_r2_dhemi_light_flow; // .1f
extern ECORE_API int ps_r2_dhemi_count; // 5
extern ECORE_API float ps_r2_slight_fade; // 1.f
extern ECORE_API int ps_r2_wait_sleep;

extern float ps_r2_gloss_factor;

extern ECORE_API float ps_r2_img_exposure; // r2-only
extern ECORE_API float ps_r2_img_gamma; // r2-only
extern ECORE_API float ps_r2_img_saturation; // r2-only
extern ECORE_API Fvector ps_r2_img_cg; // r2-only

//	x - min (0), y - focus (1.4), z - max (100)
extern ECORE_API Fvector3 ps_r2_dof;
extern ECORE_API float ps_r2_dof_sky; //	distance to sky
extern ECORE_API float ps_r2_dof_kernel_size; //	7.0f

extern ECORE_API int ps_r3_dyn_wet_surf_opt;
extern ECORE_API float ps_r3_dyn_wet_surf_near; // 10.0f
extern ECORE_API float ps_r3_dyn_wet_surf_far; // 30.0f
extern ECORE_API int ps_r3_dyn_wet_surf_sm_res; // 256
extern ECORE_API int ps_r3_dyn_wet_surf_enable_streaks;

extern ECORE_API float ps_r2_rain_drops_intensity;
extern ECORE_API float ps_r2_rain_drops_speed;

extern ECORE_API float ps_r2_visor_refl_intensity;
extern ECORE_API float ps_r2_visor_refl_radius;

extern ECORE_API float ps_ssfx_wpn_dof_2;
extern Fvector4 ps_ssfx_blood_decals;
extern Fvector3 ps_ssfx_int_grass_params_1;
extern ECORE_API Fvector4 ps_ssfx_grass_shadows;
extern Fvector3 ps_ssfx_shadow_cascades;
extern ECORE_API Fvector4 ps_ssfx_wind;
extern ECORE_API Fvector4 ps_ssfx_wind_gust;
extern ECORE_API Fvector4 ps_ssfx_rain_1;
extern ECORE_API Fvector4 ps_ssfx_rain_2;
extern ECORE_API Fvector4 ps_ssfx_rain_3;
extern Fvector4 ps_ssfx_florafixes_1, ps_ssfx_florafixes_2;
extern int ps_ssfx_is_underground, ps_ssfx_gloss_method;


// textures
extern ECORE_API int psTextureLOD;

extern ECORE_API u32 psCurrentBPP;

enum
{
    R2FLAG_SUN = (1 << 0),
    R2FLAG_SUN_FOCUS = (1 << 1),
    R2FLAG_SUN_TSM = (1 << 2),
    R2FLAG_SUN_DETAILS = (1 << 3),
    R2FLAG_TONEMAP = (1 << 4),
    R2FLAG_EXP_MT_DETAILS = 1 << 5,
    R2FLAG_GI = (1 << 6),
    R2FLAG_FASTBLOOM = (1 << 7),
    R2FLAG_GLOBALMATERIAL = (1 << 8),
    R2FLAG_ZFILL = (1 << 9),
    R2FLAG_R1LIGHTS = (1 << 10),
    R2FLAG_SUN_IGNORE_PORTALS = (1 << 11),

    R2FLAG_EXP_MT_RAIN = (1 << 12),

    R2FLAG_EXP_SPLIT_SCENE = (1 << 13),
    R2FLAG_EXP_DONT_TEST_UNSHADOWED = (1 << 14),
    R2FLAG_EXP_DONT_TEST_SHADOWED = (1 << 15),

    R2FLAG_USE_NVDBT = (1 << 16),
    R2FLAG_USE_NVSTENCIL = (1 << 17),

    R2FLAG_EXP_MT_CALC = (1 << 18),
    R2FLAG_EXP_MT_SUN = 1 << 19,
    // = 1 << 20,
    R2FLAG_VOLUMETRIC_LIGHTS = (1 << 21),
    R2FLAG_STEEP_PARALLAX = (1 << 22),
    R2FLAG_DOF = (1 << 23),
#if RENDER == R_R1
    R1FLAG_DETAIL_TEXTURES = (1 << 24),
#endif
    // = 1 << 25,

    R3FLAG_DYN_WET_SURF = (1 << 26),
    R3FLAG_VOLUMETRIC_SMOKE = (1 << 27),

    // R3FLAG_MSAA					= (1<<28),
    R3FLAG_MSAA_HYBRID = (1 << 28),
    R3FLAG_MSAA_OPT = (1 << 29),
    R3FLAG_GBUFFER_OPT = (1 << 30),
    R3FLAG_USE_DX10_1 = (1 << 31),
    // R3FLAG_MSAA_ALPHATEST		= (1<<31),
};

enum
{
    SSFX_HEIGHT_FOG = 1 << 0,
    SSFX_SKY_DEBANDING = 1 << 1,
    SSFX_INDIRECT_LIGHT = 1 << 2,
    REFLECTIONS_ONLY_ON_TERRAIN = 1 << 3,
    REFLECTIONS_ONLY_ON_PUDDLES = 1 << 4,
    R2FLAGEXT_ENABLE_TESSELLATION = (1 << 5),
    R2FLAGEXT_WIREFRAME = (1 << 6),
    R_FLAGEXT_HOM_DEPTH_DRAW = (1 << 7),
    R2FLAGEXT_SUN_ZCULLING = (1 << 8),
    R2FLAGEXT_SUN_OLD = (1 << 9),
    SSFX_INTER_GRASS = 1 << 10,
    R2FLAGEXT_DISABLE_HOM = 1 << 11,
    R2FLAGEXT_RAIN_DROPS = 1 << 12,
    R2FLAGEXT_RAIN_DROPS_CONTROL = 1 << 13,
    R2FLAGEXT_ACTOR_SHADOW = 1 << 14,
    R2FLAGEXT_SSLR = 1 << 15,
    R2FLAG_VISOR_REFL = 1 << 16,
    R2FLAG_VISOR_REFL_CONTROL = 1 << 17,
    R2FLAGEXT_TERRAIN_PARALLAX = 1 << 18,
    R2FLAGEXT_MT_TEXLOAD = 1 << 19,
};

extern void xrRender_initconsole();

#ifndef XRRENDER_STATIC
extern BOOL xrRender_test_hw();
#endif

// Postprocess anti-aliasing types
enum
{
    NO_AA,
    SMAA,
};

// Sunshafts types
enum
{
    SS_OFF,
    SS_VOLUMETRIC,
    SS_SS_OGSE,
    SS_SS_MANOWAR,
};
