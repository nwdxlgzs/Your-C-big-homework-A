#include "webuiapi.h"
#include "tinycsv.h"

typedef struct APTNode {
    char *account; // 用于存储账号
    char *password; // 用于存储密码
    char *token; // 用于存储token
    struct APTNode* next; // 用于存储下一个节点的地址
} APTNode;


int main(int argc, char* argv[]) {
    doLocalProxy();
    system("pause");
    
    return 0;
}