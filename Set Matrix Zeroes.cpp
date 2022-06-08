//Ques-Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.


void setZeros(vector<vector><int> &matrix)
{

//taking 2 vectors to store the rows(r) and columns(c) which contain element 0

vector<int> r;  
vector<int> c;

for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
        if(matrix[i][j]==0){
        r.push_back(i);
        c.push_back(j);  
        }  
    }
}

//all elements of a row containg zero is assigned to 0
for(auto a:r){
        int i=a;
        for(int j=0;j<matrix[i].size();j++)
                matrix[i][j]=0;
}

//all elements of a column containg zero is assigned to 0
for(auto b:c){
    for(int i=0;i<matrix.size();i++){
                int j=b;
                matrix[i][j]=0;
        }
   }
}