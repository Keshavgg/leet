class Solution {
public:
   
   char find(unordered_map<char,char>&parent,char i){

    if (i==parent[i])return i;

    return parent[i]=find(parent,parent[i]);
   }

   void uni(char i,char j,unordered_map<char,char>&parent)
   {
       int a=find(parent,i);
       int b=find(parent,j);
       parent[a]=b;
       return ;   

   }
    bool equationsPossible(vector<string>& equations) {
        unordered_map<char,char>parent;
    for(auto &j:equations)
        {
            parent[j[0]]=j[0];
            parent[j[3]]=j[3];

        }
        for(auto &j:equations)
        {
            if(j[1]=='='){
              uni(j[0],j[3],parent);
            }
        }
        for(auto &j:equations)
        {
            if(j[1]=='!' and find(parent,j[0])==find(parent,j[3])){
              return false;
            }
        }
        return true;
    }
};