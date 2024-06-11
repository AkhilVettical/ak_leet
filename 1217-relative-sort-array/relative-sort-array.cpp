class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) { 
        unordered_map<int,int> umap;
        vector<int> res(arr1.size());
        for(int i=0; i<arr1.size(); i++){
            umap[arr1[i]]++;
        }
        int j=0;
        for(int i=0; i<arr2.size(); i++){
            while(umap[arr2[i]]>0){
                res[j++] = arr2[i];
                --umap[arr2[i]]; 
            }
        }
        int st = j;
        for(int i=0; i<arr1.size(); i++){
            if(umap[arr1[i]]>0){
                res[j++] = arr1[i];
                --umap[arr1[i]];
            }
            if(j == arr1.size())break;
        }
        sort(res.begin()+st,res.end());
        return res;

    }
};