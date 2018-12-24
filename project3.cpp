class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            // Your Code
            int i,j;
            int firstI,firstJ,maxI,maxJ;
            int M = 0;
            bool findFirst = false,findMax = false;
            int num = 0;
            for(i=0; i<5; i++){
                for(j=0; j<6; j++){
                    if(color[i][j] == inputColor){
                        num++;
                        if(Record[i][j] > M){
                            maxI = i;
                            maxJ = j;
                            M = Record[i][j];
                            findMax = true;
                        }else if(Record[i][j] == M){
                            if((i+j)%3==0){
                                maxI = i;
                                maxJ = j;
                                M = Record[i][j];
                            }
                        }
                    }
                    if(color[i][j] == White){
                        if(!findFirst){
                            firstI = i;
                            firstJ = j;
                            findFirst = true;
                        }else{
                            if((i+j)%3==1){
                                firstI = i;
                                firstJ = j;
                            }
                        }
                    }
                }
            }
            if(M == 3 || M == 2){
                x = maxI;
                y = maxJ;
            }else if(findMax){
                if(!findFirst){
                    x = maxI;
                    y = maxJ;
                }else if(num%2==0){
                    x = maxI;
                    y = maxJ;
                }else{
                    x = firstI;
                    y = firstJ;
                }   
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
