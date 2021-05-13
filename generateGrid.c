#include "solver.h"
#include <time.h>
#include <stdlib.h>



void random_place(int place[N]){
  
  srand(time(NULL));
  for(int i; i< N; ++i)
  {
    if(rand()%2 == 1)
    {
      place[i]= 1;
    }
  }
}

void generate(int grid[N][N]){

  
  srand(time(NULL));
  for(int i=0; i<N; ++i)
  {
    int place[N]; 
    random_place(place);

    for(int j=0;j<N; ++j)
    {
      if(place[j]==1){
        int c = rand()%((9+1)-1) + 1;  
        grid[i][j] = c;
      }

    }
  }
}
