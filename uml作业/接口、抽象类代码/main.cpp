#include <iostream>

//某一个资源结构体
typedef struct {
    int resource_id;//
    int total_num;
    int available_num;

} resource;

//某一个进程结构体
typedef struct {
    int process_id;
    int max;
    int allocation;
    int need;
} process;

//初始化资源,进程
int init_data(resource* resources,process* processes,
              int num_resources, int num_processes){
    int i,j;
    //初始化资源结构体
    for(int i=0;i<num_resources;i++){
        resources[i].resource_id=i;//id初始化
        printf("输入第 %d 资源的总数",i);
        scanf("%d",&resources[i].total_num);
        resources[i].available_num=resources[i].total_num;

    };
    for (int j = 0; j < num_processes; j++) {

    }
}






int main() {

    return 0;
}

