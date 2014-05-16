

#define LOG_TAG "isp_tuning_custom"

#ifndef ENABLE_MY_LOG
    #define ENABLE_MY_LOG       (1)
#endif

#include <aaa_types.h>
#include <aaa_log.h>
#include <camera_custom_nvram.h>
#include <isp_tuning.h>
#include <camera_feature.h>
#include <awb_param.h>
#include <ae_param.h>
#include <af_param.h>
#include <flash_param.h>
#include <isp_tuning_cam_info.h>
#include <isp_tuning_idx.h>
#include <isp_tuning_custom.h>
#include <isp_tuning_custom_instance.h>

using namespace NSIspTuning;


MVOID
IspTuningCustom::
evaluate_nvram_index(RAWIspCamInfo const& rCamInfo, IndexMgr& rIdxMgr)
{
//..............................................................................
    //  (1) Dump info. before customizing.
#if ENABLE_MY_LOG
    rCamInfo.dump();
#endif

#if 0
    LOGD("[+evaluate_nvram_index][before customizing]");
    rIdxMgr.dump();
#endif
//..............................................................................
    //  (2) Modify each index based on conditions.
    //
    //  setIdx_XXX() returns:
    //      MTURE: if successful
    //      MFALSE: if the input index is out of range.
    //
#if 0
    fgRet = rIdxMgr.setIdx_OBC(XXX);
    fgRet = rIdxMgr.setIdx_BPC(XXX);
    fgRet = rIdxMgr.setIdx_NR1(XXX);
    fgRet = rIdxMgr.setIdx_CFA(XXX);
    fgRet = rIdxMgr.setIdx_GGM(XXX);
    fgRet = rIdxMgr.setIdx_ANR(XXX);
    fgRet = rIdxMgr.setIdx_CCR(XXX);
    fgRet = rIdxMgr.setIdx_EE(XXX);
    fgRet = rIdxMgr.setIdx_NR3D(XXX);
    fgRet = rIdxMgr.setIdx_MFB(XXX);
#endif
//..............................................................................
    //  (3) Finally, dump info. after modifying.
#if 0
    LOGD("[-evaluate_nvram_index][after customizing]");
    rIdxMgr.dump();
#endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_OBC(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_OBC_T& rOBC)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...
    
    MY_LOG("rOBC.offst0 = 0x%8x", rOBC.offst0);
    MY_LOG("rOBC.offst1 = 0x%8x", rOBC.offst1);
    MY_LOG("rOBC.offst2 = 0x%8x", rOBC.offst2);
    MY_LOG("rOBC.offst3 = 0x%8x", rOBC.offst3);
    MY_LOG("rOBC.gain0 = 0x%8x", rOBC.gain0);
    MY_LOG("rOBC.gain1 = 0x%8x", rOBC.gain1);
    MY_LOG("rOBC.gain2 = 0x%8x", rOBC.gain2);
    MY_LOG("rOBC.gain3 = 0x%8x", rOBC.gain3);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_BPC(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_BPC_T& rBPC)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rBPC.con = 0x%8x", rBPC.con);
    MY_LOG("rBPC.cd1_1 = 0x%8x", rBPC.cd1_1);
    MY_LOG("rBPC.cd1_2 = 0x%8x", rBPC.cd1_2);
    MY_LOG("rBPC.cd1_3 = 0x%8x", rBPC.cd1_3);
    MY_LOG("rBPC.cd1_4 = 0x%8x", rBPC.cd1_4);
    MY_LOG("rBPC.cd1_5 = 0x%8x", rBPC.cd1_5);
    MY_LOG("rBPC.cd1_6 = 0x%8x", rBPC.cd1_6);
    MY_LOG("rBPC.cd2_1 = 0x%8x", rBPC.cd2_1);
    MY_LOG("rBPC.cd2_2 = 0x%8x", rBPC.cd2_2);
    MY_LOG("rBPC.cd2_3 = 0x%8x", rBPC.cd2_3);
    MY_LOG("rBPC.cd0 = 0x%8x", rBPC.cd0);
    MY_LOG("rBPC.det = 0x%8x", rBPC.det);
    MY_LOG("rBPC.cor = 0x%8x", rBPC.cor);
    MY_LOG("rBPC.tbli1 = 0x%8x", rBPC.tbli1);
    MY_LOG("rBPC.tbli2 = 0x%8x", rBPC.tbli2);
    #endif

}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_NR1(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_NR1_T& rNR1)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rNR1.con = 0x%8x", rNR1.con);
    MY_LOG("rNR1.ct_con = 0x%8x", rNR1.ct_con);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_PGN(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_PGN_T& rPGN)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rPGN.satu01 = 0x%8x", rPGN.satu01);
    MY_LOG("rPGN.satu23 = 0x%8x", rPGN.satu23);
    MY_LOG("rPGN.gain01 = 0x%8x", rPGN.gain01);
    MY_LOG("rPGN.gain23 = 0x%8x", rPGN.gain23);
    MY_LOG("rPGN.offs01 = 0x%8x", rPGN.offs01);
    MY_LOG("rPGN.offs23 = 0x%8x", rPGN.offs23);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_CFA(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_CFA_T& rCFA)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rCFA.bypass = 0x%8x", rCFA.bypass);
    MY_LOG("rCFA.ed_f = 0x%8x", rCFA.ed_f);
    MY_LOG("rCFA.ed_nyq = 0x%8x", rCFA.ed_nyq);
    MY_LOG("rCFA.ed_step = 0x%8x", rCFA.ed_step);
    MY_LOG("rCFA.rgb_hf = 0x%8x", rCFA.rgb_hf);
    MY_LOG("rCFA.bw = 0x%8x", rCFA.bw);
    MY_LOG("rCFA.f1_act = 0x%8x", rCFA.f1_act);
    MY_LOG("rCFA.f2_act = 0x%8x", rCFA.f2_act);
    MY_LOG("rCFA.f3_act = 0x%8x", rCFA.f3_act);
    MY_LOG("rCFA.f4_act = 0x%8x", rCFA.f4_act);
    MY_LOG("rCFA.f1_l = 0x%8x", rCFA.f1_l);
    MY_LOG("rCFA.f2_l = 0x%8x", rCFA.f2_l);
    MY_LOG("rCFA.f3_l = 0x%8x", rCFA.f3_l);
    MY_LOG("rCFA.f4_l = 0x%8x", rCFA.f4_l);
    MY_LOG("rCFA.hf_rb = 0x%8x", rCFA.hf_rb);
    MY_LOG("rCFA.hf_gain = 0x%8x", rCFA.hf_gain);
    MY_LOG("rCFA.hf_comp = 0x%8x", rCFA.hf_comp);
    MY_LOG("rCFA.hf_coring_th = 0x%8x", rCFA.hf_coring_th);
    MY_LOG("rCFA.act_lut = 0x%8x", rCFA.act_lut);
    MY_LOG("rCFA.spare = 0x%8x", rCFA.spare);
    MY_LOG("rCFA.bb = 0x%8x", rCFA.bb);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//[begin]pr470505 zhfan 2013-06-20
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#define CONV_2COMP_11(x) ( (x)<1024?(x):((int)(x)-2048) )
#define ICONV_2COMP_11(x) ( (x)<0?((x)+2048):(x) )
    
MVOID
IspTuningCustom::
refine_CCM(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_CCM_T& rCCM)
{
    //MY_LOG("zhfan\n");
    if (0x0135 == getSensorID())
    {
    //MY_LOG("zhfan this is imx135\n");
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rCCM.conv0a = 0x%8x", rCCM.conv0a);
    MY_LOG("rCCM.conv0b = 0x%8x", rCCM.conv0b);
    MY_LOG("rCCM.conv1a = 0x%8x", rCCM.conv1a);
    MY_LOG("rCCM.conv1b = 0x%8x", rCCM.conv1b);
    MY_LOG("rCCM.conv2a = 0x%8x", rCCM.conv2a);
    MY_LOG("rCCM.conv2b = 0x%8x", rCCM.conv2b);

    
    MY_LOG("Before");
    MY_LOG("rCCM.conv0a.bits.G2G_CNV_00 = %d", rCCM.conv0a.bits.G2G_CNV_00);
    MY_LOG("rCCM.conv0a.bits.G2G_CNV_01 = %d", rCCM.conv0a.bits.G2G_CNV_01);
    MY_LOG("rCCM.conv0b.bits.G2G_CNV_02 = %d", rCCM.conv0b.bits.G2G_CNV_02);
    
    MY_LOG("rCCM.conv1a.bits.G2G_CNV_10 = %d", rCCM.conv1a.bits.G2G_CNV_10);
    MY_LOG("rCCM.conv1a.bits.G2G_CNV_11 = %d", rCCM.conv1a.bits.G2G_CNV_11);
    MY_LOG("rCCM.conv1b.bits.G2G_CNV_12 = %d", rCCM.conv1b.bits.G2G_CNV_12);
    
    MY_LOG("rCCM.conv2a.bits.G2G_CNV_20 = %d", rCCM.conv2a.bits.G2G_CNV_20);
    MY_LOG("rCCM.conv2a.bits.G2G_CNV_21 = %d", rCCM.conv2a.bits.G2G_CNV_21);
    MY_LOG("rCCM.conv2b.bits.G2G_CNV_22 = %d", rCCM.conv2b.bits.G2G_CNV_22);
#endif    

    // jason.jan, update CCM according to ISO
    MINT32 CCM_00 = CONV_2COMP_11(rCCM.conv0a.bits.G2G_CNV_00);
    MINT32 CCM_01 = CONV_2COMP_11(rCCM.conv0a.bits.G2G_CNV_01);
    MINT32 CCM_02 = CONV_2COMP_11(rCCM.conv0b.bits.G2G_CNV_02);
    MINT32 CCM_10 = CONV_2COMP_11(rCCM.conv1a.bits.G2G_CNV_10);
    MINT32 CCM_11 = CONV_2COMP_11(rCCM.conv1a.bits.G2G_CNV_11);
    MINT32 CCM_12 = CONV_2COMP_11(rCCM.conv1b.bits.G2G_CNV_12);
    MINT32 CCM_20 = CONV_2COMP_11(rCCM.conv2a.bits.G2G_CNV_20);
    MINT32 CCM_21 = CONV_2COMP_11(rCCM.conv2a.bits.G2G_CNV_21);
    MINT32 CCM_22 = CONV_2COMP_11(rCCM.conv2b.bits.G2G_CNV_22);
    
    // tuning parameter
    const MINT32 iso_l = 800;   
    const MINT32 iso_h = 1200;   
    const int gain_l = 128;     
    const int gain_h = (int)(0.6*128);
    /*
    
    --------------+---------------------------------------------------+-------------------------------
    ISO < iso_l          iso_l < ISO < iso_h                                 ISO > iso_h
    gain = gain_l        gain = linear interpolation(gain_l, gain_h)         gain = gain_h
    
    */
    //! tuning parameter

    MINT32 current_iso = rCamInfo.u4ISOValue;
    int current_gain = 128;
    
    
    if(current_iso<iso_l)
        current_gain = gain_l;
    else if(current_iso>iso_h)
        current_gain = gain_h;
    else
        current_gain = gain_l + (gain_h-gain_l)*(current_iso-iso_l)/(iso_h-iso_l);

    CCM_01 = (CCM_01)*current_gain/128;
    CCM_02 = (CCM_02)*current_gain/128;
    CCM_00 = 256 - (CCM_01+CCM_02);

    CCM_10 = (CCM_10)*current_gain/128;
    CCM_12 = (CCM_12)*current_gain/128;
    CCM_11 = 256 - (CCM_10+CCM_12);

    CCM_20 = (CCM_20)*current_gain/128;
    CCM_21 = (CCM_21)*current_gain/128;
    CCM_22 = 256 - (CCM_20+CCM_21);   
    
    rCCM.conv0a.bits.G2G_CNV_00 = ICONV_2COMP_11(CCM_00);
    rCCM.conv0a.bits.G2G_CNV_01 = ICONV_2COMP_11(CCM_01);
    rCCM.conv0b.bits.G2G_CNV_02 = ICONV_2COMP_11(CCM_02);
    rCCM.conv1a.bits.G2G_CNV_10 = ICONV_2COMP_11(CCM_10);
    rCCM.conv1a.bits.G2G_CNV_11 = ICONV_2COMP_11(CCM_11);
    rCCM.conv1b.bits.G2G_CNV_12 = ICONV_2COMP_11(CCM_12);
    rCCM.conv2a.bits.G2G_CNV_20 = ICONV_2COMP_11(CCM_20);
    rCCM.conv2a.bits.G2G_CNV_21 = ICONV_2COMP_11(CCM_21);
    rCCM.conv2b.bits.G2G_CNV_22 = ICONV_2COMP_11(CCM_22);

#if 0
    MY_LOG("After");
    MY_LOG("Current ISO = %d", current_iso);
    MY_LOG("Current ISO = %f", current_gain);
    MY_LOG("rCCM.conv0a.bits.G2G_CNV_00 = %d", rCCM.conv0a.bits.G2G_CNV_00);
    MY_LOG("rCCM.conv0a.bits.G2G_CNV_01 = %d", rCCM.conv0a.bits.G2G_CNV_01);
    MY_LOG("rCCM.conv0b.bits.G2G_CNV_02 = %d", rCCM.conv0b.bits.G2G_CNV_02);
    
    MY_LOG("rCCM.conv1a.bits.G2G_CNV_10 = %d", rCCM.conv1a.bits.G2G_CNV_10);
    MY_LOG("rCCM.conv1a.bits.G2G_CNV_11 = %d", rCCM.conv1a.bits.G2G_CNV_11);
    MY_LOG("rCCM.conv1b.bits.G2G_CNV_12 = %d", rCCM.conv1b.bits.G2G_CNV_12);
    
    MY_LOG("rCCM.conv2a.bits.G2G_CNV_20 = %d", rCCM.conv2a.bits.G2G_CNV_20);
    MY_LOG("rCCM.conv2a.bits.G2G_CNV_21 = %d", rCCM.conv2a.bits.G2G_CNV_21);
    MY_LOG("rCCM.conv2b.bits.G2G_CNV_22 = %d", rCCM.conv2b.bits.G2G_CNV_22);
#endif
    //! jason.jan, update CCM according to ISO
    }
}
//[end]pr470505 zhfan 2013-06-20

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_GGM(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_GGM_T& rGGM)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rGGM.rb_gmt.lut[0] = 0x%8x", rGGM.rb_gmt.lut[0]);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_ANR(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_ANR_T& rANR)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rANR.con1 = 0x%8x", rANR.con1);
    MY_LOG("rANR.con2 = 0x%8x", rANR.con2);
    MY_LOG("rANR.con3 = 0x%8x", rANR.con3);
    MY_LOG("rANR.yad1 = 0x%8x", rANR.yad1);
    MY_LOG("rANR.yad2 = 0x%8x", rANR.yad2);
    MY_LOG("rANR.lut1 = 0x%8x", rANR.lut1);
    MY_LOG("rANR.lut2 = 0x%8x", rANR.lut2);
    MY_LOG("rANR.lut3 = 0x%8x", rANR.lut3);
    MY_LOG("rANR.pty = 0x%8x", rANR.pty);
    MY_LOG("rANR.cad = 0x%8x", rANR.cad);
    MY_LOG("rANR.ptc = 0x%8x", rANR.ptc);
    MY_LOG("rANR.lce1 = 0x%8x", rANR.lce1);
    MY_LOG("rANR.lce2 = 0x%8x", rANR.lce2);
    MY_LOG("rANR.hp1 = 0x%8x", rANR.hp1);
    MY_LOG("rANR.hp2 = 0x%8x", rANR.hp2);
    MY_LOG("rANR.hp3 = 0x%8x", rANR.hp3);
    MY_LOG("rANR.acty = 0x%8x", rANR.acty);
    MY_LOG("rANR.actc = 0x%8x", rANR.actc);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_CCR(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_CCR_T& rCCR)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rCCR.con = 0x%8x", rCCR.con);
    MY_LOG("rCCR.ylut = 0x%8x", rCCR.ylut);
    MY_LOG("rCCR.uvlut = 0x%8x", rCCR.uvlut);
    MY_LOG("rCCR.ylut2 = 0x%8x", rCCR.ylut2);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_EE(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_EE_T& rEE)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rEE.srk_ctrl = 0x%8x", rEE.srk_ctrl);
    MY_LOG("rEE.clip_ctrl = 0x%8x", rEE.clip_ctrl);
    MY_LOG("rEE.hp_ctrl1 = 0x%8x", rEE.hp_ctrl1);
    MY_LOG("rEE.hp_ctrl2 = 0x%8x", rEE.hp_ctrl2);
    MY_LOG("rEE.ed_ctrl1 = 0x%8x", rEE.ed_ctrl1);
    MY_LOG("rEE.ed_ctrl2 = 0x%8x", rEE.ed_ctrl2);
    MY_LOG("rEE.ed_ctrl3 = 0x%8x", rEE.ed_ctrl3);
    MY_LOG("rEE.ed_ctrl4 = 0x%8x", rEE.ed_ctrl4);
    MY_LOG("rEE.ed_ctrl5 = 0x%8x", rEE.ed_ctrl5);
    MY_LOG("rEE.ed_ctrl6 = 0x%8x", rEE.ed_ctrl6);
    MY_LOG("rEE.ed_ctrl7 = 0x%8x", rEE.ed_ctrl7);
    MY_LOG("rEE.ee_link1 = 0x%8x", rEE.ee_link1);
    MY_LOG("rEE.ee_link2 = 0x%8x", rEE.ee_link2);
    MY_LOG("rEE.ee_link3 = 0x%8x", rEE.ee_link3);
    MY_LOG("rEE.ee_link4 = 0x%8x", rEE.ee_link4);
    MY_LOG("rEE.ee_link5 = 0x%8x", rEE.ee_link5);
#endif    
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_NR3D(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_NR3D_T& rNR3D)
{
    #if 0
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rNR3D.blend = 0x%8x", rNR3D.blend);
    MY_LOG("rNR3D.skip_key = 0x%8x", rNR3D.skip_key);
    MY_LOG("rNR3D.fbcnt_off = 0x%8x", rNR3D.fbcnt_off);
    MY_LOG("rNR3D.fbcnt_siz = 0x%8x", rNR3D.fbcnt_siz);
    MY_LOG("rNR3D.fb_count = 0x%8x", rNR3D.fb_count);
    MY_LOG("rNR3D.limit_cpx = 0x%8x", rNR3D.limit_cpx);
    MY_LOG("rNR3D.limit_y_con1 = 0x%8x", rNR3D.limit_y_con1);
    MY_LOG("rNR3D.limit_y_con2 = 0x%8x", rNR3D.limit_y_con2);
    MY_LOG("rNR3D.limit_y_con3 = 0x%8x", rNR3D.limit_y_con3);
    MY_LOG("rNR3D.limit_u_con1 = 0x%8x", rNR3D.limit_u_con1);
    MY_LOG("rNR3D.limit_u_con2 = 0x%8x", rNR3D.limit_u_con2);
    MY_LOG("rNR3D.limit_u_con3 = 0x%8x", rNR3D.limit_u_con3);
    MY_LOG("rNR3D.limit_v_con1 = 0x%8x", rNR3D.limit_v_con1);
    MY_LOG("rNR3D.limit_v_con2 = 0x%8x", rNR3D.limit_v_con2);
    MY_LOG("rNR3D.limit_v_con3 = 0x%8x", rNR3D.limit_v_con3);
#endif    
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refine_MFB(RAWIspCamInfo const& rCamInfo, IspNvramRegMgr const& rIspRegMgr, ISP_NVRAM_MFB_T& rMFB)
{
    #if 0   
    MY_LOG("%s()\n", __FUNCTION__);
    // TODO: Add your code below...

    MY_LOG("rMFB.con = 0x%8x", rMFB.con);
    MY_LOG("rMFB.ll = 0x%8x", rMFB.ll);
    #endif
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
EIndex_PCA_LUT_T
IspTuningCustom::
evaluate_PCA_LUT_index(RAWIspCamInfo const& rCamInfo)
{
    MY_LOG("%s()\n", __FUNCTION__);

    // TODO: Add your code below...
    

    MY_LOG(
        "[+evaluate_PCA_LUT_index]"
        "(rCamInfo.eIdx_PCA_LUT, rCamInfo.rAWBInfo.i4CCT, rCamInfo.rAWBInfo.i4FluorescentIndex)=(%d, %d, %d)"
        , rCamInfo.eIdx_PCA_LUT, rCamInfo.rAWBInfo.i4CCT, rCamInfo.rAWBInfo.i4FluorescentIndex
    );

    EIndex_PCA_LUT_T eIdx_PCA_LUT_new = rCamInfo.eIdx_PCA_LUT;

//    -----------------|-------|--------------|-------|------------------
//                    THA     THB            THC     THD

    MINT32 const THA = 3318;
    MINT32 const THB = 3667;
    MINT32 const THC = 4810;
    MINT32 const THD = 5316;

    switch  (rCamInfo.eIdx_PCA_LUT)
    {
    case eIDX_PCA_HIGH:
        if  ( rCamInfo.rAWBInfo.i4CCT < THA )
        {
            eIdx_PCA_LUT_new = eIDX_PCA_LOW;
        }
        else if ( rCamInfo.rAWBInfo.i4CCT < THC )
        {
            eIdx_PCA_LUT_new = eIDX_PCA_MIDDLE;
        }
        else
        {
            eIdx_PCA_LUT_new = eIDX_PCA_HIGH;
        }
        break;
    case eIDX_PCA_MIDDLE:
        if  ( rCamInfo.rAWBInfo.i4CCT > THD )
        {
            eIdx_PCA_LUT_new = eIDX_PCA_HIGH;
        }
        else if ( rCamInfo.rAWBInfo.i4CCT < THA )
        {
            eIdx_PCA_LUT_new = eIDX_PCA_LOW;
        }
        else
        {
            eIdx_PCA_LUT_new = eIDX_PCA_MIDDLE;
        }
        break;
    case eIDX_PCA_LOW:
        if  ( rCamInfo.rAWBInfo.i4CCT > THD )
        {
	        eIdx_PCA_LUT_new = eIDX_PCA_HIGH;
        }
        else if ( rCamInfo.rAWBInfo.i4CCT > THB )
        {
            eIdx_PCA_LUT_new = eIDX_PCA_MIDDLE;
        }
        else
        {
            eIdx_PCA_LUT_new = eIDX_PCA_LOW;
        }
        break;
    }

    if  ( rCamInfo.eIdx_PCA_LUT != eIdx_PCA_LUT_new )
    {
        MY_LOG(
            "[-evaluate_PCA_LUT_index] PCA_LUT_index(old,new)=(%d,%d)"
            , rCamInfo.eIdx_PCA_LUT, eIdx_PCA_LUT_new
        );
    }

    return eIdx_PCA_LUT_new;
}

EIndex_Shading_CCT_T
IspTuningCustom::
evaluate_Shading_CCT_index  (
        RAWIspCamInfo const& rCamInfo
)   const
{
    UINT32 i4CCT	= rCamInfo.rAWBInfo.i4CCT;
	MINT32 i4PT		= rCamInfo.rAWBInfo.rProb.i4P[AWB_LIGHT_TUNGSTEN];//20130103 Jouny
	MINT32 i4PW		= rCamInfo.rAWBInfo.rProb.i4P[AWB_LIGHT_WARM_FLUORESCENT];//20130103 Jouny
	MINT32 i4DFIDX	= rCamInfo.rAWBInfo.i4DaylightFluorescentIndex;//20130103 Jouny

    EIndex_Shading_CCT_T eIdx_Shading_CCT_new = rCamInfo.eIdx_Shading_CCT;

//    -----------------|----|----|--------------|----|----|------------------
//                   THH2  TH2  THL2                   THH1  TH1  THL1

    MINT32 const THL1	= 2850;
    MINT32 const THH1	= 3484;
    MINT32 const TH1	= (THL1+THH1)/2; //(THL1 +THH1)/2
    MINT32 const THL2	= 4673;
    MINT32 const THH2	= 5155;
    MINT32 const TH2	= (THL2+THH2)/2;//(THL2 +THH2)/2
    MINT32  TH4			= 100;	//20130103 Jouny    
    MINT32  TH3			= -20;	//20130103 Jouny
	MY_LOG("[8 evaluate_Shading_CCT_index] CCT:%d DF_IDX:%d i4PT:%d i4PW:%d\n",i4CCT,i4DFIDX,i4PT,i4PW);  
	
    switch  (rCamInfo.eIdx_Shading_CCT)
    {
    case eIDX_Shading_CCT_ALight:
        if  ( i4CCT < THH1 ) 
        {
        	//20130103 Jouny
#if 0
        	if(i4PT > TH4 || i4PW > TH4)
        	{
        		eIdx_Shading_CCT_new = eIDX_Shading_CCT_ALight;
        	}
			else
			{
				eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
			} 
#else
			eIdx_Shading_CCT_new = eIDX_Shading_CCT_ALight;
#endif
			
        }
        else if ( i4CCT <  TH2)
        {
            eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
        }
        else
        {
        	//20130103 Jouny
        	if(i4DFIDX < TH3)
        	{
        		eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
        	}
			else
			{
            	eIdx_Shading_CCT_new = eIDX_Shading_CCT_D65;
			}
        }
        break;
    case eIDX_Shading_CCT_CWF:
        if  ( i4CCT < THL1 )
        {
        	//20130103 Jouny
#if 0
        	if(i4PT > TH4 || i4PW > TH4)
        	{
        		eIdx_Shading_CCT_new = eIDX_Shading_CCT_ALight;
        	}
			else
			{
				eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
			} 
#else
			eIdx_Shading_CCT_new = eIDX_Shading_CCT_ALight;
#endif

        }
        else if ( i4CCT < THH2 )
        {
            eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
        }
        else
        {
        	//20130103 Jouny
        	if(i4DFIDX < TH3)
        	{
        		eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
        	}
			else
			{
            	eIdx_Shading_CCT_new = eIDX_Shading_CCT_D65;
			}

        }
        break;
    case eIDX_Shading_CCT_D65:
        if  ( i4CCT < TH1 )
        {
        	//20130103 Jouny
#if 0
        	if(i4PT > TH4 || i4PW > TH4)
        	{
        		eIdx_Shading_CCT_new = eIDX_Shading_CCT_ALight;
        	}
			else
			{
				eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
			} 
#else
			eIdx_Shading_CCT_new = eIDX_Shading_CCT_ALight;
#endif

        }
        else if ( i4CCT < THL2 )
        {
            eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
        }
        else
        {
        	//20130103 Jouny
        	if(i4DFIDX < TH3)
        	{
        		eIdx_Shading_CCT_new = eIDX_Shading_CCT_CWF;
        	}
			else
			{
            	eIdx_Shading_CCT_new = eIDX_Shading_CCT_D65;
			}


        }
        break;
    }
//#if ENABLE_MY_LOG
    if  ( rCamInfo.eIdx_Shading_CCT != eIdx_Shading_CCT_new )
    {
        LOGD(
            "[-evaluate_Shading_CCT_index] Shading CCT Idx(old,new)=(%d,%d), i4CCT = %d\n"
            , rCamInfo.eIdx_Shading_CCT, eIdx_Shading_CCT_new,i4CCT
        );
    }
//#endif
	MY_LOG("[evaluate_Shading_CCT_index] eIdx_Shading_CCT_new:%d\n",eIdx_Shading_CCT_new);  
	
		
    return  eIdx_Shading_CCT_new;
}
EIndex_ISO_T
IspTuningCustom::
map_ISO_value_to_index(MUINT32 const u4Iso) const
{
    MY_LOG("%s()\n", __FUNCTION__);

    if ( u4Iso < 150 )
    {
        return  eIDX_ISO_100;
    }
    else if ( u4Iso < 300 )
    {
        return  eIDX_ISO_200;
    }
    else if ( u4Iso < 600 )
    {
        return  eIDX_ISO_400;
    }
    else if ( u4Iso < 1200 )
    {
        return  eIDX_ISO_800;
    }
    else if ( u4Iso < 2000 )
    {
        return  eIDX_ISO_1600;
    }
    else if ( u4Iso < 2800 )
    {
        return  eIDX_ISO_2400;
    }

    return  eIDX_ISO_3200;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
IspTuningCustom::
refineLightSourceAWBGainforMultiCCM(AWB_GAIN_T& rD65, AWB_GAIN_T& rTL84, AWB_GAIN_T& rCWF, AWB_GAIN_T& rA)
{
    MY_LOG("%s()\n", __FUNCTION__);

    MY_LOG("D65 AWB Gain = (%d, %d, %d)\n", rD65.i4R, rD65.i4G, rD65.i4B);
    MY_LOG("TL84 AWB Gain = (%d, %d, %d)\n", rTL84.i4R, rTL84.i4G, rTL84.i4B);
    MY_LOG("CWF AWB Gain = (%d, %d, %d)\n", rCWF.i4R, rCWF.i4G, rCWF.i4B);
    MY_LOG("A AWB Gain = (%d, %d, %d)\n", rA.i4R, rA.i4G, rA.i4B);
}


#if 0





EIndex_CCM_CCT_T
IspTuningCustom::
evaluate_CCM_CCT_index  (
    EIndex_CCM_CCT_T const eIdx_CCM_CCT_old,
    MINT32 const i4CCT,
    MINT32 const i4FluorescentIndex
)   const
{
    MY_LOG(
        "[+evaluate_CCM_CCT_index]"
        "(eIdx_CCM_CCT_old, i4CCT, i4FluorescentIndex)=(%d, %d, %d)"
        , eIdx_CCM_CCT_old, i4CCT, i4FluorescentIndex
    );

    EIndex_CCM_CCT_T eIdx_CCM_CCT_new = eIdx_CCM_CCT_old;

//    -----------------|---|---|--------------|---|---|------------------
//                                THA TH1 THB              THC TH2  THD

    MINT32 const THA = 3318;
    MINT32 const TH1 = 3484;
    MINT32 const THB = 3667;
    MINT32 const THC = 4810;
    MINT32 const TH2 = 5050;
    MINT32 const THD = 5316;
    MINT32 const F_IDX_TH1 = 25;
    MINT32 const F_IDX_TH2 = -25;

    switch  (eIdx_CCM_CCT_old)
    {
    case eIDX_CCM_CCT_TL84:
        if  ( i4CCT < THB )
        {
            eIdx_CCM_CCT_new = eIDX_CCM_CCT_TL84;
        }
        else if ( i4CCT < THD )
        {
            if  ( i4FluorescentIndex < F_IDX_TH2 )
                eIdx_CCM_CCT_new = eIDX_CCM_CCT_CWF;
            else
                eIdx_CCM_CCT_new = eIDX_CCM_CCT_TL84;
        }
        else
        {
            eIdx_CCM_CCT_new = eIDX_CCM_CCT_D65;
        }
        break;
    case eIDX_CCM_CCT_CWF:
        if  ( i4CCT < THA )
        {
            eIdx_CCM_CCT_new = eIDX_CCM_CCT_TL84;
        }
        else if ( i4CCT < THD )
        {
            if  ( i4FluorescentIndex > F_IDX_TH1 )
                eIdx_CCM_CCT_new = eIDX_CCM_CCT_TL84;
            else
                eIdx_CCM_CCT_new = eIDX_CCM_CCT_CWF;
        }
        else
        {
            eIdx_CCM_CCT_new = eIDX_CCM_CCT_D65;
        }
        break;
    case eIDX_CCM_CCT_D65:
        if  ( i4CCT > THC )
        {
	        eIdx_CCM_CCT_new = eIDX_CCM_CCT_D65;
        }
        else if ( i4CCT > TH1 )
        {
            if(i4FluorescentIndex > F_IDX_TH2)
                eIdx_CCM_CCT_new = eIDX_CCM_CCT_TL84;
            else
                eIdx_CCM_CCT_new = eIDX_CCM_CCT_CWF;
        }
        else
        {
            eIdx_CCM_CCT_new = eIDX_CCM_CCT_TL84;
        }
        break;
    }

//#if ENABLE_MY_LOG
    if  ( eIdx_CCM_CCT_old != eIdx_CCM_CCT_new )
    {
        LOGD(
            "[-evaluate_CCM_CCT_index] CCM CCT Idx(old,new)=(%d,%d)"
            , eIdx_CCM_CCT_old, eIdx_CCM_CCT_new
        );
    }
//#endif
    return  eIdx_CCM_CCT_new;
}








MBOOL
IspTuningCustom::
is_to_invoke_offline_capture(RAWIspCamInfo const& rCamInfo) const
{
#if 1
    EIndex_Scene_T const eIdx_Scene = rCamInfo.eIdx_Scene;
    EIndex_ISO_T const     eIdx_ISO = rCamInfo.eIdx_ISO;        //  ISO enum
    MUINT32 const        u4ISOValue = rCamInfo.u4ISOValue;      //  real ISO
    MUINT32 const             i4CCT = rCamInfo.i4CCT;
    MUINT32 const  u4ZoomRatio_x100 = rCamInfo.u4ZoomRatio_x100;
    MINT32 const   i4LightValue_x10 = rCamInfo.i4LightValue_x10;
#endif
#if 0
    switch  (eIdx_ISO)
    {
    case eIDX_ISO_100:
    case eIDX_ISO_200:
    case eIDX_ISO_400:
    case eIDX_ISO_800:
    case eIDX_ISO_1600:
    default:
        break;
    }
#endif
#if 0
		if(eIdx_ISO==eIDX_ISO_400 ||eIdx_ISO==eIDX_ISO_800 || eIdx_ISO==eIDX_ISO_1600)
		{
			return  MTRUE;
		}
		else
#endif
    return  MTRUE;
}
#endif



