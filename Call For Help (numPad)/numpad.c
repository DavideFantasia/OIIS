/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// constraints
#define MAXN 1000000

// input data
int N;
char S[MAXN + 1];

int destinazione,numerodipassi=0,start=0,i;
char c;
int main() 
{
    //  uncomment the following lines if you want to read/write from files
     // freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);

    assert(1 == scanf("%s", S));
    N = strlen(S);

    // insert your code here
    int asseX[10]={0,3,3,3,2,2,2,1,1,1};
	int asseY[10]={1,0,1,2,0,1,2,0,1,2};
	
	for (i=0;i<N;i++)
	{
		c =S[i] ;
		destinazione = c - '0' ;
		numerodipassi +=abs(asseX[start]-asseX[destinazione])+abs(asseY[start]-asseY[destinazione]);
	
		start=destinazione;
		numerodipassi+=1;
	}
    printf("%d\n", numerodipassi); 
	 // change 42 with actual answer
    return 0;
}
