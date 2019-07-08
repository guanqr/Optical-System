#include<stdio.h>
#include <stdlib.h>  
#include <string.h>
#include <time.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#define Pi acos(-1)

//结构体声明 
struct GLASS
{
    char name[26];			  // 镜片编号 
    double r;                 //曲率半径 
    double n;                 //后面折射率
	double d;                 //到前面距离 
	double Vd; 				  //阿贝数
	double s;				  //镜片直径
    struct GLASS * next;      //下一镜片 
             
};

struct FACE//储存主光线 
{
	char name[26];			  // 镜片编号 
	double U;  				  //物方孔径角 
	double L;		          //物距 
	double U1;		          //像方孔径角 
	double L1;
	double n1;
	double I;
	double I1;
	double x;
	double PA;
	double s;
	double s1;
	double t;
	double t1;
	
	struct FACE * next;      //下一镜片
};

struct FACE1//储存第二近轴光线 
{
	char name[26];			  // 镜片编号 
	double u;  				  //物方孔径角 
	double l;		          //物距 
	double u1;		          //像方孔径角 
	double l1;
	double n1;
	struct FACE1 * next;      //下一镜片
};

struct FACE2//储存第一近轴光线 
{
	char name[26];			  // 镜片编号 
	double u;  				  //物方孔径角 
	double l;		          //物距 
	double u1;		          //像方孔径角 
	double l1;
	double n1;
	struct FACE2 * next;      //下一镜片
};

struct FACE3//储存轴上点边缘光线 
{
	char name[26];			  // 镜片编号 
	double U;  				  //物方孔径角 
	double L;		          //物距 
	double U1;		          //像方孔径角 
	double L1;
	double n1;
	struct FACE3 * next;      //下一镜片
};




//函数声明
void read_data(char *filename,int a);
void save(char *temp,double r,double n,double d,double Vd,double s);
GLASS *Search(char *current);
FACE *Search1(char *current);
FACE1 *Search2(char *current);
FACE2 *Search3(char *current);
void wirte_result();
void save1(char *temp); 
void save2(char *temp);
void save3(char *temp);
void save4(char *temp);
void calculat_U1l1(GLASS *si);
void calculat1_U1l1(GLASS *si);
void calculat_u1l1(GLASS *si);
void calculat1_u1l1(GLASS *si);
void xs_calculat(GLASS *si);
void get_head1(int c);
void get_head2(int c);
void get_head3(int c);
void get_head4(int c);
double get_f1(); 
double get_l1(int c);
double get_ls1(int c);
double get_yp1(int c);
double get_xt1(int c);
double get_xs1(int c);
double get_lp1(int c);
double get_y0(int c);
double get_Ks(int c);


//全局变量 
GLASS *head = NULL;           //定义储存镜片的头指针
FACE  *head1 = NULL;
FACE1 *head2 = NULL;
FACE2 *head3 = NULL;
FACE3 *head4 = NULL;
double a,ka;//孔阑半径

double m,km;//视场

double xg=26;//

double kb=0;
 


