#include "webuiapi.h"
#include "tinycsv.h"

typedef struct APTNode {
    char *account; // ���ڴ洢�˺�
    char *password; // ���ڴ洢����
    char *token; // ���ڴ洢token
    struct APTNode* next; // ���ڴ洢��һ���ڵ�ĵ�ַ
} APTNode;


int main(int argc, char* argv[]) {
    doLocalProxy();
    system("pause");
    
    return 0;
}