#pragma once
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR  30


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
typedef struct Contact
{
    PeoInfo date[MAX];//存放人的信息
    int count;//记录当前的通讯录中实际人的个数
}Contact;


//初始化通讯录
void InitContact(Contact* pc);

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