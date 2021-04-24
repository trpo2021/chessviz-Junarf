#include <stdio.h>

void doska(char Desk[][9])
{
int x,y;
Desk[0][0] = 32;
Desk[0][1] ='a';
Desk[0][2] ='b';
Desk[0][3] ='c';
Desk[0][4] ='d';
Desk[0][5] ='e';
Desk[0][6] ='f';
Desk[0][7] ='g';
Desk[0][8] ='h'; //nazvanie polya
Desk[1][1] ='R';
Desk[1][2] ='N';
Desk[1][3] ='B';
Desk[1][4] ='Q';
Desk[1][5] ='K';
Desk[1][6] ='B';
Desk[1][7] ='N';
Desk[1][8] ='R'; //nazvanie figur

Desk[1][0] ='1'; //pervaya stroka
Desk[2][0] ='2'; //vtoraya stroka
Desk[3][0] ='3'; //tretya stroka
Desk[4][0] ='4'; //chetvertaya stroka
Desk[5][0] ='5'; //pyataya stroka
Desk[6][0] ='6'; //shestaya stroka
Desk[7][0] ='7'; //sedmaya stroka
Desk[8][0] ='8'; //vosmaya stroka

for(x = 1;x < 9;x++) {
Desk[2][x] ='P'; // rasstanovka peshek
}
for(x = 3;x <= 6;x++){
for (y = 1;y < 9;y++){
Desk[x][y]= 32;
}
}
for(x = 1;x < 9;x++){
Desk[7][x] ='p'; // rasstanovka peshek s drygoi storoni
}
Desk[8][1] ='r';
Desk[8][2] ='n';
Desk[8][3] ='b';
Desk[8][4] ='q';
Desk[8][5] ='k';
Desk[8][6] ='b';
Desk[8][7] ='n';
Desk[8][8] ='r';//zapolnenie figurami vtoroy storony

}
int Printboard(char Desk[][9])
{
int x, y;
printf("\n");
for (x=8;x>-1;x--){
for (y=0;y<9;y++){
if (Desk[x][y]==0)
Desk[x][y]= 32;//pustota
printf("%4c", Desk[x][y]);
}
printf("\n");
}
printf("\n-%d-\n", Desk[0][0]);
return 0;
}
int main(){
char Desk[9][9];
doska(Desk);
Printboard(Desk);
return 0;
}
       
