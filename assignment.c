#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int solve(int t_rows, int t_col, int** tree) {


}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    int** tree = malloc(n-1 * sizeof(int*));

    for (int t_row_itr = 0; t_row_itr < n-1; t_row_itr++) {
        *(tree + t_row_itr) = malloc(2 * (sizeof(int)));

        char** tree_item_temp = split_string(readline());

        for (int t_col_itr = 0; t_col_itr < 2; t_col_itr++) {
            char* t_item_endptr;
            char* tree_item_str = *(tree_item_temp + t_col_itr);
            int tree_item = strtol(tree_item_str, &t_item_endptr, 10);

            if (t_item_endptr == tree_item_str || *t_item_endptr != '\0') { exit(EXIT_FAILURE); }

            *(*(tree + t_row_itr) + t_col_itr) = tree_item;
        }
    }

    int t_rows = n-1;
    int t_col = 2;

    int result = solve(t_rows, t_col, tree);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t all_len = 1024;
    size_t d_len = 0;
    char* data = malloc(all_len);

    while (true) {
        char* cur = data + d_len;
        char* line = fgets(cur, all_len - d_len, stdin);

        if (!line) { break; }

        d_len += strlen(cur);

        if (d_len < all_len - 1 || data[d_len - 1] == '\n') { break; }

        size_t new_length = all_len << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        all_len = new_length;
    }

    if (data[d_len - 1] == '\n') {
        data[d_len - 1] = '\0';
    }

    data = realloc(data, d_len);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

