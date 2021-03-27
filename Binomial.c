#include <stdio.h>
int main(){
int comb,perm,fact = 1;
int norm,down,a = 1;
int b = 1;
int i,j,k;
    printf("Masukan Total = ");
    scanf("%d",&perm);
    printf("Masukan Target = ");
    scanf("%d",&norm);
    down = (perm - norm);
            for (i = 1; i <= perm; i++)
                {fact = fact * i;}
            for (j = 1; j <= norm; j++)
                {a = a * j;}
            for (k = 1; k <= down; k++)
                {b = b * k;}
    int reg = fact /(a * b);
    float ty,sc = 1;
        printf("Masukan Probnya = ");
        scanf("%f",&ty);
                for (int i = 1; i<=norm; i++)
                    {sc = sc * ty;}
    float yu,noto=1;
    int toyo = perm - norm;
    yu = 1 - ty;
                for (int j = 1; j <= toyo; j++)
                    {noto = noto * yu;}

float huhuhu = reg * sc * noto;
        printf("Hasilnya adalah = %f\n",huhuhu);
return 0;
}
