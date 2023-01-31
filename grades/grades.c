/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 1000000

// input data
int N, i;
int G[MAXN];

int main() 
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &G[i]));
	
    // insert your code here
    
    int j=0;
    int sentinel=0;
    int cont=0;
    for(i=0; i<N; i++)
    {
    	if(G[i]<6)
    	{
    		//indice=i;
    		for(j=N-1; j>=i; j--)
    		{
    			if(G[j]>=6)
    			{
    				cont=(j+1)-i;
    				sentinel++;
    				break;
				}
			}
		}
		if(sentinel>0)
		break;	
	}
	
    if(sentinel==0)
		cont=-1;
		
    printf("%d\n", cont); // print the result
    return 0;
}
