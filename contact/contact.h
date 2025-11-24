#pragma once
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR  30
#define DEFAULT_SZ 3
#define INT_SZ 2


//人的信息
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
} PeoInfo;


//通讯录

//静态版本
// typedef struct Contact
// {
//     PeoInfo date[MAX];//存放人的信息
//     int count;//记录当前的通讯录中实际人的个数
// }Contact;

//动态版本
typedef struct Contact
{
    PeoInfo *date;//存放人的信息
    int count;//记录当前的通讯录中实际人的个数
    int capacity;//当前通讯录的容量
}Contact;

//判断增容的
void CheckCapacity(Contact* pc);

//初始化通讯录
int InitContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);

//增加联系人的通讯录
void AddContact(Contact* pc);

//打印通讯录中的信息
void ShowContact(Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找联系人
void SearchContact(Contact* pc);

//修改联系人的内容
void ModifyContact(Contact* pc);

//排序联系人（按照名字排序）
void SortContact(Contact* pc);

//保存内容到文件
void SaveContact(Contact *pc);

//加载文件到通讯录中
void LoadContact(Contact *pc);