// #include<bits/stdc++.h>
// using namespace std;

//  void reversearray(int arr[],int start,int end)
//  {
//      if(start>=end) return;

//      int temp=arr[start];
//      arr[start]=arr[end];
//      arr[end]=temp;

//     reversearray(arr,start+1,end-1);

//  }

//  void printArray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";

//    cout << endl;
// }
// int main(){
//     int arr[]={1,2,4,6,7};
//     reversearray(arr,0,4);
//     printArray(arr,5);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// struct Pair
// {
//     int min;
//     int max;
// };
// struct Pair getreplace(int arr[], int n)
// {
//     struct Pair replace;

//     if (n == 1)
//     {
//         replace.max = arr[0];
//         replace.min = arr[0];
//         return replace;
//     }
//     if (arr[0] > arr[1])
//     {
//         replace.max = arr[0];
//         replace.min = arr[1];
//     }
//     else if (arr[1] > arr[0])
//     {
//         replace.max = arr[1];
//         replace.min = arr[0];
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (arr[i] > replace.max)
//         {
//             replace.max = arr[i];
//         }
//         else if (arr[i] < replace.min)
//         {
//             replace.min = arr[i];
//         }
//     }
//     return replace;
// }

// int main()
// {
    
//     int arr[]={3,345,678,1,34};int arr_size=5;
//     struct Pair minmax = getreplace(arr,arr_size);
//     cout<<minmax.min<<endl;
//     cout<<minmax.max<<endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"hello"<<endl;
return 0;
}