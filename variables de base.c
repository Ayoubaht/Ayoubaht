// Online C compiler to run C program online
#include <stdio.h>

int main()
{
 int aire , périmètre ;
 int base , hauteur ;
 printf("entrer base:");
 scanf("%d",&base);
 printf("entrer hauteur:");
 scanf("%d",&hauteur);
 aire = (base * hauteur) / 2;
 périmètre = 3 * base;
 printf("la formule de aire, %d, \n",aire);
 printf("la formule de périmètre, %d, \n",périmètre);
    return 0;
}