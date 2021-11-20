#include <stdio.h>
#include <stdlib.h>



int map_Set(int **map,int *rows, int height, int c);
void map_Fill(int **map, int r, int c);
void map_clear(int **map,int c);
void map_bigarmyloc(int **map,int *x,int *y, int r, int c);


int main(int argc, char* argv[]){
    
    int c, r; //c = colums|width and h = height|rows
    printf("Please insert the width of the battlefield: ");
    scanf("%i", &c);
    printf("Please insert the height of the battlefield: ");
    scanf("%i", &r);
    
    
    int **map, *colums;
    map = malloc(sizeof(int *) * r);
    if(map==NULL){
        printf("Error. Allocation was unsuccessful. \n");
        return 1;
    }



    map_Set(map, colums, r, c);
    
    map_Fill(map, r, c);
    


    int x, y;
    
    map_bigarmyloc(map, &x, &y, r, c);
    printf("Coordenadas x y: %i %i\n", x, y);
    printf("Com valor: %i\n", map[x][y]);
    
    
    
    
        for(int a = 0; a < r; a++){
            for ( int b = 0; b < c; b++){
                int value;
                printf("%i ",map[a][b]);
            }
            printf("\n");
        }
    
    map_clear(map, c);
    printf("%i", map[0][0]);
    
    
    
    return 0;
}





int map_Set(int **map,int *colums, int height, int c){
    
    for (int fill = 0; fill < height; fill++){
        colums = malloc(sizeof(int) * c);
        map[fill] = colums;
    }
    
    return 0;
}

void map_Fill(int **map, int r, int c){
    
    for(int a = 0; a < r; a++){
        for ( int b = 0; b < c; b++){
            int value;
            printf("Insira o valor da localizaçao map[%i][%i]: ", a, b);
            scanf("%i", &value);
            map[a][b] = value;
        }
    }
}

void map_clear(int **map, int c){
    for (int a = 0; a < c; a++){
        free(map[a]);
    }
    
    free(map);
}

void map_bigarmyloc(int **map,int *x,int *y,int r, int c){
    int major = 0;
    for (int a = 0; a < r; a++){
        for(int b = 0; b < c; b++){
            if (major < map[a][b]){
                major = map[a][b];
                *y = b;
                *x = a;
            }
        }
    }
    
}
    