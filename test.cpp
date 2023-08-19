#include<stdio.h>
int main(){
 double luongchuatinh;
 double thueTNCN;
 double nguoiphuthuoc;
 printf("nhap vao so luong chua tinh :");
 scanf("%lf",&luongchuatinh);
 printf("nhap vao so nguoi phu thuoc :");
 scanf("%lf",&nguoiphuthuoc);
 double luong;
  luong = luongchuatinh - 11000000 - nguoiphuthuoc * 4400000;
 if(luong<0){
	thueTNCN=0;
	printf("thue thu nhap ca nhan cua ban la: %lf",thueTNCN);
}else{
 if(luong<5000000){
 	thueTNCN=luong*5/100;
 	printf("thueTNCN la:%lf",thueTNCN);
 }else if(luong>5000000&&luong<=10000000){
    double bac1=5000000*5/100;
    double bac2=(luong-5000000)*10/100;
    thueTNCN=bac1+bac2;
    printf("thueTNCN la:%lf",thueTNCN);
 }else if(luong>10000000&&luong<=18000000){
 	 double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (luong - 10000000 )*15/100;
thueTNCN=bac1+bac2+bac3;
printf("thueTNCN la:%1f",thueTNCN);
 }else if(luong>18000000&&luong<=32000000){
 	double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (luong - 18000000)*20/100;
			       thueTNCN=bac1+bac2+bac3+bac4;
			       printf("thueTNCN la:%1f",thueTNCN);
 }else if(luong>32000000&&luong<=52000000){
 	double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (32000000 - 18000000)*20/100;
			       double bac5  = (luong - 32000000)*25/100;
			       thueTNCN=bac1+bac2+bac3+bac4+bac5;
			       printf("thueTNCN la:%1f",thueTNCN);

 }else if(luong>52000000&&luong<=80000000){
 	double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (32000000 - 18000000)*20/100;
			       double bac5  = (52000000 - 32000000)*25/100;
 			       double bac6  = (luong - 52000000)*30/100;
 			       thueTNCN=bac1+bac2+bac3+bac4+bac5+bac6;
					printf("thueTNCN la:%1f",thueTNCN);
 }else if(luong>80000000){
 	double bac1  = 5000000 * 5 /100;
			       double bac2  = (10000000 - 5000000)*10/100;
			       double bac3  = (18000000 - 10000000 )*15/100;
			       double bac4  = (32000000 - 18000000)*20/100;
			       double bac5  = (52000000 - 32000000)*25/100;
 			       double bac6  = (80000000 - 52000000)*30/100;
			       double bac7  = (luong - 80000000)*35/100;
			       thueTNCN=bac1+bac2+bac3+bac4+bac5+bac6+bac7;
			       printf("thueTNCN la:%1f",thueTNCN);
 }
}
 return 0;
}
