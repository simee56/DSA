//Find missing and repeated number - Time complexity = o(n) and space complexity o(n)
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size = \n";
    cin>>n;

    int arr[100];

    cout<<"Enter elements in array = ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int new_arr[100] = {0};

    for(int i = 0; i<n; i++)
    new_arr[arr[i]-1]++;

    //Missing element
    for(int i = 0; i<n; i++)
    {
        if(new_arr[i] == 0)
        {
            cout<<"Missing element is = "<<i+1;
            break;            
        }
    }

    //Repeated elemets
    for(int i = 0; i<n; i++)
    {
        if(new_arr[i] == 2)
        {
            cout<<"\nRepeated element is "<<i+1;
            break;
        }
    }
}



//Second method - sort and then find
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter elements : ";
    for(int i = 0; i < n; i++)
    cin>>v[i];

    sort(v.begin(), v.end());

    cout<<"Sorted elements : ";
    for(int i = 0; i < n; i++)
    cout<<v[i]<<" ";

}





//third method - space complexity - o(1) and tim complexity - o(n)

#include<iostream>
#include<vector>
using namespace std;

void DecreaseElemnts(vector<int>v, int n)
{
    for(int i = 0; i < n; i++)
    v[i]--;

    //find modulo
    for(int i = 0; i < n; i++)
    v[v[i] % n] += n;

    //find missing
    for(int i = 0; i < n; i++)
    {
        if(v[i] / n == 0 )
        {
            cout<<"Missing number is : "<<i+1;
            break;
        }
    }

    //find repeated
    for(int i = 0;  i < n; i++)
    {
        if(v[i] / n ==2)
        {
            cout<<"\nRepeated number is : "<<i+1;
            break;
        }
    }
}

int main()
{
    int n;
    cout<<"enter the range :";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    DecreaseElemnts(arr, n);
}



//find the occurance of a number
#include<iostream>
#include<vector>
using namespace std;

void FindOccurance(vector<int>v, int N)
{
    //Decrease by 1
    for(int i = 0; i < N; i++)
    v[i]--;

    //Find modulo and add N at the index
    for(int i = 0; i < N; i++)
    v[v[i] % N] += N;

    //Find Occurance
    for(int i = 0; i < N; i++)
    {
        cout<<"Occurance of "<<i+1<<" is "<< v[i] / N<<"\n";

    }
}


int main()
{
   int n;
    cout<<"enter the range :";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];
   
    FindOccurance(arr, n);
}