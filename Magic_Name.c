#include <stdio.h>
#include<string.h>
//enter your name and see the magic
//Made By | AKASH_TECHIE
int main() {
char a[25]; int i,l;
printf("Enter your name ☛ \n\n");
scanf("%[^\n]s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]=='a'||*(a+i)=='A') 
    printf(" AAAAAA \n A    A\n AAAAAA\n A    A\n A    A\n\n");
    if(*(a+i)=='b'||*(a+i)=='B')
    printf(" BBBBBB\n B    B\n BBBBB\n B    B\n BBBBBB\n\n");
    if(*(a+i)=='c'||*(a+i)=='C')
    printf(" CCCCCC\n C\n C\n C\n CCCCCC\n\n");
    if(*(a+i)=='d'||*(a+i)=='D')
    printf(" DDDDDD\n D    D\n D    D\n D    D\n DDDDDD\n\n");
    if(*(a+i)=='e'||*(a+i)=='E')
    printf(" EEEEEE\n E\n EEEEEE\n E\n EEEEEE\n\n");
    if(*(a+i)=='f'||*(a+i)=='F')
    printf(" FFFFFF\n F\n FFFFF\n F\n F\n\n");
    if(*(a+i)=='g'||*(a+i)=='G')
    printf(" GGGGGG\n G\n G  GGG\n G    G\n GGGGGG\n\n");
    if(*(a+i)=='h'||*(a+i)=='H')
    printf(" H    H\n H    H\n HHHHHH\n H    H\n H    H\n\n");
    if(*(a+i)=='i'||*(a+i)=='I')
    printf(" IIIIII\n   II  \n   II  \n   II  \n IIIIII\n\n");
    if(*(a+i)=='j'||*(a+i)=='J')
    printf(" JJJJJJ\n   JJ  \n   JJ  \n   JJ  \n JJJ  \n\n");
    if(*(a+i)=='k'||*(a+i)=='K')
    printf(" K   K\n K  K\n KKK\n K  K\n K   K\n\n");
    if(*(a+i)=='l'||*(a+i)=='L')
    printf(" L\n L\n L\n L\n LLLLLL\n\n");
    if(*(a+i)=='m'||*(a+i)=='M')
    printf(" M     M\n M M M M\n M  M  M\n M     M\n M     M\n\n");  
   
   if(*(a+i)=='n'||*(a+i)=='N')
   printf(" NN    N\n N N   N\n N  N  N\n N   N N\n N    NN\n\n");
   
   
    if(*(a+i)=='o'||*(a+i)=='O')
    printf("  OOOO \n O    O\n O    O\n O    O\n  OOOO \n\n");
    if(*(a+i)=='p'||*(a+i)=='P')
    printf(" PPPPPP\n P    P\n PPPPPP\n P\n P\n\n");
    if(*(a+i)=='q'||*(a+i)=='Q')
    printf("  QQQQ \n Q    Q\n Q  Q Q\n Q   QQ\n  QQQ Q \n\n");
    if(*(a+i)=='r'||*(a+i)=='R')
    printf(" RRRRRR\n R    R\n RRRRRR\n RR    \n R  R  \n R    R\n\n");
    if(*(a+i)=='s'||*(a+i)=='S')
    printf(" SSSSSS\n S\n SSSSSS\n      S\n SSSSSS\n\n");
    if(*(a+i)=='t'||*(a+i)=='T')
    printf(" TTTTTT\n   TT  \n   TT  \n   TT\n   TT\n\n");
    if(*(a+i)=='u'||*(a+i)=='U')
    printf(" U    U\n U    U\n U    U\n U    U\n UUUUUU\n\n");
    if(*(a+i)=='v'||*(a+i)=='V')
    printf(" V     V\n  V   V\n   V V\n    V\n\n");
    if(*(a+i)=='w'||*(a+i)=='W')
    printf(" W   W   W\n W   W   W\n W   W   W\n W   W   W\n WWWWWWWWW\n \n");
    if(*(a+i)=='x'||*(a+i)=='X')
    printf(" X    X\n  X  X \n   XX  \n  X  X \n X    X\n\n");
    if(*(a+i)=='y'||*(a+i)=='Y')
    printf(" Y    Y\n Y    Y\n YYYYYY\n      Y\n YYYYYY\n\n");
    if(*(a+i)=='z'||*(a+i)=='Z')
    printf(" ZZZZZZ\n     Z\n    Z \n   Z\n ZZZZZZ\n\n");
    if(*(a+i)==' ')
    printf("\n\n");
    
}    
printf("\n\n. Thanks for entering.. Please upvote if you like this\n\n");
    return 0;
}