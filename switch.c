#include<stdio.h>
int main(){
   // int day; //1-mon, 2- tues
   char day;//m, t, w, T, f, s, S
    printf("enter day :");
    scanf("%c", &day);

    switch (day) {
        case 'm': printf("monday \n");
        break;
        case 't': printf("tuesday\n");
        break;
        case 'w': printf("wednesday");
        break;
        case 'T': printf("thursday \n");
        break;
        case 'f': printf("friday \n");
        break;
        case 's': printf("saturday \n");
        break;
        case 'S': printf("sunday \n");
        break;
        default : printf("not a vaild day! \n");

    }
}