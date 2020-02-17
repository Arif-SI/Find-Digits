#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int N;
        scanf("%d", &N);
        int tmp = N,ck = 0;
        while(tmp!=0){
            int r = tmp % 10;
            if(r !=0 && N%r == 0)
                ck++;
            tmp/=10;
        }
       printf("%d\n", ck);
    }
    return 0;
}
