/******************************************************************************

                 版权所有 (C), 2001-2015, 华为技术有限公司

 ******************************************************************************
  文 件 名   : soc_isp_fbcyuv_interface.h
  版 本 号   : 初稿
  作    者   : Excel2Code
  生成日期   : 2015-03-10 11:21:36
  最近修改   :
  功能描述   : 接口头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2015年3月10日
    作    者   : fWX220878
    修改内容   : 从《Hi3650V100 SOC寄存器手册_ISP_FBCYUV.xml》自动生成

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#ifndef __SOC_ISP_FBCYUV_INTERFACE_H__
#define __SOC_ISP_FBCYUV_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/

/****************************************************************************
                     (1/1) FBCYUV
 ****************************************************************************/
/* 寄存器说明：
   位域定义UNION结构:  SOC_ISP_FBCYUV_FBC_CONFIG1_UNION */
#define SOC_ISP_FBCYUV_FBC_CONFIG1_ADDR(base)         ((base) + (0x0000))

/* 寄存器说明：
   位域定义UNION结构:  SOC_ISP_FBCYUV_FBC_CONFIG2_UNION */
#define SOC_ISP_FBCYUV_FBC_CONFIG2_ADDR(base)         ((base) + (0x0004))

/* 寄存器说明：
   位域定义UNION结构:  SOC_ISP_FBCYUV_FBC_STREAM_SIZE_UNION */
#define SOC_ISP_FBCYUV_FBC_STREAM_SIZE_ADDR(base)     ((base) + (0x0008))





/*****************************************************************************
  3 枚举定义
*****************************************************************************/



/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/



/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/



/*****************************************************************************
  7 UNION定义
*****************************************************************************/

/****************************************************************************
                     (1/1) FBCYUV
 ****************************************************************************/
/*****************************************************************************
 结构名    : SOC_ISP_FBCYUV_FBC_CONFIG1_UNION
 结构说明  : FBC_CONFIG1 寄存器结构定义。地址偏移量:0x0000，初值:0x00000001，宽度:32
 寄存器说明: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass     : 1;  /* bit[0-0]  : Bypass:
                                                      0: the module is active
                                                      1: the module is bypassed
                                                      the configuration is taken into account on a SOF.(Same HW behavior as RW_SHADOW) */
        unsigned int  reserved_0 : 15; /* bit[1-15] :  */
        unsigned int  line_width : 13; /* bit[16-28]: line width-1 (max is LM_SIZE-1 = 4224-1) */
        unsigned int  reserved_1 : 3;  /* bit[29-31]:  */
    } reg;
} SOC_ISP_FBCYUV_FBC_CONFIG1_UNION;
#endif
#define SOC_ISP_FBCYUV_FBC_CONFIG1_bypass_START      (0)
#define SOC_ISP_FBCYUV_FBC_CONFIG1_bypass_END        (0)
#define SOC_ISP_FBCYUV_FBC_CONFIG1_line_width_START  (16)
#define SOC_ISP_FBCYUV_FBC_CONFIG1_line_width_END    (28)


/*****************************************************************************
 结构名    : SOC_ISP_FBCYUV_FBC_CONFIG2_UNION
 结构说明  : FBC_CONFIG2 寄存器结构定义。地址偏移量:0x0004，初值:0x00460F20，宽度:32
 寄存器说明: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  initqpy   : 6;  /* bit[0-5]  :  */
        unsigned int  reserved_0: 2;  /* bit[6-7]  :  */
        unsigned int  initqpuv  : 5;  /* bit[8-12] :  */
        unsigned int  reserved_1: 3;  /* bit[13-15]:  */
        unsigned int  bit_thres : 8;  /* bit[16-23]:  */
        unsigned int  reserved_2: 8;  /* bit[24-31]:  */
    } reg;
} SOC_ISP_FBCYUV_FBC_CONFIG2_UNION;
#endif
#define SOC_ISP_FBCYUV_FBC_CONFIG2_initqpy_START    (0)
#define SOC_ISP_FBCYUV_FBC_CONFIG2_initqpy_END      (5)
#define SOC_ISP_FBCYUV_FBC_CONFIG2_initqpuv_START   (8)
#define SOC_ISP_FBCYUV_FBC_CONFIG2_initqpuv_END     (12)
#define SOC_ISP_FBCYUV_FBC_CONFIG2_bit_thres_START  (16)
#define SOC_ISP_FBCYUV_FBC_CONFIG2_bit_thres_END    (23)


/*****************************************************************************
 结构名    : SOC_ISP_FBCYUV_FBC_STREAM_SIZE_UNION
 结构说明  : FBC_STREAM_SIZE 寄存器结构定义。地址偏移量:0x0008，初值:0x00000000，宽度:32
 寄存器说明: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  streamsize : 22; /* bit[0-21] : length of the current encoded stream for the full frame, in 64b words
                                                      max=2635776 */
        unsigned int  reserved   : 10; /* bit[22-31]:  */
    } reg;
} SOC_ISP_FBCYUV_FBC_STREAM_SIZE_UNION;
#endif
#define SOC_ISP_FBCYUV_FBC_STREAM_SIZE_streamsize_START  (0)
#define SOC_ISP_FBCYUV_FBC_STREAM_SIZE_streamsize_END    (21)






/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_isp_fbcyuv_interface.h */
