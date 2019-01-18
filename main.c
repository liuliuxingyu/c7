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
            printf("shanchuxueshengchengji\n");
            if(index>0){
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char x;
            scanf("%c",&x);
            scanf("%c",&x);
            }else{
                printf("shanchushibai,dianjihuichejixu\n");
                 char x;
            scanf("%c",&x);
            scanf("%c",&x);
            }

        }
        if(code==3){
            printf("suoyouxueshengchengjiruxia:\n");
            
            for(int i = 0; i < index; i++)
            {
                printf("di%dgexuesheng%sdechengjiwei%d,%d,%d\n",i+1,arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
            }
            printf("xianshichenggong,dianjihuichejixu\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==4){
          for(int i=0;i<index;i++){
              int sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;
              if(sum<180){
                  printf("di%dgexuesheng%schengjibujige\n",i+1,arr[i].name);
              }
          }
          printf("shaixuanchenggong,dianjihuichejixu\n");
           char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==5){
            for(int i=0;i<index;i++){
                if(arr[i].yuwen<60 && arr[i].shuxue<60 && arr[i].yingyu<60){
                    printf("sankebujigedexxueshrngxingmingwei%s,yuwen:%d,shuxue:%d,yingyu:%d",arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);

                }
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==6){
            printf("zongfenzuigaodexueshengwei:\n");
            int max=0;
            int stuID=0;
            
            for(int i = 0; i < index; i++)
            {
                 int sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;
                 if(max<sum){
                     max=sum;
                     stuID=i;
                 }
            }
            printf("zongfenzuigaodexueshengxingmingwei%s,yuwen%d,shuxue%d,yingyu%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            printf("dianjihuichejixu\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==7){
            double max=0.0;
            int stuID=0;
            
            for(int i = 0; i < index; i++)
            {
                if(arr[i].yuwen>=60 && arr[i].shuxue>=60 && arr[i].yingyu>=60){
                    double avg=(arr[i].yuwen+arr[i].shuxue+arr[i].yingyu)/3.0;
                    if(max<avg){
                        max=avg;
                        stuID=i;
                    }
                }
            }
            printf("pingjunfenzuigaoqiemeiyoubujigekemudexueshengxingming%s,yuwen:%d,shuxue:%d,yingyu:%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            printf("dianjihuichejixu\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code==8){
            printf("tuichu\n");
            break;
        }

    }

    return 0;

}