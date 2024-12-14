#include <stdio.h> 
#include <stdbool.h>

bool CanPlaceFlowers( int* flowerbed, int flowerbedSize, int n ) {
    
    int planted = 0;

    if ( n == 0 ){
        return true;
    }

    for ( int i = 0; i < flowerbedSize; i++ ){
        printf("flowerbed[%d] = %d\n", i, flowerbed[i]);
        if ( flowerbed[i] == 0 ){
            bool canPlant = false;
            if ( flowerbed[i] == 0 && flowerbedSize == 1 ){
                canPlant = true;
            } else if ( i == 0 && flowerbedSize > 1 && flowerbed[i+1] == 0 ){
                canPlant = true;
            } else if ( i == flowerbedSize - 1 && flowerbed[i-1] == 0 ){
                canPlant = true;
            } else if ( i > 0 && i < flowerbedSize - 1 && 
                    flowerbed[i+1] == 0 && flowerbed [i-1] == 0 ){
                canPlant = true;
            }

            if ( canPlant ){
                planted ++;
                flowerbed[i] = 1;
                if ( planted == n ){
                    return true;
                }
            }
        }
    }
    return false;
}


int main(){

    int flowerbed[5] = {0,0,0,0,0};
    int tam = 5;
    int x = 4;


    bool planting = false;
    planting = CanPlaceFlowers(flowerbed,tam,x);
    if ( planting ){
        printf("Flowers have been planted");
    } else {
        printf("Flowers couldn't be planted");
    }


    return 0;
}