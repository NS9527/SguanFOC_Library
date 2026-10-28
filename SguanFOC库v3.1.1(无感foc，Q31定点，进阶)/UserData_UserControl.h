#ifndef __USERDATA_USERCONTROL_H
#define __USERDATA_USERCONTROL_H
#include "SguanFOC.h"
/* 电机控制User用户设置·实时参数控制页面 */
#include "Sguan_ADC.h"

static inline void User_AO_Adjust(float AO){

}

static inline void User_BO_Adjust(float BO){

}

static inline void User_CO_Adjust(float CO){

}

static inline void User_UserTX(void){
    Sguan.Printf.fdata[0] = Sguan.Transfer.PLL.go.OutRe;
    Sguan.Printf.fdata[1] = Sguan.Transfer.LPF_Speed.go.Output;
    Sguan.Printf.fdata[2] = Sguan.Transfer.NLFO.go.Output_Sine;
    Sguan.Printf.fdata[3] = Sguan.Transfer.NLFO.go.Output_Cosine;
    Sguan.Printf.fdata[4] = Sguan.Value.Low_angle;
    Sguan.Printf.fdata[5] = Sguan.Value.High_angle;
    Sguan.Printf.fdata[6] = Sguan.Value.Low_Wm;
    Sguan.Printf.fdata[7] = Sguan.Value.High_Wm;
}


#endif // USERDATA_USERCONTROL_H
