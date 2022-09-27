#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;

struct angajat
{
    char nume[100],prenume[100];
    char functie[100];
    char oras[100];
    float salar;
    float nota1,nota2,nota3;
}a[100];

struct distanta_orase
{
    char nume_oras[100];
    float longitudine,latitudine;

}oras1,oras2,oras3;

void citire(int n)
{
    for(int i=0;i<n;i++)
    {printf("Nume familie: ");
     scanf("%s",a[i].nume);
     printf("Prenume: ");
     scanf("%s",a[i].prenume);
     printf("Functie: ");
     scanf("%s",a[i].functie);
     printf("Oras: ");
     scanf("%s",a[i].oras);
     printf("Salar: ");
     scanf("%f",&a[i].salar);
     printf("Nota 1: ");
     scanf("%f",&a[i].nota1);
     printf("Nota 2: ");
     scanf("%f",&a[i].nota2);
     printf("Nota 3: ");
     scanf("%f",&a[i].nota3);}

}

void afisare_tabel(int n)
{
    for(int i=0;i<n;i++)
    {printf("Nume familie: %s\n",a[i].nume);
     printf("Prenume: %s\n",a[i].prenume);
     printf("Functie: %s\n",a[i].functie);
     printf("Oras: %s\n",a[i].oras);
     printf("Salar: %f\n",a[i].salar);
     printf("Nota 1: %f\n",a[i].nota1);
     printf("Nota 2: %f\n",a[i].nota2);
     printf("Nota 3: %f\n",a[i].nota3);}
}

void calificativ(int *n) //calificativul reprezinta media aritmetica a celor 3 note
{
    int i;
    float calif[100];
    for(i=0;i<*n;i++)
    {
        calif[i]=(a[i].nota1+a[i].nota2+a[i].nota3)/3;
        printf("Calificativul angajatului %s %s este %f\n",a[i].nume,a[i].prenume,calif[i]);
    }

}

void status(int n)
{
    int i;
    float calif[100];
    for(int i=0;i<n;i++)
    {
        calif[i]=(a[i].nota1+a[i].nota2+a[i].nota3)/3;
        if(calif[i]<5)
            printf("Forma angajatului %s %s este una destul de slaba, cu un calificativ de : %f\n",a[i].nume,a[i].prenume,calif[i]);
        else
            if(calif[i]>=5&&calif[i]<9)
            printf("Forma angajatului %s %s este una destul de ok,  cu un calificativ de : %f\n",a[i].nume,a[i].prenume,calif[i]);
        else
            if(calif[i]>=9&&calif[i]<10)
            printf("Forma angajatului %s %s este una buna,  cu un calificativ de : %f\n",a[i].nume,a[i].prenume,calif[i]);
        else
            if(calif[i]=10)
            printf("Forma angajatului %s %s este una excelenta,  cu un calificativ de : %f\n",a[i].nume,a[i].prenume,calif[i]);
        else
            printf("datele introduse sunt eronate");
    }


}

void sortare_calificativ(int n)
{
    int i;
    float calif[100];
    for(int i=0;i<n;i++)
    {
        calif[i]=(a[i].nota1+a[i].nota2+a[i].nota3)/3;
    }
    for(int i=0;i<n;i++)
        if(calif[i]<calif[i+1])
    {
        swap(a[i].nume,a[i+1].nume);
        swap(a[i].prenume,a[i+1].prenume);
        swap(a[i].functie,a[i+1].functie);
        swap(a[i].oras,a[i+1].oras);
        swap(a[i].salar,a[i+1].salar);
        swap(calif[i],calif[i+1]);
    }

    for(int i=0;i<n;i++)
    {printf("Locul - %d -:\n\n",i+1);
     printf("Nume familie: %s\n",a[i].nume);
     printf("Prenume: %s\n",a[i].prenume);
     printf("Functie: %s\n",a[i].functie);
     printf("Oras: %s\n",a[i].oras);
     printf("Salar: %f\n",a[i].salar);
     printf("Caificativ: %f\n\n",calif[i]);}
}
     void sortare_nume(int n)
     {
         char b[100];
         for(int i=0;i<n-1;i++)
         {
        if (strcmp(a[i].nume,a[i+1].nume) > 0)
        {
          strcpy(b,a[i].nume);
          strcpy(a[i].nume,a[i+1].nume);
          strcpy(a[i+1].nume,b);
          strcpy(b,a[i].prenume);
          strcpy(a[i].prenume,a[i+1].prenume);
          strcpy(a[i+1].prenume,b);
          strcpy(b,a[i].functie);
          strcpy(a[i].functie,a[i+1].functie);
          strcpy(a[i+1].functie,b);
          strcpy(b,a[i].oras);
          strcpy(a[i].oras,a[i+1].oras);
          strcpy(a[i+1].oras,b);
          swap(a[i].salar,a[i+1].salar);
         }
        }
        for(int i=0;i<n;i++)
        {printf("Locul - %d -:\n\n",i+1);
         printf("Nume familie: %s\n",a[i].nume);
         printf("Prenume: %s\n",a[i].prenume);
         printf("Functie: %s\n",a[i].functie);
         printf("Oras: %s\n",a[i].oras);
         printf("Salar: %f\n\n",a[i].salar);
        }
     }

     void distanta(int n)
     {
         int k,k1;
         float r,er,d;
         r=0.01745327;
         r=6371.01;
         printf("Primul om: ");
         scanf("%i",&k);
         printf("Al doilea om: ");
         scanf("%i",&k1);
         if(strcmp(a[k].oras,oras1.nume_oras)==0 && strcmp(a[k1].oras,oras2.nume_oras)==0)
        {oras1.latitudine=oras1.latitudine*r;
         oras1.longitudine=oras1.longitudine*r;
         oras2.latitudine=oras2.latitudine*r;
         oras2.longitudine=oras2.longitudine*r;
         d=er*acos((sin(oras1.latitudine)*sin(oras2.latitudine)) + (cos(oras1.latitudine)*cos(oras2.latitudine)*cos(oras1.longitudine - oras2.longitudine)));
         printf("distanta dintre cele 2 orase este de %f km",d);}
         else
         if(strcmp(a[k].oras,oras1.nume_oras)==0 && strcmp(a[k1].oras,oras3.nume_oras)==0)
        {oras1.latitudine=oras1.latitudine*r;
         oras1.longitudine=oras1.longitudine*r;
         oras3.latitudine=oras3.latitudine*r;
         oras3.longitudine=oras3.longitudine*r;
         d=er*acos((sin(oras1.latitudine)*sin(oras3.latitudine)) + (cos(oras1.latitudine)*cos(oras3.latitudine)*cos(oras1.longitudine - oras3.longitudine)));
         printf("distanta dintre cele 2 orase este de %f km",d);}
         else
         if(strcmp(a[k].oras,oras2.nume_oras)==0 && strcmp(a[k1].oras,oras3.nume_oras)==0)
         {oras2.latitudine=oras2.latitudine*r;
         oras2.longitudine=oras2.longitudine*r;
         oras3.latitudine=oras3.latitudine*r;
         oras3.longitudine=oras3.longitudine*r;
         d=er*acos((sin(oras2.latitudine)*sin(oras3.latitudine)) + (cos(oras2.latitudine)*cos(oras3.latitudine)*cos(oras2.longitudine - oras3.longitudine)));
         printf("distanta dintre cele 2 orase este de %f km",d);}
         else
         printf("EROARE");
     }

   void data(int *zi,int *luna,int *an)
{
    printf("ziua:");
    scanf("%d",&zi);
    printf("luna:");
    scanf("%d",&luna);
    printf("an:");
    scanf("%d",&an);

    printf(" In data de : %d / %d / %d \n",zi,luna,an);
}

void meniu(void)
{
  puts(" 1, 1 --- afiseaza tabel studenti");
  puts(" 2, 2 --- calculeaza calificativul angajatilor");
  puts(" 3, 3 --- statusul angajatilor");
  puts(" 4, 4 --- sortare dupa calificativ");
  puts(" 5, 5 --- sortare dupa nume");
  puts(" 6, 6 --- distanta dintre orasele angajatilor");
}


int main()
{
struct distanta_orase oras1 ={"Bacau" , 46.58 , 26.92};
struct distanta_orase oras2 ={"Iasi" , 47.17 , 27.57};
struct distanta_orase oras3 ={"Constanta" , 44.18 , 28.63};

char p[100],p1[100],ok=0,nu=0;
   strcpy(p,"Parola123");
   do{
       printf("Parola :");
       cin>>p1;
       if(strcmp(p,p1)==0)
       ok=1;
       else
       printf("Parola gresita!\n");
       nu++;
   }while(ok==0&&nu<3);
   if(nu==3)
    printf("Incercati mai tarziu");

   if(ok==1)
    printf("Parola corecta!\n");

    char c[100];
    int zi,luna,an;

   printf("Introduceti numele firmei:");
    scanf("%s",&c);
    for(int i=0;i<strlen(c);i++)
    *(c+i)= *(c+i)-32;

printf("- INITIERE TABEL PENTRU FIRMA : %s - \n",&c);

data(&zi,&luna,&an);

int n;
printf("Numarul de angajati: ");
scanf("%i",&n);
citire(n);
int l;
printf("APASATI TASTA CARE CORESPUNDE COMENZII PE CARE DORITI SA O EFECTUATI:\n");
meniu();
scanf("%i",&l);
switch(l)
{
case 1:
    afisare_tabel(n);
    break;
case 2:
    calificativ(&n);
    break;
case 3:
    status(n);
    break;
case 4:
    sortare_calificativ(n);
    break;
case 5:
    sortare_nume(n);
    break;
case 6:
    distanta(n);
    break;
case 7 :
    break;
default:
    printf("EROARE");
}

}
