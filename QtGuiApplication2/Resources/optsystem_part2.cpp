#include"ark_l.h"
#include"ark_w.h"


//mainº¯Êý²¿·Ö 
int main(void) {
 	char filename[123],k5[123],k6[123];
 	double k1,k2,k3,k4;
	int i,k,c,y;
	
	FILE *fp;
	
	if((fp=fopen("d:\\temp.txt", "r"))==NULL )     
    {  
        printf("Open file failed!!\n");  
        exit(1);  
    }  
    
    fscanf(fp,"%s%le%le%le%le",k5,&k1,&k2,&k3,&k4);
	strcpy(filename,k5);
	a=k1;
	m=-k2;
	c=k3;
	xg=k4;
	printf("%s\n",filename);
	
  ka=1; km=1 ; 	
    read_data(filename);
   		char s[123],q[123],*t,x[26];
        strcpy(s, filename);
        strcpy(q, s);
        t=GetFilename(q);
        strcpy(x,"result.txt");
        replace_string(q,t,x);
        printf("%s\n", s);
        printf("%s\n", q);
	
	FILE* fp1=fopen(q, "w");
   	fprintf(fp1,"f':%le\n",get_f1());
    fprintf(fp1,"D l':%le\n",get_l1(c));
    fprintf(fp1,"C l':%le\n",get_l1_c(filename,k,c));
    fprintf(fp1,"F l':%le\n",get_l1_f(filename,k,c));
	fprintf(fp1,"D L':%le\n",get_ls1(c));
	fprintf(fp1,"C L':%le\n",get_ls1_c(filename,k,c));
	fprintf(fp1,"F L':%le\n",get_ls1_f(filename,k,c));
	ka=0.7;
	fprintf(fp1,"0.7a D L':%le\n",get_ls1(c));
	fprintf(fp1,"0.7a C L':%le\n",get_ls1_c(filename,k,c));
	fprintf(fp1,"0.7a F L':%le\n",get_ls1_f(filename,k,c));
	ka=1; 
	fprintf(fp1,"l_H':%le\n",get_l1(c)-get_f1());
	fprintf(fp1,"l_p':%le\n",get_lp1(c));
	
    fprintf(fp1,"y_0':%le\n",get_y0(c));
    km=0.7;
	fprintf(fp1,"0.7w y_0':%le\n",get_y0(c));
	km=1;
	fprintf(fp1,"\delta L':%le\n",get_ls1(c)-get_l1(c));
	ka=0.7;
	fprintf(fp1,"0.7a \delta L':%le\n",get_ls1(c)-get_l1(c));
	ka=1; 
	fprintf(fp1,"\delta l_ch':%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	ka=0.7; 
	fprintf(fp1,"0.7a \delta l_ch':%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	fprintf(fp1,"0a \delta l_ch':%le\n",get_l1_f(filename,k,c)-get_l1_c(filename,k,c));
	fprintf(fp1,"X_t':%le\n",get_xt1(c));
	fprintf(fp1,"X_s':%le\n",get_xs1(c));
	fprintf(fp1,"\Delta X':%le\n",get_xt1(c)-get_xs1(c));
	fprintf(fp1,"D y_p':%le\n",get_yp1(c));
	fprintf(fp1,"C y_p':%le\n",get_yp1_c(filename,k,c));
	fprintf(fp1,"F y_p':%le\n",get_yp1_f(filename,k,c));
	km=0.7;
	fprintf(fp1,"0.7w D y_p':%le\n",get_yp1(c));
	fprintf(fp1,"0.7w C y_p':%le\n",get_yp1_c(filename,k,c));
	fprintf(fp1,"0.7w F y_p':%le\n",get_yp1_f(filename,k,c));
	km=1;
	fprintf(fp1,"\delta y':%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp1,"\delta y'/y_0':%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=0.7;
	fprintf(fp1,"0.7w \delta y':%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp1,"0.7w \delta y'/y_0':%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=1;
	fprintf(fp1,"\delta y_ch':%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=0.7;
	fprintf(fp1,"0.7w \delta y_ch':%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=1;ka=1;
	fprintf(fp1,"K_t':%le\n",get_Ks(c)); 
	km=0.7;ka=1;
	fprintf(fp1,"0.7w K_t':%le\n",get_Ks(c)); 
	km=1;ka=0.7;
	fprintf(fp1,"0.7a K_t':%le\n",get_Ks(c)); 
	km=0.7;ka=0.7;
	fprintf(fp1,"0.7a 0.7w K_t':%le\n",get_Ks(c)); 
	
	
	
}




