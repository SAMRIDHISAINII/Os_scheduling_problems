#include<stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int b[n+1], o[n], p[m];
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
        o[i] = -1;
    }
    b[n] = 0;
    for (int i = 0; i < m; i++)
        scanf("%d", &p[i]);
    for (int i = 0; i < m; i++){
        int max = n;
        for (int j = 0; j < n; j++){
            if (b[j] > b[max] && b[j] >= p[i] && o[j] == -1)
                max = j;
        }
        if (o[max] == -1)
            o[max] = i;
    }
    for (int i = 0; i < n; i++)
        printf("Block %d:", i+1);
    for (int i = 0; i < m; i++)
        printf("File %d:", i+1);
    printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement\n");
    for (int i = 0; i < m; i++){
        printf("%d\t\t%d\t\t", i+1, p[i]);
        for (int j = 0; j < n; j++){
            if (o[j] == i){
                printf("%d\t\t%d\t\t%d\n", j+1, b[j], b[j]-p[i]);
                break;
            }
        }
    }
    return 0;
}

