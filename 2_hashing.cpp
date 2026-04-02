// #include<iostream>
// using namespace std;

// // this takes more time...  time complexity is very high... that why use hashing..
// int f(int n,int arr[]){ 
//     int c=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]==n){
//             c++;
//         }
//     }
//     return c;
// }


// int main()
// {
//     int n=2;
//     int arr[]={1,2,1,2,2};
//     cout<<f(n,arr);
//     return 0;
// }


//  HASHING use fetching and pre-storing
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }

    return 0;
}