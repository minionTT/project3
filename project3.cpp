class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            // Your Code
            int i,j;
            int firstI,firstJ,maxI,maxJ;
            int M = 0;
            bool findFirst = false,findMax = false;
            int num = 0;
            Color cptColor;

            if(inputColor==Blue){
                cptColor = Red;
            }else{
                cptColor = Blue;
            }

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
                            if(i>0 && i<4 && j>0 && j<5){
                                if( ( ( (Max[i-1][j]-Record[i-1][j]) >= (Max[i][j]-Record[i][j]) ) || color[i-1][j]==Black) 
                                && ( ( (Max[i+1][j]-Record[i+1][j]) >= (Max[i][j]-Record[i][j]) ) || color[i+1][j]==Black)
                                && ( ( (Max[i][j-1]-Record[i][j-1]) >= (Max[i][j]-Record[i][j]) ) || color[i][j-1]==Black)
                                && ( ( (Max[i][j+1]-Record[i][j+1]) >= (Max[i][j]-Record[i][j]) ) || color[i][j+1]==Black)
                                && (color[i-1][j]==cptColor || color[i+1][j]==cptColor || color[i][j-1]==cptColor || color[i][j+1]==cptColor)){
                                    maxI = i;
                                    maxJ = j;
                                    M = Record[i][j];
                                }
                            }
                            
                        }
                    }
                    if(color[i][j] == White){
                        if(!findFirst){
                            firstI = i;
                            firstJ = j;
                            findFirst = true;
                        }else{
                            if(i>0 && i<4 && j>0 && j<5){
                                if(color[i-1][j]!=cptColor && color[i+1][j]!=cptColor && color[i][j-1]!=cptColor && color[i][j+1]!=cptColor){
                                    firstI = i;
                                    firstJ = j;
                                }
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


