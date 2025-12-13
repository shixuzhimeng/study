// struct ListNode* removeElements(struct ListNode* head, int val) {
//     struct ListNode dummy;
//     dummy.next = head;
//     struct ListNode* curr = &dummy;
    
//     while(curr->next != NULL)
//     {
//         if(curr->next->val == val)
//         {
//             struct ListNode* toDelete = curr->next;
//             curr->next = curr->next->next;
//         }
//         else
//         {
//             curr = curr->next;
//         }
//     }
    
//     return dummy.next;
// }



// int addDigits(int num) {
//     while (num >= 10) {
//         int sum = 0;
//         int temp = num;
//         while (temp > 0) {
//             sum += temp % 10;
//             temp /= 10;
//         }
//         num = sum;
//     }
//     return num;
// }



// char* toLowerCase(const char *s) {
//     // 获取字符串的长度
//     int len = 0;
//     while (s[len] != '\0') {
//         len++;
//     }

//     // 动态分配内存用于存储转换后的字符串
//     char *result = (char*)malloc(len + 1);  // +1 以存储结束符 '\0'
//     if (result == NULL) {
//         // 如果内存分配失败，返回 NULL
//         return NULL;
//     }

//     // 转换每个字符并存入新字符串
//     for (int i = 0; i < len; i++) {
//         result[i] = tolower(s[i]);  // 转换为小写字母
//     }

//     result[len] = '\0';  // 确保字符串以 '\0' 结尾
//     return result;  // 返回新字符串
// }