// #include <stdio.h>

// int determine_winner(int a, int b)
// {
//     int win_matrix[5][5] = {
//         {0, -1, 1, 1, -1},  
//         {1, 0, -1, -1, 1},  
//         {-1, 1, 0, 1, -1}, 
//         {-1, 1, -1, 0, 1}, 
//         {1, -1, 1, -1, 0}  
//     };
//     return win_matrix[a][b];
// }

// int main()
// {
//     int N, NA, NB;
//     scanf("%d %d %d", &N, &NA, &NB);

//     int A_pattern[NA], B_pattern[NB];
    
//     for(int i = 0; i < NA; i++)
//     {
//         scanf("%d", &A_pattern[i]);
//     }

//     for(int i = 0; i < NB; i++)
//     {
//         scanf("%d", &B_pattern[i]);
//     }

//     int score_A = 0, score_B = 0;

//     for (int i = 0; i < N; i++)
//     {
//         int A_move = A_pattern[i % NA];  
//         int B_move = B_pattern[i % NB];  
//         int result = determine_winner(A_move, B_move);
        
//         if (result == 1)
//         {
//             score_A++; 
//         }
//         else if(result == -1)
//         {
//             score_B++; 
//         }
//     }

//     printf("%d %d\n", score_A, score_B);
//     return 0;
// }

#include <stdio.h>

#define N 10

int dx[4] = {-1, 0, 1, 0}; 
int dy[4] = {0, 1, 0, -1}; 

int valid(int x, int y, char map[N][N]) {
    return x >= 0 && x < N && y >= 0 && y < N && map[x][y] != '*';
}

int main() {
    char map[N][N];
    int fx, fy, cx, cy;
    int fdir = 0, cdir = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
        for (int j = 0; j < N; j++) {
            if (map[i][j] == 'F') {
                fx = i;
                fy = j;
            } else if (map[i][j] == 'C') {
                cx = i;
                cy = j;
            }
        }
    }

    int time = 0;
    while (time < 10000)
    {  
        time++;
        if (fx == cx && fy == cy) {
            printf("%d\n", time);
            return 0;
        }

        int next_cx = cx + dx[cdir];
        int next_cy = cy + dy[cdir];
        if (valid(next_cx, next_cy, map)) {
            cx = next_cx;
            cy = next_cy;
        }
        else
        {
            cdir = (cdir + 1) % 4; 


        int next_fx = fx + dx[fdir];
        int next_fy = fy + dy[fdir];
        if (valid(next_fx, next_fy, map))
        {
            fx = next_fx;
            fy = next_fy;
        }
        else
        {
            fdir = (fdir + 1) % 4;  
        }
    }

    printf("0\n");
    return 0;
}