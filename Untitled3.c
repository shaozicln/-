#include<stdio.h>
int main(){
    int n=543,a,tag=0;
    printf("������Ϸ���ڿ�ʼ���²�����������ĸ�3λ��\n");
        for(int i=5; i>=1; i--){
                 scanf("%d",&a);
            if(i>=2){
                    if(a<n) printf("С�ˣ���ֻ��%d�λ����ˣ�ɵñ\n",i-1);
                    else if(a>n) printf("���ˣ���ֻ��%d�λ����ˣ�ɵñ\n",i-1);
                    else if(a=n){
                        printf("�������Ȼ���ˣ�����������\n");
                        break;
                        }
            }
            else if(i==1){
                    if(a!=n) {for(int i=1;i<=1000000000 ;i++){
                        printf("ɵñ���ⶼ�²��ԣ�����������");
                    }
                    }
                    else if(a=n){
                    printf("�������Ȼ���ˣ�����������\n");
                    break;
                    }
            }
        }

    return 0;
}
