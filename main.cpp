/**#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}**/
#include <iostream>
#include <string.h>
//#include <wiringPi.h>
using namespace std;

//Hello world !

int main ()
{int nom; int menu;

//wiringPiSetup ();
//pinMode (25, OUTPUT);

menu:
cout << "Conversion décimal vers binaire (tapez 1)\n";
cout << "Conversion binaire vers décimal (tapez 2)\n";
cout << "Conversion décimal vers hexadécimal (tapez 3)\n";
cout << "Conversion hexadécimal vers décimal (tapez 4)\n";
cout << "Conversion binaire vers hexabinaire (tapez 5)\n";
cout << "Conversion hexadécimal vers binaire (tapez 6)\n";
cout << "Retour au menu (tapez 7)\n";
cout << "Sortir du programme (tapez autre)\n";
cin >> menu;

switch (menu)
    {case 1:
        {goto debi1;break;}
    case 2:
        {goto bide2;break;}
    case 3:
        {goto dehe3;break;}
    case 4:
        {goto hede4;break;}
    case 5:
        {goto bihe5;break;}
    case 6:
        {goto hebi6;break;}
    case 7:
        {goto menu;break;}
    default:
        {goto fini;break;}
    }

// Partie décimal vers binaire
    debi1:{
int bin[100000];int i;int te=0;

cout << endl << "Entrez le nombre à convertir : ";
cin >> nom;

for(i=0; nom > 0; i++)
    {bin[i] = nom%2;
    nom = nom/2;
    }

cout << "le nombre binaire est : ";

for(i=i-1; i >= 0; i--)
    {cout << bin[i];
    }

cout << endl << endl;
    goto menu;}

// Partie binaire vers décimal
    bide2:{
int i,j;int bin [100000];int pui [100000];int o;int f=0;int k=1;int p=0;

cout << endl << "Entrez le nombre à convertir : ";
cin >> nom;

o=nom;

while (nom>0)
    {p++;
    nom=nom/10;
    }

for (i=0;i<=p-1;i++)
    {bin[i]=o%10;
    o=o/10;
    }

pui[0]=1;

for (j=1;j<=i-1;j++)
    {pui[j]=k*2;
    k=pui[j];
    }

for (i=i-1;i>=0;i--)
    {if (bin[i]==1)
        {f=f+pui[i];
        }
    }

cout << "le nombre décimal est : " << f  << endl << endl;
    goto menu;}

// Partie décimal vers hecadécimal
    dehe3:{
int he;int j,i;char hex[100000];

cout << endl << "Entrez le nombre à convertir : ";
cin >> nom;

for (j=0;nom>0;j++)
    {i=nom/16;
    he=nom-(i*16);
    nom=i;
    while (he!=-1)
        {switch (he)
            {case 0:
                {hex[j]='0';break;}
            case 1:
                {hex[j]='1';break;}
            case 2:
                {hex[j]='2';break;}
            case 3:
                {hex[j]='3';break;}
            case 4:
                {hex[j]='4';break;}
            case 5:
                {hex[j]='5';break;}
            case 6:
                {hex[j]='6';break;}
            case 7:
                {hex[j]='7';break;}
            case 8:
                {hex[j]='8';break;}
            case 9:
                {hex[j]='9';break;}
            case 10:
                {hex[j]='A';break;}
            case 11:
                {hex[j]='B';break;}
            case 12:
                {hex[j]='C';break;}
            case 13:
                {hex[j]='D';break;}
            case 14:
                {hex[j]='E';break;}
            case 15:
                {hex[j]='F';break;}
            default:
                {cout << "Il y a eu une erreur\n";break;}
            }
        he=-1;
        }
    }

cout << "Le nombre hexadécimal est : ";

for(j=j; j >= 0; j--)
{	cout << hex[j];
    }

cout << endl << endl;
    goto menu;}

// Partie hexadécimal vers décimal
    hede4:{
int hexa;int l=0;int je=0; char hexad; char a[100000];int ha,m;

cout << endl << "Entrez le nombre à convertir : ";

for(l=0;l<1;l++)
    {cin >> &a[l];
    }

m=strlen(a);
m--;
ha=m;

for(l=0;l<=m; l++)
    {hexad=a[l];
    switch (hexad)
        {case '0':
            {hexa=0;break;}
        case '1':
            {hexa=1;break;}
        case '2':
            {hexa=2;break;}
        case '3':
            {hexa=3;break;}
        case '4':
            {hexa=4;break;}
        case '5':
            {hexa=5;break;}
        case '6':
            {hexa=6;break;}
        case '7':
            {hexa=7;break;}
        case '8':
            {hexa=8;break;}
        case '9':
            {hexa=9;break;}
        case 'A':
            {hexa=10;break;}
        case 'a':
            {hexa=10;break;}
        case 'B':
            {hexa=11;break;}
        case 'b':
            {hexa=11;break;}
        case 'C':
            {hexa=12;break;}
        case 'c':
            {hexa=12;break;}
        case 'D':
            {hexa=13;break;}
        case 'd':
            {hexa=13;break;}
        case 'E':
            {hexa=14;break;}
        case 'e':
            {hexa=14;break;}
        case 'F':
            {hexa=15;break;}
        case 'f':
            {hexa=15;break;}
        default:
            {cout << "Il y a eu une erreur\n";break;}
        }
    if (ha>=1)
        {je=(je+hexa)*16;}
    else je=je+hexa;
        {ha=ha-1;}
    }

cout << "Le nombre décimal est :" << je << endl << endl;
    goto menu;}

// Partie binaire vers hexadécimal
    bihe5:{
int i,j;int bin [100000];int pui [100000];int o;int f=0;int k=1;int p=0;int he;char hex[j];

cout << endl << "Entrez le nombre à convertir : ";
cin >> nom;

o=nom;

while (nom>0)
    {p++;
    nom=nom/10;
    }

for (i=0;i<=p-1;i++)
    {bin[i]=o%10;
    o=o/10;
    }

pui[0]=1;

for (j=1;j<=i-1;j++)
    {pui[j]=k*2;
    k=pui[j];
    }

for (i=i-1;i>=0;i--)
    {if (bin[i]==1)
        {f=f+pui[i];
        }
    }

for (j=0;f>0;j++)
    {i=f/16;
    he=f-(i*16);
    f=i;
    while (he!=-1)
        {switch (he)
            {case 0:
                {hex[j]='0';break;}
            case 1:
                {hex[j]='1';break;}
            case 2:
                {hex[j]='2';break;}
            case 3:
                {hex[j]='3';break;}
            case 4:
                {hex[j]='4';break;}
            case 5:
                {hex[j]='5';break;}
            case 6:
                {hex[j]='6';break;}
            case 7:
                {hex[j]='7';break;}
            case 8:
                {hex[j]='8';break;}
            case 9:
                {hex[j]='9';break;}
            case 10:
                {hex[j]='A';break;}
            case 11:
                {hex[j]='B';break;}
            case 12:
                {hex[j]='C';break;}
            case 13:
                {hex[j]='D';break;}
            case 14:
                {hex[j]='E';break;}
            case 15:
                {hex[j]='F';break;}
            default:
                {cout << "Il y a eu une erreur\n";break;}
            }
        he=-1;
        }
    }

cout << "le nombre hexadécimal est : ";

for(j=j; j >= 0; j--)
    {cout << hex[j];
    }

cout << endl << endl;
    goto menu;}

// Partie hexadécimal vers binaire
    hebi6:{
int hexa;int l=0;int je=0; char hexad; char a[100000];int ha,m;int bin[100000];int i;int te=0;

cout << endl << "Entrez le nombre à convertir : ";

for(l=0;l<1;l++)
    {cin >> &a[l];
    }

m=strlen(a);
m--;
ha=m;

for(l=0;l<=m; l++)
    {hexad=a[l];
    switch (hexad)
        {case '0':
            {hexa=0;break;}
        case '1':
            {hexa=1;break;}
        case '2':
            {hexa=2;break;}
        case '3':
            {hexa=3;break;}
        case '4':
            {hexa=4;break;}
        case '5':
            {hexa=5;break;}
        case '6':
            {hexa=6;break;}
        case '7':
            {hexa=7;break;}
        case '8':
            {hexa=8;break;}
        case '9':
            {hexa=9;break;}
        case 'A':
            {hexa=10;break;}
        case 'a':
            {hexa=10;break;}
        case 'B':
            {hexa=11;break;}
        case 'b':
            {hexa=11;break;}
        case 'C':
            {hexa=12;break;}
        case 'c':
            {hexa=12;break;}
        case 'D':
            {hexa=13;break;}
        case 'd':
            {hexa=13;break;}
        case 'E':
            {hexa=14;break;}
        case 'e':
            {hexa=14;break;}
        case 'F':
            {hexa=15;break;}
        case 'f':
            {hexa=15;break;}
        default:
            {cout << "Il y a eu une erreur\n";break;}
        }
    if (ha>=1)
        {je=(je+hexa)*16;}
    else je=je+hexa;
        {ha=ha-1;}
    }

for(i=0; je > 0; i++)
    {bin[i] = je%2;
    je = je/2;
    }

cout << "le nombre binaire est : ";

for(i=i-1; i >= 0; i--)
    {cout << bin[i];
    }

cout << endl << endl;
    goto menu;}

fini:

return 0;
}
