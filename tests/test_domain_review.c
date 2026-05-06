#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {63, 49, 32, 54};
    assert(domain_review_score(item) == 133);
    assert(strcmp(domain_review_lane(item), "watch") == 0);
    return 0;
}
