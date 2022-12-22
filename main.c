#include <stdio.h>

int main(void){
    int i, r, sum=0, tempsum=0;
    int n;
    printf("N=");
    scanf("%i", &n);
    for (i=1;i<=n;++i){
        printf(" ");
        scanf("%i", &r);
        tempsum+=r;
        if(r==0){
            sum=tempsum;
            tempsum=0;
        }
    }
    printf("%i\n", sum);
    return 0;

}
