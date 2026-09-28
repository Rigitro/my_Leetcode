bool checkXMatrix(int** grid, int gridSize, int* gridColSize) {

    for(int r=0;r<gridSize;r++){
        for(int c=0;c<gridSize;c++){
            if(r==c || (r+c)==gridSize-1){
                if(grid[r][c] == 0){
                    return false;
                }
            }else{
                    if (grid[r][c] !=0){
                        return false;
                    }
                }
        }
    }
    return true;

}