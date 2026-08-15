#include "dashboard.h"

double calculateCompletionRate(int completed, int total) {
    if (total <= 0) {
        return 0.0;
    }

    return (static_cast<double>(completed) / total) * 100.0;
}