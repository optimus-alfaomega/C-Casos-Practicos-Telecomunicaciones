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
// Inicia codigo de control...
{
     cout<<" TTTTT  TTTTT  /TTTT  TTTTT  TT TT   TTT   \n";
     cout<<"  TTT   TTT    oTTTo  TT     TTTTT  TTTTT  \n";
     cout<<"  TTT   TTTTT  TTTT/  TTTTT  TT TT  TT TT  \n\n\n";
     cout<<"           ------------------\n";
     cout<<"            ...thE_mYsTeR...\n";
     cout<<"           ------------------\n\n\n";
     cout<<"Ida y vuelta...........(1)\n";
     cout<<"Presione uno para continuar: ";
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
         

     /* Aqui termina tu codigo */ 
     FreeLibrary(hLib); 
     return 0; 
}
   getch();
     }
