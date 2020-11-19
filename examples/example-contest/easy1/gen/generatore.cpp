#include <cstdio>
#include <cstdlib>
#include <cassert>

int main(int argc, char** argv){
    assert(argc == 3);
    int N = atoi(argv[1]);    // N
    int S = atoi(argv[2]);    // Seed

    srand(S);

    printf("%d\n", N);
    for (int i=0; i<N; i++) {
        int x = rand() % 1000;
        if (rand() % 2) x = -x;
        printf("%d%c", x, "\n "[i+1<N]);
    }
}
