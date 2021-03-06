
#ifndef __CSSINTERFACE_H__
#define __CSSINTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define CSS_PLMN_ID_LEN                 (3)

#define CSS_MAX_RAT_NUM                 (3)
#define CSS_MAX_BAND_FREQ_RANGE_NUM     (20)

#define CSS_MAX_BAND_NUM                (22)
#define CSS_BAND_WIDTH                  (1.1)
/*****************************************************************************
  3 枚举定义
*****************************************************************************/


enum CSS_MSG_ID_ENUM
{
    ID_CSS_MULTI_BAND_SCAN_REQ,                 /* _H2ASN_MsgChoice CSS_MULTI_BAND_SCAN_REQ_STRU */ /* GUNAS在通知CSS扫频时，需要将所有接入技术都挂起，然后在通知搜网；其他
                                                                                                        接入层通知CSS扫频时，需要先将自己的物理层设置为从模  */
    ID_CSS_STOP_BAND_SCAN_REQ,                  /* _H2ASN_MsgChoice CSS_STOP_BAND_SCAN_REQ_STRU */

    ID_CSS_MULTI_BAND_SCAN_CNF,                 /* _H2ASN_MsgChoice CSS_MULTI_BAND_SCAN_CNF_STRU */
    ID_CSS_STOP_BAND_SCAN_CNF,                  /* _H2ASN_MsgChoice CSS_STOP_BAND_SCAN_CNF_STRU */
};
typedef VOS_UINT32 CSS_MSG_ID_ENUM_UINT32;

/*********************************************************
 枚举名    : CSS_BAND_IND_ENUM
 协议表格  :
 ASN.1描述 :
 枚举说明  : Band指示枚举
**********************************************************/
enum CSS_BAND_IND_ENUM
{
    CSS_BAND_IND_NONE,
    CSS_BAND_IND_1                   = 1 ,
    CSS_BAND_IND_2,
    CSS_BAND_IND_3,
    CSS_BAND_IND_4,
    CSS_BAND_IND_5,
    CSS_BAND_IND_6,
    CSS_BAND_IND_7,
    CSS_BAND_IND_8,
    CSS_BAND_IND_9,
    CSS_BAND_IND_10,
    CSS_BAND_IND_11,
    CSS_BAND_IND_12,
    CSS_BAND_IND_13,
    CSS_BAND_IND_14,
    CSS_BAND_IND_15,
    CSS_BAND_IND_16,
    CSS_BAND_IND_17                = 17,
    CSS_BAND_IND_18,
    CSS_BAND_IND_19,
    CSS_BAND_IND_20,
    CSS_BAND_IND_21,
    CSS_BAND_IND_22,
    CSS_BAND_IND_23,
    CSS_BAND_IND_24,
    CSS_BAND_IND_25,
    CSS_BAND_IND_26,
    CSS_BAND_IND_27,
    CSS_BAND_IND_28,
    CSS_BAND_IND_29,
    CSS_BAND_IND_30,
    CSS_BAND_IND_31,
    CSS_BAND_IND_32,
    CSS_BAND_IND_33                = 33,
    CSS_BAND_IND_34,
    CSS_BAND_IND_35,
    CSS_BAND_IND_36,
    CSS_BAND_IND_37,
    CSS_BAND_IND_38,
    CSS_BAND_IND_39,
    CSS_BAND_IND_40,
    CSS_BAND_IND_41,
    CSS_BAND_IND_42,
    CSS_BAND_IND_43,
//    CSS_BAND_IND_64                = 64,

    /* 非标频段begin */
/*    CSS_BAND_IND_101  = 101,
    CSS_BAND_IND_102  = 102,
    CSS_BAND_IND_103  = 103,
    CSS_BAND_IND_104  = 104,
    CSS_BAND_IND_105  = 105,
    CSS_BAND_IND_106  = 106,
    CSS_BAND_IND_107  = 107,
    CSS_BAND_IND_108  = 108,
    CSS_BAND_IND_109  = 109,
    CSS_BAND_IND_110  = 110,
    CSS_BAND_IND_111  = 111,
    CSS_BAND_IND_112  = 112,
    CSS_BAND_IND_113  = 113,
    CSS_BAND_IND_114  = 114,
    CSS_BAND_IND_115  = 115,
    CSS_BAND_IND_116  = 116,*/
    /* 非标频段end */

    CSS_BAND_IND_BUTT
};
typedef VOS_UINT16 CSS_BAND_IND_ENUM_UINT16;

/*****************************************************************************
 枚举名: CSS_COVERAGE_TYPE_ENUM_UINT8
 协议格式:
 ASN.1描述:
 枚举说明:
*****************************************************************************/
enum CSS_COVERAGE_TYPE_ENUM
{
    CSS_COVERAGE_TYPE_NONE     = 0,                 /* 无网络覆盖 */
    CSS_COVERAGE_TYPE_LOW      = 1,                 /* 有质量网络覆盖   */
    CSS_COVERAGE_TYPE_HIGH     = 2,                 /* 有高质量网络覆盖 */
    CSS_COVERAGE_TYPE_BUTT
};
typedef VOS_UINT8  CSS_COVERAGE_TYPE_ENUM_UINT8;

/*****************************************************************************
 枚举名: CSS_MULTI_BAND_SCAN_RESULT_ENUM_UINT8
 协议格式:
 ASN.1描述:
 枚举说明:
*****************************************************************************/
enum CSS_MULTI_BAND_SCAN_RESULT_ENUM
{
    CSS_MULTI_BAND_SCAN_RESULT_SUCC             = 0,                /* 扫频成功 */
    CSS_MULTI_BAND_SCAN_RESULT_FAIL_SCANING     = 1,                /* 正在扫频过程中，直接失败   */
    CSS_MULTI_BAND_SCAN_RESULT_FAIL_OTHERS      = 2,                /* 其他原因导致的扫频失败 */
    CSS_MULTI_BAND_SCAN_RESULT_NO_RF            = 3,                /* 无射频资源 */
    CSS_MULTI_BAND_SCAN_RESULT_FAIL_BUTT
};
typedef VOS_UINT8  CSS_MULTI_BAND_SCAN_RESULT_ENUM_UINT8;


enum CSS_MULTI_BAND_SCAN_TYPE
{
    CSS_BAND_SCAN_COMM,                     /* 通用的扫描方式 */
    CSS_BAND_SCAN_MCC_BASED,                /* 基于MCC的扫描方式 */
    CSS_BAND_SCAN_ALL,                      /* 基于ALL的扫描方式 */
    CSS_BAND_SCAN_BUTT
};
typedef VOS_UINT32 CSS_BAND_SCAN_TYPE_ENUM_UINT32;

/*****************************************************************************
 枚举名    : CSS_RAT_TYPE_ENUM
 协议表格  :
 ASN.1描述 :
 枚举说明  : 接入技术枚举定义
*****************************************************************************/
enum CSS_RAT_TYPE_ENUM
{
    CSS_RAT_GSM                     = 0,
    CSS_RAT_UMTS_FDD                = 1,
    CSS_RAT_LTE                     = 2,
    CSS_RAT_TYPE_BUTT
};
typedef VOS_UINT8  CSS_RAT_TYPE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : CSS_RESULT_ENUM
 协议表格  :
 ASN.1描述 :
 枚举说明  : 物理层原语操作结果数据结构
*****************************************************************************/
enum CSS_RESULT_ENUM
{
    CSS_RESULT_SUCC                 = 0,                /* 操作成功 */
    CSS_RESULT_FAIL ,                                   /* 操作失败 */
    CSS_RESULT_BUTT
};
typedef VOS_UINT32    CSS_RESULT_ENUM_UINT32;

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
/*****************************************************************************
结构名    :CSS_PLMN_ID_STRU中
协议表格  :
ASN.1描述 :
结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucPlmnId[CSS_PLMN_ID_LEN];
    VOS_UINT8                           ucRsv;
}CSS_PLMN_ID_STRU;



/*****************************************************************************
 结构名    : CSS_FREQ_RANGE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 有能量频率范围CSS_FREQ_RANGE_STRU
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  usCentralFreq;          /* 中心频点，单位100khz，带宽是1.1M的闭区间，
                                                                            各接入层需要自己处理各BAND的边界 */
    VOS_INT16                                   sRssi;                  /* RSSI的值，精度是1/64 db */
}CSS_FREQ_RANGE_STRU;


/*****************************************************************************
 结构名    : CSS_RAT_LIST
 协议表格  :
 ASN.1描述 :
 结构说明  : 接入技术LIST
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucRatNum;
    CSS_RAT_TYPE_ENUM_UINT8             aucRatList[CSS_MAX_RAT_NUM];
}CSS_RAT_LIST;


/*****************************************************************************
 结构名    : CSS_BAND_SCAN_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 高能量范围MULTI_BAND_SCAN_INFO_STRU
*****************************************************************************/
typedef struct
{
    CSS_BAND_IND_ENUM_UINT16                    enBandInd;                          /* 频带指示 */
    VOS_UINT16                                  usFreqNum;                          /* 物理层上报的频段数目 */
    CSS_FREQ_RANGE_STRU                         astFreqScanResult[CSS_MAX_BAND_FREQ_RANGE_NUM];          /* 频段信息 */
}CSS_BAND_SCAN_INFO_STRU;

/*****************************************************************************
 结构名    : CSS_BAND_SCAN_LIST_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 高能量范围list
*****************************************************************************/
typedef struct
{
    VOS_UINT8                                       ucBandNum;
    VOS_UINT8                                       aucReserve[3];
    CSS_BAND_SCAN_INFO_STRU                         astScanRange[CSS_MAX_BAND_NUM];
}CSS_BAND_SCAN_LIST_INFO_STRU;

/*****************************************************************************
 结构名    : CSS_MULTI_BAND_SCAN_REQ_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CSS_MULTI_BAND_SCAN_REQ_STRU对应的结构体，通知底层进行band扫频
 ---------------------------------------------------------------------------
                 ||(BIT8)|(BIT7)|(BIT6)|(BIT5)|(BIT4)|(BIT3)|(BIT2)|(BIT1)
    ---------------------------------------------------------------------------
    aucMcc[0] ||    MCC digit 2         |           MCC digit 1
    ---------------------------------------------------------------------------
    aucMcc[1] ||    0                   |           MCC digit 3
    ---------------------------------------------------------------------------
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CSS_MSG_ID_ENUM_UINT32                          ulMsgId;                    /*消息名称*/
    VOS_UINT32                                      ulOpid;
    CSS_BAND_SCAN_TYPE_ENUM_UINT32                  enBandScanType;             /*扫描类型*/

    VOS_UINT32                                      bitOpMcc        : 1;
    VOS_UINT32                                      bitOpHighRssi   : 1;        /* 是否是高能量的搜索,在ALL类型或者COMM类型的扫频时，
                                                                                    才需要判断该bit位是否有效 */
    VOS_UINT32                                      bitSpace        : 30;

    VOS_UINT8                                       aucMcc[2];                  /* MCC类型,MCC_BASED类型搜网时才需要携带 */
    VOS_UINT8                                       aucReserve[2];
    CSS_RAT_LIST                                    stRatList;                  /* 搜索BAND的rat list */
}CSS_MULTI_BAND_SCAN_REQ_STRU;


/*****************************************************************************
 结构名    : CSS_STOP_BAND_SCAN_REQ_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CSS_STOP_BAND_SCAN_REQ对应的结构体，
             高层通知底层停止band扫频
             CSS收到后，先通知PHY停止扫频，并通知PHY进入从模
             PHY回复进入从模后，CSS通过CSS_STOP_BAND_SCAN_CNF回复高层
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CSS_MSG_ID_ENUM_UINT32                          ulMsgId;                    /*消息名称*/

    VOS_UINT8                                       aucReserve[4];
}CSS_STOP_BAND_SCAN_REQ_STRU;

/*****************************************************************************
 结构名    : CSS_MULTI_BAND_SCAN_CNF_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CSS_MULTI_BAND_SCAN_CNF_STRU对应的结构体，
             PHY上报扫频结果，CSS完成BAND搜索之后，会先挂起PHY
             随后会通过该消息上报高层扫频结果
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CSS_MSG_ID_ENUM_UINT32                          ulMsgId;                    /*消息名称*/
    VOS_UINT32                                      ulOpid;

    CSS_MULTI_BAND_SCAN_RESULT_ENUM_UINT8           enResult;                   /* 扫描结果，如果没有扫到或者物理层异常时，携带的结果时失败 */
    CSS_COVERAGE_TYPE_ENUM_UINT8                    enGsmCoverageType;      /* 如果扫频请求中指示的是高能量搜索，上报的结果只有高能量覆盖或者无扫频结果 */
    CSS_COVERAGE_TYPE_ENUM_UINT8                    enUmtsFddCoverageType;
    CSS_COVERAGE_TYPE_ENUM_UINT8                    enLteCoverageType;
}CSS_MULTI_BAND_SCAN_CNF_STRU;

/*****************************************************************************
 结构名    : CSS_RAT_COVERAGE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CSS_GetBandScanInfo调用着传入接入技术和覆盖参数
*****************************************************************************/
typedef struct
{
    CSS_RAT_TYPE_ENUM_UINT8                         enRatType;
    CSS_COVERAGE_TYPE_ENUM_UINT8                    enCoverageType;

    VOS_UINT8                                       aucReserve[2];

}CSS_RAT_COVERAGE_STRU;

/*****************************************************************************
 结构名    : CSS_STOP_BAND_SCAN_CNF_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CSS_STOP_BAND_SCAN_CNF对应的结构体，
             PHY上报扫频结果，CSS完成BAND搜索之后，会先挂起PHY
             随后会通过该消息上报高层扫频结果
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CSS_MSG_ID_ENUM_UINT32                          ulMsgId;                    /*消息名称*/

    CSS_RESULT_ENUM_UINT32                          enResult;                   /*0成功，1失败*/
}CSS_STOP_BAND_SCAN_CNF_STRU;

typedef struct
{
    VOS_UINT32                          ulMsgId;                                /*_H2ASN_MsgChoice_Export CSS_MSG_ID_ENUM_UINT32*/
    VOS_UINT8                           aucMsg[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          CSS_MSG_ID_ENUM_UINT32
    ****************************************************************************/
}CSS_INTERFACE_MSG_DATA;
/*_H2ASN_Length UINT32*/


typedef struct
{
    VOS_MSG_HEADER
    CSS_INTERFACE_MSG_DATA           stMsgData;
} CssInterface_MSG;


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
/* 提供给外部调用，获取上次扫频结果的API。
stRatCoverage:获取哪个接入技术下的哪种覆盖的扫频结果；
pstCssBandInfo：外部模块传入存储扫频结果的地址，该内存由调用者分配，以及释放 */
CSS_RESULT_ENUM_UINT32 CSS_GetBandScanInfo(CSS_RAT_COVERAGE_STRU stRatCoverage, CSS_BAND_SCAN_LIST_INFO_STRU* pstCssBandInfo);






#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of ComInterface.h */
