/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 1000000

// input data
int N, K, i;
int somma=0, max=0;
int T[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &K));
    for (i = 0; i < N; i++)
        assert(1 == scanf("%d", &T[i]));
    

    // insert your code here
	for(i=0;i<K;i++)
	{
		somma+=T[i];
	}
	max=somma;
	
	for(i=0;i<N-K;i++)
	{
		somma-=T[i];
		somma+=T[K+i];
		if(somma>max)
		max=somma;
	}

	
    printf("%d\n", max); // change 42 with actual answer
    return 0;
}
