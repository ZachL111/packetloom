#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {76, 92, 23, 5, 9};
    assert(score_signal(signal_case_1) == 194);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {68, 102, 22, 24, 4};
    assert(score_signal(signal_case_2) == 28);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {96, 88, 8, 16, 6};
    assert(score_signal(signal_case_3) == 180);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
