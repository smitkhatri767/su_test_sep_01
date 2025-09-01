#include <stdio.h>

int main(){
    char ch;

    printf("enter a character: ch");
    scanf("%c", &ch );
if ((ch >= 'A' && ch <='Z')|| (ch >= 'a' && ch <= 'z')){
 printf("alphabet");
}

else if(ch >='0' && ch <='9'){
    printf("digits");

}
else{
    printf("special symbol");
}

}























}
