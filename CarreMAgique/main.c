#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5

void init_Tab(int Tab[TAILLE][TAILLE]);
void crea_Tab(int Tab[TAILLE][TAILLE]);
void affichage_Tab(int Tab[TAILLE][TAILLE]);

int main()
{
    int Tab[TAILLE][TAILLE];

    init_Tab(Tab);
    crea_Tab(Tab);

}

void init_Tab(int Tab[TAILLE][TAILLE]) {

    int i,j;
    //init tableaux
    for(i=0;i<TAILLE;i++){
        for(j=0;j<TAILLE;j++){
            Tab[i][j]=0;
        }
    }
}

void crea_Tab(int Tab[TAILLE][TAILLE]){

    int i,j,x,y;
    int pos_x=(TAILLE/2)-1,pos_y=TAILLE/2;
    for(i=0;i<TAILLE*TAILLE;i++){
            if (Tab[pos_x][pos_y]==0){

                Tab[pos_x][pos_y]=i+1;
                pos_x--;
                if (pos_x<0){
                    pos_x=TAILLE-1;
                }
                pos_y++;
                if (pos_y>TAILLE-1){
                    pos_y=0;
                }
            }else{
                i--;
                pos_x--;
                if (pos_x<0){
                    pos_x=TAILLE-1;
                }
                pos_y--;
                if (pos_y<0){
                    pos_y=TAILLE-1;
                }
            }
    }
    affichage_Tab(Tab);
}

void affichage_Tab(int Tab[TAILLE][TAILLE]){

    int i,j;

    for(i=0;i<TAILLE;i++){
        for(j=0;j<TAILLE;j++){
            printf(" %d -",Tab[i][j]);
        }
        printf("\n");
    }
}
