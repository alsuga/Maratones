#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

class grafixMask {
  public:
    grafixMask(){
      memset(mat,0,sizeof mat);
    }
    vector<int> sortedAreas(vector<string> rectangles){
    }
  private:
    int mat[400][600];
    int floodFill(int x, int y){
      if(mat[x][y] < 0) return 0;
      int cont = 0;
      stack<pair<int,int> >st;
      st.push(make_pair(x,y));
      while(!st.empty()){
        x = st.top().first;
        y = st.top().second;
        st.pop();
        mat[x][y] = -1;
        cont++;
        if(x > 0) if(mat[x-1][y] )
      }
    }
    void fillRectangle(string a){
      int x1,x2,y1,y2;
      sscanf(a.c_str,"%i %i %i %i",&x1,&y1,&x2,&y2);
      for (int i = x1; i <= x2 ; i++){
        for (int j = y1; j <= y2; j++) {
          mat[i][j] = -1;
        }
      }
    }
};


