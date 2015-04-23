#include <stdio.h>
#include <stdlib.h>

#define N 300000
#define M 5000

int main()
{
    int topics, prece,days,index,no;
    int num = 0;
    int maxtopics = 0;

    int aux, temp;
    int superArray[M];
    int dias[N];
    int flag = 1;
    short matriz[N][2];

    int i = 0;

    scanf("%d %d %d",&topics,&prece,&days);


    for (i = 0 ;i < prece; i++){
        dias[i] = 0;
    }

    for(i = 0; i < topics;i++){
        superArray[i] = 1;
    }


     for (i = 0;i < prece; i++){

        scanf("%d %d",&index,&no);

        matriz[i][0]=index;
        matriz[i][1]=no;

        aux = superArray[index] + 1;
        temp = superArray[no];

        if(aux > temp){

            superArray[no] = aux;

        }

    }

    while(flag){
        flag = 0;
        for(i = 0;i<prece;i++){

            aux = superArray[matriz[i][0]] + 1;
            temp = superArray[matriz[i][1]];

            if(aux > temp){

                superArray[matriz[i][1]] = aux;
                flag = 1;

            }

        }
    }





    for(i = 0; i<topics;i++){

        dias[superArray[i]]++;
        if(dias[superArray[i]] == days+1){
            num++;
        }

        if(dias[superArray[i]]>maxtopics){
            maxtopics=dias[superArray[i]];
        }

    }



    printf("%d %d\n",maxtopics,num);

    return 0;
}
