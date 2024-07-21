#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char u,char comp){
if(u==comp){
     return 0;
}
if (u=='s'&& comp=='w'){
        return 1;
}else if(u=='w'&& comp=='s'){
        return -1;
}if(u=='s'&& comp=='g'){
        return -1;
}else if(u=='g'&&comp=='s'){
        return 1;
}if(u=='w'&& comp=='g'){
        return 1;
}else if(u=='g'&&comp=='w'){
        return -1;
}if(u=='w'&&comp=='s'){
        return -1;
}else if(u=='s'&&comp=='w'){
        return 1;
}if(u=='g'&&comp=='s'){
        return 1;
}else if(u=='s'&&comp=='g'){
        return -1;
}if(u=='g'&&comp=='w'){
        return -1;
 }else if(u=='w'&&comp=='g'){
        return 1;
}
}
int main(){
char u,comp;
srand(time(0));
int number=rand()%1000+1;
if(number<333){
    comp='s';
}else if (number>333&&number<666){
    comp='w';
}else{
    comp='g';
}
printf("Enter(s,w,g): ");
scanf("%c",&u);
int result=snakewatergun(u,comp);
if(result==0){
    printf("game draw\n",result);

}else if(result==1){
    printf("u won\n",result);

}else if (result==-1){
    printf("u lose\n",result);
}
    return 0;
}