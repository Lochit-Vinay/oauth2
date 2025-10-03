#include <bits/stdc++.h>
using namespace std;

int recb(vector<int> &vec,int low,int high,int target){
    if(low>high) return -1; 
    int mid=low+(high-low)/2;

    if(vec[mid]==target)  return mid; 
    else if (vec[mid] > target) return recb(vec,low,mid-1,target); 
    else return recb(vec,mid+1,high,target); 
}

int main(){
    cout<<"Enter number of elements: ";
    int n; cin>>n;

    vector<int> vec(n);
    
    for (int i=0;i <n;i++){
        cout<<"Enter "<<i<<" element"<<endl;
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());
    cout << "Enter the element to search: ";
    int target; cin>>target;

    int result = recb(vec,0,n-1,target);

    
    if(result!=-1)cout<<"Element found at index: "<<result<<endl;
    else cout<<"Element not found"<<endl;


}
