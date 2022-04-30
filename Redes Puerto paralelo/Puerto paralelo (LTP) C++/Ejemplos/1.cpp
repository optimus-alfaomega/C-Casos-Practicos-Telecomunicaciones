#include <stdio.h> 
#include <conio.h> 
#include <windows.h> 
#include <iostream>
#include <unistd.h>
using namespace std;
int num, retardo, a;

     typedef void _stdcall (*oupfuncPtr)(short i, int x); 

int main(void) 
{ 
     HINSTANCE hLib;  
     oupfuncPtr oup32; 

     short i; 
     int x,; 
     hLib = LoadLibrary("inpout32.dll"); 
     if (hLib == NULL) { 
          printf("LoadLibrary Failed.\n"); 
          system ("pause");
        return -1;
         }

          
     oup32 = (oupfuncPtr) GetProcAddress (hLib, "Out32"); 
     if (oup32 == NULL) { 
          printf("GetProcAddress for Oup32 Failed.\n"); 
          system ("pause");
           return -1;
     } 
// Aqui comienza tu codigo
{
     cout<<" TTTTT  TTTTT  /TTTT  TTTTT  TT TT   TTT   \n";
     cout<<"  TTT   TTT    oTTTo  TT     TTTTT  TTTTT  \n";
     cout<<"  TTT   TTTTT  TTTT/  TTTTT  TT TT  TT TT  \n";
     
cout<<"                                                    ¶¶¶¶¶¶¶  ¶¶¶¶¶ \n";
cout<<"                                                  ¶¶¶¶¶¶¶¶    ¶¶¶¶¶¶     \n";
cout<<"                                                 ¶¶¶¶¶¶¶¶¶¶    ¶¶¶¶¶  \n";
cout<<"                                                ¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶¶¶¶¶¶´\n";
cout<<"                                                ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶¶¶ \n";
cout<<"                                                 ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶´ \n";
cout<<"                                                   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶\n";
cout<<"         -----------------                         ¶¶    ¶¶¶¶     ¶   \n";
cout<<"         thE_mYsTeR®                              ¶¶    ¶¶¶¶     ¶¶  \n";
cout<<"         -----------------                         ¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶  \n";
cout<<"                                                    ¶¶¶¶¶¶   ¶¶¶¶¶¶¶  \n";
cout<<"                                                       ¶¶¶¶¶¶¶¶¶ \n";
cout<<"                                                       ¶ ¶ ¶ ¶ ¶\n";

     cout<<"ida y vuelta...........(1)\n";
     cout<<"sube y baja............(2)\n";
     cout<<"destellos..............(3)\n";
     cout<<"motor paso a paso......(4)\n";
     cout<<"contador..................(5)\n\n";
     cout<<"selecciona alguna de las opciones anterires: ";


     cin>>num; 
    if (num==1) {
    a=1;
    while (1<=a) {
                oup32(0x378, 1); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 2); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 4); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 8); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 16); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 32); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 64); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 128); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 64); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 32); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 16); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 8); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 4); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 2); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 1); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);       
         }
         }
 
      if (num==2) {
     a=1;
    while (1<=a) {
                oup32(0x378, 1); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 3); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 7); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 15); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 31); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 63); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 127); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 255); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 254); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 252); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 248); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 240); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 224); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 192); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 128); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                       oup32(0x378, 192); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 224); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 240); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 248); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 252); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 254); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 255); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 127); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 63); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 31); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 15); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 7); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 3); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 1); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
         }
         }
         if (num==3) {
     a=1;
    while (1<=a) {
          
               oup32(0x378, 170); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 
                 oup32(0x378, 85); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 }
         }
         
         
          if (num==4) {
     a=1;
    while (1<=a) {
               oup32(0x378, 5); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 oup32(0x378, 4); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                  oup32(0x378, 6); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                  oup32(0x378, 2); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                  oup32(0x378, 10); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                  oup32(0x378, 8); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                  oup32(0x378, 9); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                  oup32(0x378, 1); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 10000000);
                 }
         }
         
         if (num==5) {
    a=1;
    while (1<=a) {
               oup32(0x378, 68); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 
                 oup32(0x378, 115); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 118); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 92); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 62); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 63); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 100); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 127); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 124); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 127); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 100); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 63); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 62); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 92); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 118); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 115); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);
                 oup32(0x378, 68); 
                retardo =0;
                        do {
                        retardo ++;
                        }
                 while (retardo <= 100000000);

         }
         }
         
            
    

     /* Aqui termina tu codigo */ 
     FreeLibrary(hLib); 
     return 0; 
}
   getch();
     }
