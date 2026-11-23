#include <stdio.h>
 
/* ポインタ input_ptr が指す正の整数の2進ビット列を反転し、output_ptr に格納する */
void reverse_bits(const int *input_ptr, int *output_ptr) {
    int remaining = *input_ptr;
    int reversed = 0;
 
    while (remaining > 0) {
        reversed = (reversed << 1) | (remaining & 1);
        remaining >>= 1;
    }
 
    *output_ptr = reversed;
}
 
int main(void) {
    int input_value;
    int reversed_value;
 
    /* 0以下の入力は仕様に従い NG を出力して終了する */
    if (scanf("%d", &input_value) != 1 || input_value <= 0) {
        printf("NG");
        return 0;
    }
 
    reverse_bits(&input_value, &reversed_value);
    printf("%d,%d", input_value, reversed_value);
    return 0;
}