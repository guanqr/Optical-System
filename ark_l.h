#include<stdio.h>
#include <stdlib.h>  
#include <string.h>
#include <time.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#define Pi acos(-1)

//�ṹ������ 
struct GLASS
{
    char name[26];			  // ��Ƭ��� 
    double r;                 //���ʰ뾶 
    double n;                 //����������
	double d;                 //��ǰ����� 
	double Vd; 				  //������
	double s;				  //��Ƭֱ��
    struct GLASS * next;      //��һ��Ƭ 
             
};

struct FACE//���������� 
{
	char name[26];			  // ��Ƭ��� 
	double U;  				  //�﷽�׾��� 
	double L;		          //��� 
	double U1;		          //�񷽿׾��� 
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
	
	struct FACE * next;      //��һ��Ƭ
};

struct FACE1//����ڶ�������� 
{
	char name[26];			  // ��Ƭ��� 
	double u;  				  //�﷽�׾��� 
	double l;		          //��� 
	double u1;		          //�񷽿׾��� 
	double l1;
	double n1;
	struct FACE1 * next;      //��һ��Ƭ
};

struct FACE2//�����һ������� 
{
	char name[26];			  // ��Ƭ��� 
	double u;  				  //�﷽�׾��� 
	double l;		          //��� 
	double u1;		          //�񷽿׾��� 
	double l1;
	double n1;
	struct FACE2 * next;      //��һ��Ƭ
};

struct FACE3//�������ϵ��Ե���� 
{
	char name[26];			  // ��Ƭ��� 
	double U;  				  //�﷽�׾��� 
	double L;		          //��� 
	double U1;		          //�񷽿׾��� 
	double L1;
	double n1;
	struct FACE3 * next;      //��һ��Ƭ
};




//��������
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


//ȫ�ֱ��� 
GLASS *head = NULL;           //���崢�澵Ƭ��ͷָ��
FACE  *head1 = NULL;
FACE1 *head2 = NULL;
FACE2 *head3 = NULL;
FACE3 *head4 = NULL;
double a,ka;//�����뾶

double m,km;//�ӳ�

double xg=26;//

double kb=0;
 


