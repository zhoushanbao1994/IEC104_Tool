#include "app.h"

App::App(QObject *parent) : QObject(parent)
{

}

QStringList App::YX_Names = QStringList()
        << "PCS0_PCS总报警状态                    "
        << "PCS0_PCS总故障状态                    "
        << "PCS0_PCS总运行状态-停机               "
        << "PCS0_PCS总运行状态-待机               "
        << "PCS0_PCS总运行状态-故障               "
        << "PCS0_PCS总运行状态-充电               "
        << "PCS0_PCS总运行状态-放电               "
        << "PCS0_PCS总运行状态-零功率             "
        << "PCS0_PCS通讯中断                      "
        << "PCS0_PCS电流异常                      "
        << "PCS0_PCS频率异常                      "
        << "PCS0_PCS电压异常                      "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_报警：PLC接收主控通讯字超时      "
        << "PCS0_报警：保留                       "
        << "PCS0_报警：风机超温                   "
        << "PCS0_报警：电抗器超温                 "
        << "PCS0_报警：运行中风机停机             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_保留                             "
        << "PCS0_报警：PLC封锁主控超时            "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_报警：过温降容报警               "
        << "PCS0_报警：过湿异常                   "
        << "PCS0_报警：绝缘检测设备异常           "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_报警：滤波板微断                 "
        << "PCS0_预留                             "
        << "PCS0_报警：烟雾报警                   "
        << "PCS0_报警：火焰报警                   "
        << "PCS0_报警：AC侧主回路分闸电流超限     "
        << "PCS0_报警：DC侧主回路分闸电流超限     "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_故障：孤岛模式误合交流软启错误   "
        << "PCS0_故障：超时未收到运行命令         "
        << "PCS0_故障：从机同步通讯故障           "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_故障：C相IGBT故障                "
        << "PCS0_故障：B相IGBT故障                "
        << "PCS0_故障：A相IGBT故障                "
        << "PCS0_故障：C相硬件过流                "
        << "PCS0_故障：B相硬件过流                "
        << "PCS0_故障：A相硬件过流                "
        << "PCS0_故障：A相FPGA过流                "
        << "PCS0_故障：B相FPGA过流                "
        << "PCS0_故障：C相FPGA过流                "
        << "PCS0_故障：IGBT温度故障               "
        << "PCS0_故障：电池直压FPGA过压           "
        << "PCS0_故障：电容直压FPGA过压           "
        << "PCS0_故障：电容直压硬件过压           "
        << "PCS0_故障：电池直压硬件过压           "
        << "PCS0_故障：电池充电电流FPGA过流       "
        << "PCS0_故障：开关电源故障               "
        << "PCS0_故障：电池放电电流FPGA过流       "
        << "PCS0_ARM与FPGA通信超时                "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS0_故障：FPGA故障                   "
        << "PCS0_故障：并口通信错误               "
        << "PCS0_故障：存储数据错误               "
        << "PCS0_故障：系统过压                   "
        << "PCS0_故障：系统欠压                   "
        << "PCS0_故障：输出过压                   "
        << "PCS0_故障：输出欠压                   "
        << "PCS0_故障：电压畸变超限               "
        << "PCS0_故障：网侧三相电压不平衡         "
        << "PCS0_故障：输出过流                   "
        << "PCS0_故障：输出速断                   "
        << "PCS0_故障：电流检测故障               "
        << "PCS0_故障：电网频率超上限             "
        << "PCS0_故障：电网频率超下限             "
        << "PCS0_故障：电池电压软件过压           "
        << "PCS0_故障：电池充电电流软件过流       "
        << "PCS0_故障：电池放电电流软件过流       "
        << "PCS0_故障：电池电压过低               "
        << "PCS0_故障：系统缺相                   "
        << "PCS0_故障：相序错误                   "
        << "PCS0_故障：输出电流直流分量超限       "
        << "PCS0_故障：直流极性反接               "
        << "PCS0_故障：孤岛保护                   "
        << "PCS0_故障：主控与PLC通信错误          "
        << "PCS0_故障：主控与HMI通信错误          "
        << "PCS0_预留                             "
        << "PCS0_故障：AC侧预充电回路合闸超时     "
        << "PCS0_故障：AC侧预充电回路分闸超时     "
        << "PCS0_故障：AC侧主回路合闸超时         "
        << "PCS0_故障：AC侧主回路分闸超时         "
        << "PCS0_故障：DC侧预充电回路合闸超时     "
        << "PCS0_故障：DC侧预充电回路分闸超时     "
        << "PCS0_故障：DC侧主回路合闸超时         "
        << "PCS0_故障：DC侧主回路分闸超时         "
        << "PCS0_故障：风机超温                   "
        << "PCS0_预留                             "
        << "PCS0_故障：电抗器超温                 "
        << "PCS0_故障：AC侧软启充电过流           "
        << "PCS0_故障：DC侧软启充电过流           "
        << "PCS0_故障：蓄电池侧电压过低（<600VDC）"
        << "PCS0_预留                             "
        << "PCS0_故障：PLC封锁主控超时            "
        << "PCS0_故障：主控运行超时故障           "
        << "PCS0_故障：交流侧软起故障             "
        << "PCS0_故障：直流侧软起故障             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_故障：远程通讯故障               "
        << "PCS0_故障：PCS绝缘异常                "
        << "PCS0_故障：AC滤波板合闸超时           "
        << "PCS0_故障：AC滤波板分闸超时           "
        << "PCS0_故障：主控复位超时               "
        << "PCS0_故障：网侧电抗器超温             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS0_PCS总报警状态                    "
        << "PCS0_PCS总运行状态                    "
        << "PCS0_PCS总故障状态                    "
        << "PCS0_绝缘检测状态查询                 "
        << "PCS0_PCS本地急停输入                  "
        << "PCS0_PCS远程状态                      "
        << "PCS0_PCS本地启动                      "
        << "PCS0_PCS本地停机                      "
        << "PCS0_交流主开关状态                   "
        << "PCS0_直流主开关状态                   "
        << "PCS0_交流充电开关状态                 "
        << "PCS0_直流充电开关状态                 "
        << "PCS0_保留                             "
        << "PCS0_风机开关状态                     "
        << "PCS0_电压穿越标志                     "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_预留                             "
        << "PCS0_PCS与CCM通讯状态                 "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS0_保留                             "
        << "PCS1_PCS总报警状态                    "
        << "PCS1_PCS总故障状态                    "
        << "PCS1_PCS总运行状态-停机               "
        << "PCS1_PCS总运行状态-待机               "
        << "PCS1_PCS总运行状态-故障               "
        << "PCS1_PCS总运行状态-充电               "
        << "PCS1_PCS总运行状态-放电               "
        << "PCS1_PCS总运行状态-零功率             "
        << "PCS1_PCS通讯中断                      "
        << "PCS1_PCS电流异常                      "
        << "PCS1_PCS频率异常                      "
        << "PCS1_PCS电压异常                      "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_报警：PLC接收主控通讯字超时      "
        << "PCS1_报警：保留                       "
        << "PCS1_报警：风机超温                   "
        << "PCS1_报警：电抗器超温                 "
        << "PCS1_报警：运行中风机停机             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_保留                             "
        << "PCS1_报警：PLC封锁主控超时            "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_报警：过温降容报警               "
        << "PCS1_报警：过湿异常                   "
        << "PCS1_报警：绝缘检测设备异常           "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_报警：滤波板微断                 "
        << "PCS1_预留                             "
        << "PCS1_报警：烟雾报警                   "
        << "PCS1_报警：火焰报警                   "
        << "PCS1_报警：AC侧主回路分闸电流超限     "
        << "PCS1_报警：DC侧主回路分闸电流超限     "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_故障：孤岛模式误合交流软启错误   "
        << "PCS1_故障：超时未收到运行命令         "
        << "PCS1_故障：从机同步通讯故障           "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_故障：C相IGBT故障                "
        << "PCS1_故障：B相IGBT故障                "
        << "PCS1_故障：A相IGBT故障                "
        << "PCS1_故障：C相硬件过流                "
        << "PCS1_故障：B相硬件过流                "
        << "PCS1_故障：A相硬件过流                "
        << "PCS1_故障：A相FPGA过流                "
        << "PCS1_故障：B相FPGA过流                "
        << "PCS1_故障：C相FPGA过流                "
        << "PCS1_故障：IGBT温度故障               "
        << "PCS1_故障：电池直压FPGA过压           "
        << "PCS1_故障：电容直压FPGA过压           "
        << "PCS1_故障：电容直压硬件过压           "
        << "PCS1_故障：电池直压硬件过压           "
        << "PCS1_故障：电池充电电流FPGA过流       "
        << "PCS1_故障：开关电源故障               "
        << "PCS1_故障：电池放电电流FPGA过流       "
        << "PCS1_ARM与FPGA通信超时                "
        << "PCS1_保留                             "
        << "PCS1_保留                             "
        << "PCS1_保留                             "
        << "PCS1_保留                             "
        << "PCS1_保留                             "
        << "PCS1_故障：FPGA故障                   "
        << "PCS1_故障：并口通信错误               "
        << "PCS1_故障：存储数据错误               "
        << "PCS1_故障：系统过压                   "
        << "PCS1_故障：系统欠压                   "
        << "PCS1_故障：输出过压                   "
        << "PCS1_故障：输出欠压                   "
        << "PCS1_故障：电压畸变超限               "
        << "PCS1_故障：网侧三相电压不平衡         "
        << "PCS1_故障：输出过流                   "
        << "PCS1_故障：输出速断                   "
        << "PCS1_故障：电流检测故障               "
        << "PCS1_故障：电网频率超上限             "
        << "PCS1_故障：电网频率超下限             "
        << "PCS1_故障：电池电压软件过压           "
        << "PCS1_故障：电池充电电流软件过流       "
        << "PCS1_故障：电池放电电流软件过流       "
        << "PCS1_故障：电池电压过低               "
        << "PCS1_故障：系统缺相                   "
        << "PCS1_故障：相序错误                   "
        << "PCS1_故障：输出电流直流分量超限       "
        << "PCS1_故障：直流极性反接               "
        << "PCS1_故障：孤岛保护                   "
        << "PCS1_故障：主控与PLC通信错误          "
        << "PCS1_故障：主控与HMI通信错误          "
        << "PCS1_预留                             "
        << "PCS1_故障：AC侧预充电回路合闸超时     "
        << "PCS1_故障：AC侧预充电回路分闸超时     "
        << "PCS1_故障：AC侧主回路合闸超时         "
        << "PCS1_故障：AC侧主回路分闸超时         "
        << "PCS1_故障：DC侧预充电回路合闸超时     "
        << "PCS1_故障：DC侧预充电回路分闸超时     "
        << "PCS1_故障：DC侧主回路合闸超时         "
        << "PCS1_故障：DC侧主回路分闸超时         "
        << "PCS1_故障：风机超温                   "
        << "PCS1_预留                             "
        << "PCS1_故障：电抗器超温                 "
        << "PCS1_故障：AC侧软启充电过流           "
        << "PCS1_故障：DC侧软启充电过流           "
        << "PCS1_故障：蓄电池侧电压过低（<600VDC）"
        << "PCS1_预留                             "
        << "PCS1_故障：PLC封锁主控超时            "
        << "PCS1_故障：主控运行超时故障           "
        << "PCS1_故障：交流侧软起故障             "
        << "PCS1_故障：直流侧软起故障             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_故障：远程通讯故障               "
        << "PCS1_故障：PCS绝缘异常                "
        << "PCS1_故障：AC滤波板合闸超时           "
        << "PCS1_故障：AC滤波板分闸超时           "
        << "PCS1_故障：主控复位超时               "
        << "PCS1_故障：网侧电抗器超温             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_保留                             "
        << "PCS1_保留                             "
        << "PCS1_PCS总报警状态                    "
        << "PCS1_PCS总运行状态                    "
        << "PCS1_PCS总故障状态                    "
        << "PCS1_绝缘检测状态查询                 "
        << "PCS1_PCS本地急停输入                  "
        << "PCS1_PCS远程状态                      "
        << "PCS1_PCS本地启动                      "
        << "PCS1_PCS本地停机                      "
        << "PCS1_交流主开关状态                   "
        << "PCS1_直流主开关状态                   "
        << "PCS1_交流充电开关状态                 "
        << "PCS1_直流充电开关状态                 "
        << "PCS1_保留                             "
        << "PCS1_风机开关状态                     "
        << "PCS1_电压穿越标志                     "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_预留                             "
        << "PCS1_PCS与CCM通讯状态                 "
        << "PCS1_保留                             "
        << "PCS1_保留                             "
        << "PCS1_保留                             ";
QStringList App::YC_Names = QStringList()
        << "PCS0_PCS运行状态2              "
        << "PCS0_A相模块温度               "
        << "PCS0_B相模块温度               "
        << "PCS0_C相模块温度               "
        << "PCS0_环境温度                  "
        << "PCS0_散热器温度                "
        << "PCS0_PCS通讯状态字             "
        << "PCS0_电网电压Uab有效值         "
        << "PCS0_电网电压Ubc有效值         "
        << "PCS0_电网电压Uca有效值         "
        << "PCS0_A相输出电压               "
        << "PCS0_B相输出电压               "
        << "PCS0_C相输出电压               "
        << "PCS0_电网电流Ia有效值          "
        << "PCS0_电网电流Ib有效值          "
        << "PCS0_电网电流Ic有效值          "
        << "PCS0_电网电压频率              "
        << "PCS0_PCS直流侧电压             "
        << "PCS0_PCS直流侧电流             "
        << "PCS0_直流放电功率              "
        << "PCS0_A相输出有功               "
        << "PCS0_B相输出有功               "
        << "PCS0_C相输出有功               "
        << "PCS0_总输出有功                "
        << "PCS0_A相输出无功               "
        << "PCS0_B相输出无功               "
        << "PCS0_C相输出无功               "
        << "PCS0_总输出无功                "
        << "PCS0_A相输出视在               "
        << "PCS0_B相输出视在               "
        << "PCS0_C相输出视在               "
        << "PCS0_总输出视在                "
        << "PCS0_系统A相功率因数           "
        << "PCS0_系统B相功率因数           "
        << "PCS0_系统C相功率因数           "
        << "PCS0_PCS A相功率因数           "
        << "PCS0_PCS B相功率因数           "
        << "PCS0_PCS C相功率因数           "
        << "PCS0_系统电压谐波总畸变率STHDUA"
        << "PCS0_系统电压谐波总畸变率STHDUB"
        << "PCS0_系统电压谐波总畸变率STHDUC"
        << "PCS0_总功率因数                "
        << "PCS0_单元电容直压              "
        << "PCS0_单元输出电压Ua有效值      "
        << "PCS0_单元输出电压Ub有效值      "
        << "PCS0_单元输出电压Uc有效值      "
        << "PCS0_单元桥侧电流Ia有效值      "
        << "PCS0_单元桥侧电流Ib有效值      "
        << "PCS0_单元桥侧电流Ic有效值      "
        << "PCS0_正极接地电阻阻值          "
        << "PCS0_负极接地电阻阻值          "
        << "PCS0_PCS站地址                 "
        << "PCS0_PCS单元总充电量           "
        << "PCS0_PCS单元总放电量           "
        << "PCS0_总充电时间                "
        << "PCS0_总放电时间                "
        << "PCS0_PCS单元当日总充电量       "
        << "PCS0_PCS单元当日总放电量       "
        << "PCS0_可用充电功率              "
        << "PCS0_可用放电功率              "
        << "PCS0_可用无功功率              "
        << "PCS0_并离网状态                "
        << "PCS0_离网频率                  "
        << "PCS0_交流漏电流                "
        << "PCS0_可用功率                  "
        << "PCS0_远程控制状态              "
        << "PCS0_反馈：运行模式选择        "
        << "PCS0_反馈：有功功率设定值      "
        << "PCS0_反馈：无功功率设定值      "
        << "PCS0_反馈：蓄电池允许充电电流  "
        << "PCS0_反馈：蓄电池允许放电电流  "
        << "PCS0_反馈：蓄电池允许充电电压  "
        << "PCS0_反馈：蓄电池允许放电电压  "
        << "PCS0_反馈：设置PCS时间-年      "
        << "PCS0_反馈：设置PCS时间-月      "
        << "PCS0_反馈：设置PCS时间-日      "
        << "PCS0_反馈：设置PCS时间-时      "
        << "PCS0_反馈：设置PCS时间-分      "
        << "PCS0_反馈：设置PCS时间-秒      "
        << "PCS0_反馈：心跳包              "
        << "PCS0_反馈：无功控制模式        "
        << "PCS0_反馈：功率因数            "
        << "PCS0_反馈：控制模式            "
        << "PCS0_反馈：恒流模式电流        "
        << "PCS0_反馈：恒压限流            "
        << "PCS0_反馈：恒压电压            "
        << "PCS0_反馈：模式自动切换        "
        << "PCS0_反馈：手动并离网模式      "
        << "PCS0_反馈：主动孤岛使能        "
        << "PCS0_反馈：紧急功率值          "
        << "PCS0_反馈：待机/运行           "
        << "PCS0_反馈：维护指令            "
        << "PCS0_反馈：预留                "
        << "PCS0_反馈：预留                "
        << "PCS0_反馈：预留                "
        << "PCS0_反馈：预留                "
        << "PCS0_反馈：预留                "
        << "PCS0_反馈：预留                "
        << "PCS0_PCS运行状态               "
        << "PCS0_保留                      "
        << "PCS1_PCS运行状态2              "
        << "PCS1_A相模块温度               "
        << "PCS1_B相模块温度               "
        << "PCS1_C相模块温度               "
        << "PCS1_环境温度                  "
        << "PCS1_散热器温度                "
        << "PCS1_PCS通讯状态字             "
        << "PCS1_电网电压Uab有效值         "
        << "PCS1_电网电压Ubc有效值         "
        << "PCS1_电网电压Uca有效值         "
        << "PCS1_A相输出电压               "
        << "PCS1_B相输出电压               "
        << "PCS1_C相输出电压               "
        << "PCS1_电网电流Ia有效值          "
        << "PCS1_电网电流Ib有效值          "
        << "PCS1_电网电流Ic有效值          "
        << "PCS1_电网电压频率              "
        << "PCS1_PCS直流侧电压             "
        << "PCS1_PCS直流侧电流             "
        << "PCS1_直流放电功率              "
        << "PCS1_A相输出有功               "
        << "PCS1_B相输出有功               "
        << "PCS1_C相输出有功               "
        << "PCS1_总输出有功                "
        << "PCS1_A相输出无功               "
        << "PCS1_B相输出无功               "
        << "PCS1_C相输出无功               "
        << "PCS1_总输出无功                "
        << "PCS1_A相输出视在               "
        << "PCS1_B相输出视在               "
        << "PCS1_C相输出视在               "
        << "PCS1_总输出视在                "
        << "PCS1_系统A相功率因数           "
        << "PCS1_系统B相功率因数           "
        << "PCS1_系统C相功率因数           "
        << "PCS1_PCS A相功率因数           "
        << "PCS1_PCS B相功率因数           "
        << "PCS1_PCS C相功率因数           "
        << "PCS1_系统电压谐波总畸变率STHDUA"
        << "PCS1_系统电压谐波总畸变率STHDUB"
        << "PCS1_系统电压谐波总畸变率STHDUC"
        << "PCS1_总功率因数                "
        << "PCS1_单元电容直压              "
        << "PCS1_单元输出电压Ua有效值      "
        << "PCS1_单元输出电压Ub有效值      "
        << "PCS1_单元输出电压Uc有效值      "
        << "PCS1_单元桥侧电流Ia有效值      "
        << "PCS1_单元桥侧电流Ib有效值      "
        << "PCS1_单元桥侧电流Ic有效值      "
        << "PCS1_正极接地电阻阻值          "
        << "PCS1_负极接地电阻阻值          "
        << "PCS1_PCS站地址                 "
        << "PCS1_PCS单元总充电量           "
        << "PCS1_PCS单元总放电量           "
        << "PCS1_总充电时间                "
        << "PCS1_总放电时间                "
        << "PCS1_PCS单元当日总充电量       "
        << "PCS1_PCS单元当日总放电量       "
        << "PCS1_可用充电功率              "
        << "PCS1_可用放电功率              "
        << "PCS1_可用无功功率              "
        << "PCS1_并离网状态                "
        << "PCS1_离网频率                  "
        << "PCS1_交流漏电流                "
        << "PCS1_可用功率                  "
        << "PCS1_远程控制状态              "
        << "PCS1_反馈：运行模式选择        "
        << "PCS1_反馈：有功功率设定值      "
        << "PCS1_反馈：无功功率设定值      "
        << "PCS1_反馈：蓄电池允许充电电流  "
        << "PCS1_反馈：蓄电池允许放电电流  "
        << "PCS1_反馈：蓄电池允许充电电压  "
        << "PCS1_反馈：蓄电池允许放电电压  "
        << "PCS1_反馈：设置PCS时间-年      "
        << "PCS1_反馈：设置PCS时间-月      "
        << "PCS1_反馈：设置PCS时间-日      "
        << "PCS1_反馈：设置PCS时间-时      "
        << "PCS1_反馈：设置PCS时间-分      "
        << "PCS1_反馈：设置PCS时间-秒      "
        << "PCS1_反馈：心跳包              "
        << "PCS1_反馈：无功控制模式        "
        << "PCS1_反馈：功率因数            "
        << "PCS1_反馈：控制模式            "
        << "PCS1_反馈：恒流模式电流        "
        << "PCS1_反馈：恒压限流            "
        << "PCS1_反馈：恒压电压            "
        << "PCS1_反馈：模式自动切换        "
        << "PCS1_反馈：手动并离网模式      "
        << "PCS1_反馈：主动孤岛使能        "
        << "PCS1_反馈：紧急功率值          "
        << "PCS1_反馈：待机/运行           "
        << "PCS1_反馈：维护指令            "
        << "PCS1_反馈：预留                "
        << "PCS1_反馈：预留                "
        << "PCS1_反馈：预留                "
        << "PCS1_反馈：预留                "
        << "PCS1_反馈：预留                "
        << "PCS1_反馈：预留                "
        << "PCS1_PCS运行状态               "
        << "PCS1_保留                      ";
