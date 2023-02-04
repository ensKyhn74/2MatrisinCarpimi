#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// elemanları 1 ile 5 arasında rastgele üretilen her biri 2x2 boyutunda olan A matrisi ve B matrisi çarpılır.
// Sonuç matrisi ekrana yazdırılır

int main() 

{
 
 int matrisA[2][2],matrisB[2][2],sonucMatris[2][2];

 int i,j,k;
  
 srand(time(NULL));
  
 printf("1.Matris:\n");
  
 for(i = 0 ; i < 2 ; i++) 
 {  
  for(j = 0 ; j < 2 ; j++)
  { 
   matrisA[i][j] = 1 + rand()%5;
  
   printf("%d\t",matrisA[i][j]);
  }
   printf("\n");
 }


 printf("\n2.Matris:\n");
  
 for(i = 0 ; i < 2 ; i++) 
 {  
  for(j = 0 ; j < 2 ; j++)
  { 
   matrisB[i][j] = 1 + rand()%5;
   
   printf("%d\t",matrisB[i][j]); 
  }
  printf("\n"); 
 }


 printf("\nSonuc Matrisi:\n"); 

 for(i = 0 ; i < 2 ; i++) 
 {     
  for(j = 0 ; j < 2 ; j++) 
  {   
    int toplam = 0;
    
    for(k = 0 ; k < 2 ; k++)
    { 
     toplam = toplam + matrisA[i][k]*matrisB[k][j];
    }
   
   sonucMatris[i][j] = toplam;
   
   printf("%d\t",sonucMatris[i][j]);
 }
 
  printf("\n");
}    

 return 0;
 
}

/*   DETAYLI ANLATIM
rastgele üretilen matrisA   5 4
                            4 3

rastgele üretilen matrisB   5 4
                            2 1 
                            
SONUÇ matrisi               33 24                            
                            26 19
                            
i = 0 , j = 0 , toplam = 0
toplam = 0 + matrisA[0][0] * matrisB[0][0] = 0 + 5*5 = 25      (k = 0)
toplam = 25 + matrisA[0][1] * matrisB[1][0] = 25 + 4*2 = 33    (k = 1)

i = 0 , j = 1 , toplam = 0
toplam = 0 + matrisA[0][0] * matrisB[0][1] = 0 + 5*4 = 20      (k = 0)
toplam = 20 + matrisA[0][1] * matrisB[1][1] = 20 + 4*1 = 24    (k = 1)

i = 1 , j = 0 , toplam = 0
toplam = 0 + matrisA[1][0] * matrisB[0][0] = 0 + 4*5 = 20      (k = 0)
toplam = 20 + matrisA[1][1] * matrisB[1][0] = = 20 + 3*2 = 26  (k = 1)

i = 1 , j = 1 , toplam = 0
toplam = 0 + matrisA[1][0] * matrisB[0][1] = 0 + 4*4 = 16      (k = 0)
toplam = 16 + matrisA[1][1] * matrisB[1][1] = 16 + 3*1 = 19    (k = 1)

*/