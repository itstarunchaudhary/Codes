#include <stdio.h>
int main(){
    printf("Enter the size of your array:");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        printf("Enter the %d element of your array:",i);
        scanf("%d",&arr[i]);
    }

    printf("If you want to insert an element press 1 and to delete an element an element press 2:");
    int press;
    scanf("%d",&press);
    switch(press){
        case 1:{
            printf("Enter the number of element you want to enter:");
            int num;
            scanf("%d",&num);
            for(int i=1;i<=num;i++){
            printf("Enter the position where you want to insert %d element:",i);
            int pos;
            scanf("%d",&pos);
            printf("Enter the element:");
            int element;
            scanf("%d",&element);
            n++;
            for(int j=pos;j<=(n-pos);j=j+2){
                int a=arr[j];
                arr[j]=element;
                element=arr[j+1];
                arr[j+1]=a;
            }


            }
            for(int k=1;k<=n;k++){
                printf("The %d element of array is %d\n",k,arr[k]);
                
            }
        }

        case 2:{
            printf("Enter the number of element you want to delete:");
            int num_of_ele;
            scanf("%d",&num_of_ele);
            for(int i=1;i<=num_of_ele;i++){
                printf("Enter the position you want to delete:");
                int pos;
                scanf("%d",&pos);
                for(int j=1;j<=n;j++){
                    if(j<pos){
                        arr[j]=arr[j];
                        
                    }
                    else{
                        int a=arr[j+1];
                        arr[j]=a;
                    }
                    
                }
                    n--;

            }
            for(int i=1;i<=n;i++){
                printf("The %d element of new array is%d\n",i,arr[i]);
            }



        }

    }

    return 0;
}