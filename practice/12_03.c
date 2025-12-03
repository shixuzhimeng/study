// #include <stdio.h>

// typedef struct {
//     char num[17];  // 准考证号（16位数字），加1是为了保留'\0'结束符
//     int test_seat;  // 试机座位号
//     int exam_seat;  // 考试座位号
// } Student;

// int main() {
//     int N;
//     scanf("%d", &N);  // 读取考生数量
    
//     Student students[N];
    
//     // 读取所有考生的准考证号、试机座位号和考试座位号
//     for (int i = 0; i < N; i++) {
//         scanf("%s %d %d", students[i].num, &students[i].test_seat, &students[i].exam_seat);
//     }

//     int M;
//     scanf("%d", &M);  // 读取查询数量
    
//     int queries[M];
    
//     // 读取待查询的试机座位号
//     for (int i = 0; i < M; i++) {
//         scanf("%d", &queries[i]);
//     }

//     // 对每个查询，查找对应的试机座位号
//     for (int i = 0; i < M; i++) {
//         int query = queries[i];
        
//         // 查找并输出对应的准考证号和考试座位号
//         for (int j = 0; j < N; j++) {
//             if (students[j].test_seat == query) {
//                 printf("%s %d\n", students[j].num, students[j].exam_seat);
//                 break;  // 找到后跳出内层循环
//             }
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char id[17];
//     int practice_seat;
//     int exam_seat;
// } Candidate;

// int compare(const void *a, const void *b) {
//     return ((Candidate*)a)->practice_seat - ((Candidate*)b)->practice_seat;
// }

// int main() {
//     int N, M;
//     scanf("%d", &N);
//     Candidate candidates[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%s %d %d", candidates[i].id, &candidates[i].practice_seat, &candidates[i].exam_seat);
//     }
//     qsort(candidates, N, sizeof(Candidate), compare);
//     scanf("%d", &M);
//     int queries[M];
//     for (int i = 0; i < M; i++) {
//         scanf("%d", &queries[i]);
//     }
//     for (int i = 0; i < M; i++) {
//         int left = 0, right = N - 1;
//         while (left <= right) {
//             int mid = (left + right) / 2;
//             if (candidates[mid].practice_seat == queries[i]) {
//                 printf("%s %d\n", candidates[mid].id, candidates[mid].exam_seat);
//                 break;
//             } else if (candidates[mid].practice_seat < queries[i]) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//     }
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char id[17];
//     int practice_seat;
//     int exam_seat;
// } Candidate;

// int main() {
//     int N, M;
//     scanf("%d", &N);
//     Candidate candidates[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%s %d %d", candidates[i].id, &candidates[i].practice_seat, &candidates[i].exam_seat);
//     }
//     scanf("%d", &M);
//     int queries[M];
//     for (int i = 0; i < M; i++) {
//         scanf("%d", &queries[i]);
//     }
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             if (candidates[j].practice_seat == queries[i]) {
//                 printf("%s %d\n", candidates[j].id, candidates[j].exam_seat);
//                 break;
//             }
//         }
//     }
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define NUM_SINGERS 10
#define NUM_SCORES 6

// 定义结构体存储歌手信息
typedef struct {
    int id;       // 歌手编号
    double score; // 歌手的最终得分
} Singer;

// 比较函数，用于排序：按得分从高到低排序，如果得分相同则按编号排序
int compare(const void *a, const void *b) {
    Singer *singerA = (Singer *)a;
    Singer *singerB = (Singer *)b;
    
    // 首先按得分从高到低排序
    if (singerB->score > singerA->score) return 1;
    if (singerB->score < singerA->score) return -1;
    
    // 如果得分相同，按编号升序排序
    return singerA->id - singerB->id;
}

int main() {
    Singer singers[NUM_SINGERS]; // 存储所有歌手的信息
    
    // 读取每个歌手的打分，并计算得分
    for (int i = 0; i < NUM_SINGERS; i++) {
        singers[i].id = i + 1; // 歌手编号从1到10
        int total_score = 0;
        
        for (int j = 0; j < NUM_SCORES; j++) {
            int score;
            scanf("%d", &score); // 读取每位评委的分数
            total_score += score;
        }
        
        singers[i].score = total_score / (double)NUM_SCORES; // 计算平均得分
    }
    
    // 对歌手按照得分从高到低排序
    qsort(singers, NUM_SINGERS, sizeof(Singer), compare);
    
    // 输出结果
    for (int i = 0; i < NUM_SINGERS; i++) {
        printf("No.%d: %.2f\n", singers[i].id, singers[i].score);
    }
    
    return 0;
}