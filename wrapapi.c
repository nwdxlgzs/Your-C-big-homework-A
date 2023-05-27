#include "webuiapi.h"

/**
    �����ƴ˺�����ʵ�ֵ�¼����
    ������accΪ�˺ţ�pwdΪ����
    ����token�������¼ʧ�ܣ�����NULL
    token������֤����ԣ���Ϊ�����֤�����ǳ��Ȳ�����128�ֽڵ�HEX�ַ���
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ���ص�ָ��һ��Ҫ���Ա��ͷţ�malloc����realloc������ָ�룩���ύ��ɻ��Զ���free����
*/
char* webuiapi_login(char* acc, char* pwd) {
    // ����mockһ��token��ʵ��Ӧ��������˺ź�������token��ϵ
    char* token = malloc(129);
    strcpy(token, "1234567890ABCDEFFEDCBA0987654321");
    // return token;
    return NULL;
}

/**
    �����ƴ˺�����ʵ��ע�Ṧ��
    ������accΪ�˺ţ�pwdΪ����
    ����code��0Ϊ�ɹ���1Ϊʧ�ܣ�2Ϊ�˺��Ѵ��ڡ�
*/
int webuiapi_register(char* acc, char* pwd) {
    // ����mockһ��codeΪ0�ķ���ֵ
    int code = 0;
    // int code = 1;
    // int code = 2;
    return code;
}


/**
    �����ƴ˺�����ʵ��token��֤����
    ������token
    ����code��0Ϊ�ɹ���1Ϊʧ�ܡ�
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
*/
int webuiapi_checkToken(char* token) {
    // ����mockһ��codeΪ0�ķ���ֵ
    // int code = 0;
    int code = 1;
    return code;
}


/**
    �����ƴ˺�����ʵ��token�˳�����
    ������token
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
*/
void webuiapi_quitToken(char* token) {

}

/**
    �����ƴ˺�����ʵ��uuid���ɹ���
    ������token
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
    ���ص�ָ��һ��Ҫ���Ա��ͷţ�malloc����realloc������ָ�룩���ύ��ɻ��Զ���free����
*/
char* tinycsv_getuuid(char* token) {
    // ����mockһ��uuid��ʵ��Ӧ��������˺ź�������token��ϵ
    char* uuid = malloc(129);
    strcpy(uuid, "1234567890ABCDEFFEDCBA0987654321");
    return uuid;
}

/**
    �����ƴ˺�����ʵ�������ȡ�����б���
    ������token��sortType��orderType��queryType��search
    sortTypeΪ�棬�������У�Ϊ�٣���������
    orderTypeΪ�����ֶΣ���ѡֵΪ��uuid��itemName��createTime��updateTime
    queryTypeʹ���ṩ�ĺ꼴���ж�
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
    ���ص�ָ��һ��Ҫ���Ա��ͷţ�malloc����realloc������ָ�룩���ύ��ɻ��Զ���free����
*/
char* webuiapi_getDataList(char* token, int sortType, char* orderType, int queryType, char* search) {
    // ����mockһ���б�ʵ��Ӧ��������˺ź�������token��ϵ
    char* csv = malloc(1024);
    strcpy(csv, "uuid,type,itemName,file,string,acc,pwd,createTime,updateTime""\r\n"
        "1,file,6974656d41,312e747874,,,,2023-12-12 12:12:12,2023-12-12 12:12:12""\r\n"
        "2,string,6974656d42,,68656c6c6f20776f726c64,,,2023-12-12 12:12:12,2023-12-12 12:12:12""\r\n"
        "3,accpwd,6974656d43,,,61646d696e,3132333435363738,2023-12-12 12:12:12,2023-12-12 12:12:12""\r\n");
//     strcpy(csv, "uuid,type,itemName,file,string,acc,pwd,createTime,updateTime""\r\n"
//    "1,file,57696e546f70,443a5c50726f6772616d2046696c65732028783836295c57696e546f705c57696e546f702e657865,,,,2023-1-2 3:4:5,2023-1-2 3:4:5""\r\n"
//     // "2,string,7374724974656d,,B0A2B0CDB0A2B0CD,,,2023-2-3 4:5:6,2023-2-3 4:5:6""\r\n"
//     // "3,accpwd,CAD7CAA6D5CBBAC5,,,313233343536,363534333231,2023-3-4 5:6:7,2023-3-4 5:6:7""\r\n"
//     );
    return csv;
}

/**
    �����ƴ˺�����ʵ�������ȡ�����б���
    ������token��uuid
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
    ���ص�ָ��һ��Ҫ���Ա��ͷţ�malloc����realloc������ָ�룩���ύ��ɻ��Զ���free����
*/
char* webuiapi_getDataByUUID(char* token, char* uuid) {
    // ����mockһ���б�ʵ��Ӧ��������˺ź�������token��ϵ
    char* csv = malloc(1024);
    strcpy(csv, "uuid,type,itemName,file,string,acc,pwd,createTime,updateTime""\r\n"
        "1,file,6974656d41,312e747874,,,,2023-12-12 12:12:12,2023-12-12 12:12:12""\r\n"
        // "2,string,6974656d42,,68656c6c6f20776f726c64,,,2023-12-12 12:12:12,2023-12-12 12:12:12""\r\n"
        // "3,accpwd,6974656d43,,,61646d696e,3132333435363738,2023-12-12 12:12:12,2023-12-12 12:12:12""\r\n"
        );
//     strcpy(csv, "uuid,type,itemName,file,string,acc,pwd,createTime,updateTime""\r\n"
// // "1,file,57696e546f70,443a5c50726f6772616d2046696c65732028783836295c57696e546f705c57696e546f702e657865,,,,2023-1-2 3:4:5,2023-1-2 3:4:5""\r\n"
// // "2,string,7374724974656d,,B0A2B0CDB0A2B0CD,,,2023-2-3 4:5:6,2023-2-3 4:5:6""\r\n"
// "3,accpwd,CAD7CAA6D5CBBAC5,,,313233343536,363534333231,2023-3-4 5:6:7,2023-3-4 5:6:7""\r\n"
// );
    return csv;
}

/**
    �����ƴ˺�����ʵ�������޸�ָ�����ݹ���
    ������token��uuid��itemName��string��acc��pwd
    ����string��acc��pwdΪ��ѡ����������������б��е�type�ֶ��ж��Ƿ�ʹ��
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
*/
int webuiapi_editItem(char* token, char* uuid, char* itemName, char* string, char* acc, char* pwd) {
    // ����mockһ��codeΪ0�ķ���ֵ
    int code = 0;
    // int code = 1;
    return code;
}

/**
    �����ƴ˺�����ʵ��ɾ��ָ��uuid�����ݹ���
    ������token��uuid
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
*/
int webuiapi_deleteItem(char* token, char* uuid) {
    // ����mockһ��codeΪ0�ķ���ֵ
    int code = 0;
    // int code = 1;
    return code;
}

/**
    �����ƴ˺�����ʵ�ֻ�ԭ�ļ�����
    ������token��uuid
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
*/
int webuiapi_decryptFile(char* token, char* uuid) {
    // ����mockһ��codeΪ0�ķ���ֵ
    int code = 0;
    // int code = 1;
    return code;
}

/**
    �����ƴ˺�����ʵ���������������
    ������token��uuid��itemName��string��acc��pwd��file
    ����string��acc��pwd��fileΪ��ѡ�����������itype�ж��Ƿ�ʹ��
    ��Ҫ����token���˺ŵĹ�ϵ���˺�Ҳ���˳���¼ʱ��tokenҲҪʧЧ��û�˳�����ֱ���ص�½��tokenҲҪʧЧ
    ��Ҫ����uuid�������б�Ĺ�ϵ���������ظ���uuid��Ӧ��ÿ��item��Ψһ��ʶ
*/
int webuiapi_addItem(char* token, int itype, char* name, char* acc, char* pwd, char* string, char* file) {
    // ����mockһ��codeΪ0�ķ���ֵ
    int code = 0;
    // int code = 1;
    return code;
}

/**
    �����ƴ˺�����ʵ�ֻ�ȡ���ѧ�Ź���
    ��������
    ����ֵ�����ѧ������
*/
unsigned long long webuiapi_getStudentId(){
    return 987654321;
}