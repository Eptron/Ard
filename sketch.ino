
#include <16F887.h> 
#define SEL_key portb_7 
#define busstop portb_6 
#define office portb_5 
#define home portb_4 
unsigned char user_loc[15],urt_rcv=0,rcv_cnt=0; 
unsigned long lcd_dis_count = 0; 
unsigned long adc_val2; 
unsigned long adc_map2; 
unsigned long sensor_scan = 0; 
unsigned long cur_loc=0; 
//unsigned char home[2] ="h"; 
//unsigned char office[2] ="o"; 
//unsigned char bus_stop[2] ="b"; 
unsigned long needed_loc = 0; 
int8 ob_flag=0,Page_flip=0,Loc_flag=0; 
short F_flag=0,B_flag=0,L_flag=0,R_flag=0; 
unsigned long Set_obstacle_F=0,Set_obstacle_B=0,Set_obstacle_R=0,Set_obstacle_L=0;

Short R_place_Flag = 1; 
short s_flag=0; 
void adc2_scan() 
{ 
unsigned long ran1,ran_count1=0; 
ran1=0; 
for(ran_count1=0;ran_count1<=9;ran_count1++) 
{ 
ran1 +=(unsigned long)read_adc(); //* 0.1035; 
delay_us(30); 
} 
adc_val2 = (ran1/10) ; 
if ((adc_val2 > 400) && (adc_val2 < 500)) 
{ 
cur_loc =1; 
} 
else if ((adc_val2 > 650) && (adc_val2 < 800)) 
{ 
cur_loc =3; 
} 
else if (adc_val2 > 800) 
{ 
cur_loc =2;
Short R_place_Flag = 1; 
short s_flag=0; 
void adc2_scan() 
{ 
unsigned long ran1,ran_count1=0; 
ran1=0; 
for(ran_count1=0;ran_count1<=9;ran_count1++) 
{ 
ran1 +=(unsigned long)read_adc(); //* 0.1035; 
delay_us(30); 
} 
adc_val2 = (ran1/10) ; 
if ((adc_val2 > 400) && (adc_val2 < 500)) 
{ 
cur_loc =1; 
} 
else if ((adc_val2 > 650) && (adc_val2 < 800)) 
{ 
cur_loc =3; 
} 
else if (adc_val2 > 800) 
{ 
cur_loc =2;}
    
