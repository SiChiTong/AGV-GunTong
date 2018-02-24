#ifndef __CDHDATA_H
#define __CDHDATA_H	 
#include "my_include.h"

typedef struct 		
{
	u8 zeroNum;			//�ŵ����յ�ĸ���
	u8 zeroLoctaion[16];//�ŵ����յ��λ��
	u8 zeroContinue;	//�ϵ��Ƿ�����
	
	u8 Num;				//��Ч�㣨�ŵ��������㣩�ĸ���
	int Distance;		//��Ч�������ĵľ���
	u8 Error;			//�쳣�㣨���졢�ֲ��һЩ���ڿ��ǵ�����Χ�ڵ������ʱ����ֵ
}Fencha_struct;				


typedef struct
{
	int moter1_speed;
	int moter2_speed;
	int moter3_speed;
	int moter4_speed;
}PIDspeed;





extern u8 n,a;
extern Fencha_struct front_cdh16,back_cdh16,backl_cdh8,backr_cdh8; //�ⲿ����һ��Fencha_struct���͵�ȫ�ֱ���
extern Fencha_struct findtemp;//�����������еĽṹ�������ⲿ����

extern Fencha_struct g_CDH8_qian_1;
extern Fencha_struct g_CDH8_qian_2;

extern Fencha_struct g_CDH8_hou_1;
extern Fencha_struct g_CDH8_hou_2;

extern u8 g_PID_time;

extern float g_Auto_Kp;
extern float g_Auto_Ki;
extern float g_Auto_Kd;

extern float g_SD_Kp ;
extern float g_SD_Ki ;
extern float g_SD_Kd ;
extern u16 g_ffff ;		//����Ƕ�_��ֵ------://��ת3/4  ��ת 1/4 �м� 1/2




Fencha_struct FindSpace(u16 dst,u8 num,u8 dir);//16λ������⵽�ŵ��������ݺ���
Fencha_struct FindSpace1(u8 dst,u8 num,u8 dir);//8λ������⵽�ŵ��������ݺ���
 		
void PID_Adjust(u16 j_speed,float kp,float ki,float kd);

void PID_SD_Adjust(u16 j_speed,float kp,float ki,float kd);

#endif