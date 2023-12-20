#include<stdio.h>
int main(){
    int n=543,a,tag=0;
    printf("猜字游戏现在开始，猜猜我输入的是哪个3位数\n");
        for(int i=5; i>=1; i--){
                 scanf("%d",&a);
            if(i>=2){
                    if(a<n) printf("小了，你只有%d次机会了，傻帽\n",i-1);
                    else if(a>n) printf("大了，你只有%d次机会了，傻帽\n",i-1);
                    else if(a=n){
                        printf("焯立马居然对了，算你运气好\n");
                        break;
                        }
            }
            else if(i==1){
                    if(a!=n) {for(int i=1;i<=1000000000 ;i++){
                        printf("傻帽，这都猜不对，嘻嘻嘻嘻嘻");
                    }
                    }
                    else if(a=n){
                    printf("焯立马居然对了，算你运气好\n");
                    break;
                    }
            }
        }

    return 0;
}
