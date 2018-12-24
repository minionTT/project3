class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            // Your Code
            int i,j;
            int firstI,firstJ,maxI,maxJ;
            int M = 0;
            bool findFirst = false,findMax = false;
            for(i=0; i<5; i++){
                for(j=0; j<6; j++){
                    if(color[i][j] == inputColor){
                        if(Record[i][j] > M){
                            maxI = i;
                            maxJ = j;
                            M = Record[i][j];
                            findMax = true;
                        }
                    }
                    if(color[i][j] == White){
                        if(!findFirst){
                            firstI = i;
                            firstJ = j;
                            findFirst = true;
                        }
                    }
                }
            }
            if(findMax){
                x = maxI;
                y = maxJ;
            }else{
                x = firstI;
                y = firstJ;
            }
        }
        // Any Code You Want to Add
        int getX(){
            // Your Code
            return x;
        }
        int getY(){
            // Your Code
            return y;
        }
    private:
        int x;
        int y;
    };
