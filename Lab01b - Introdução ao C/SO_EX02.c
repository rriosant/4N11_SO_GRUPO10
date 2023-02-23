
#include <stdio.h>


int main(){
    float N1= 5, N2= 10, N3= 6,media;
    media=(N1+N2+N3)/3;
    //printf("%f",media);
    if(media>=9){
        printf("A");
    }
    if(media>=7.5&&media<9){
        printf("B");
    }
    if(media>=6&&media<7.5){
        printf("C");
    }
    if(media>=4&&media<6){
        printf("D");
    }
    if(media<4){
        printf("F");
    }
    
}
