#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    int t[2];
    printf("entrer le nombre ");
    scanf("%d",&t[0]);
printf("entrer le nombre ");
    scanf("%d",&t[1]);
printf("entrer le nombre ");
    scanf("%d",&t[2]);
if(t[0]>t[1]&&t[0]>t[2]){
    printf("le %d est le plus grand",t[0]);
} else if(t[1]>t[0]&&t[1]>t[2]){
    printf("le %d est le plus grand",t[1]);
} else {
    printf("le %d est le plus grand",t[2]);
}












   return 0 ;
}
