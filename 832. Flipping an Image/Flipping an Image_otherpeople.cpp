#include<bits/stdc++.h>
using namespace std;
public int[][] FlipAndInvertImage(int[][] A) {
        
        for(int i = 0; i < A.Length; i++)
        {          
            for(int j = 0, k = A[i].Length - 1; j <= k; j++, k--)
            {
               int temp  =  A[i][k];
               A[i][k] = A[i][j] == 1 ? 0 : 1;
               A[i][j] = temp == 1 ? 0 : 1; 
            }
        }

        return A;
    } 
