#include<stdio.h>
enum type{CONTROL,DATA};
union Packet{
    int ctrl[2];
    char data[20];
};
struct DataPacket{
    enum type t;
    union Packet p;
};
void input(struct DataPacket dp[],int i);
void print(struct DataPacket dp[],int i);
int main(){
    struct DataPacket dp[50];int n;
    printf("Enter the number of data packets: ");
    scanf("%d",&n);
    printf("Press 1 for entering CONTROL MESSAGE\nPress 2 for entering DATA PAYLOAD\n");
    for (int i=0;i<n;i++){
        input(dp,i);
    };
    printf("\nData stored successfully");
    printf("\n   DATA PACKET TYPE    CONTENTS");
    for (int i=0;i<n;i++){
        print(dp,i);
    };
    return 0;
}
void input(struct DataPacket dp[],int i){
    int n;
    printf("Data Packet %d\n",i+1);
    printf("Enter choice: ");
    scanf("%d",&n);
    if (n==1){
        (dp+i)->t=0;
        printf("Enter the control message:\n");
        printf("Enter the opcode: ");
        scanf("%d",&((dp+i)->p.ctrl[0]));
        printf("Enter the status code: ");
        scanf("%d",&((dp+i)->p.ctrl[1]));
    }
    else{
        (dp+i)->t=1;
        printf("Enter the data payload: ");
        scanf(" %[^\n]",((dp+i)->p.data));
    }
}
void print(struct DataPacket dp[],int i){
    if ((dp+i)->t==0){
        printf("\n%d. CONTROL MESSAGE       %d,%d",i+1,((dp+i)->p.ctrl[0]),((dp+i)->p.ctrl[1]));
    }
    else{
        printf("\n%d. DATA PAYLOAD         %s",i+1,((dp+i)->p.data));
    }
}
