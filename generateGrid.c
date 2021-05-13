#include "solver.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void presetGrid(int grid[N][N]){
  for(int i=0; i<N; ++i){
    for(int j=0; j<N; ++j){
      grid[i][j] = 0;
    }
  }
}

void generate(int grid[N][N]){
  
  
  //srand(time(NULL));
  presetGrid(grid);
  for(int i=0; i<N; ++i)
  {

    for(int j=0;j<N; ++j)
    {

      int c = rand()%((9+1)-1) + 1;  

      if( isSafe(grid, i, j, c) != 0)
      {
        grid[i][j] = c;
      };


    }
  }
}
