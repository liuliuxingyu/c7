#include <stdio.h>


struct stu
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};


int main(){
   
    int index=0;
    struct stu arr[1000];
    printf("xueshnrchenhjiguanlixitong");
    while(1){
        printf("1---tianjiaxueshengchengji:\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---xianshisuoyouxueshengchengji\n");
        printf("4---yewu1:suoyouzongfenbujigedexuesheng(zongfenbuchaoguo180)\n");
        printf("5---yewu2:meiyikedoumeiyoujigedexusheng\n");
        printf("6---yewu3:xianshizuigaodexuesheng\n");
        printf("7---yewu4:xianshipingjunfenzuigao,qiemeiyoubujigekemuxuesheng\n");
        printf("8---tuichu\n");
        printf("qingshuru:\n");
        int code;
        scanf("%d",&code);
        if(code==1){
            printf("shuruxueshengxingming:\n");
            scanf("%s",arr[index].name);
            printf("qingshuruxueshengdeyuwenchengji:\n");
            int yuwen;
            scanf("%d",&yuwen);
            arr[index].yuwen=yuwen;
            printf("qingshuruxueshengdeshuxuechengji:\n");
            int shuxue;
            scanf("%d",&shuxue);
            arr[index].shuxue=shuxue;
            printf("qigshuruxueshengdeyingyuchengji:\n");
            int yingyu;
            scanf("%d",&yingyu);
            arr[index].yingyu=yingyu;
            index++;
            printf("tianjiaxhenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==2){
            

        }
        if(code==3){
            

        }
        if(code==4){
            
        }
        if(code==5){
            
        }
        if(code==6){
            
        }
        if(code==7){
            
        }
        if(code==8){
            printf("tuichu\n");
            break;
        }

    }

    return 0;

}