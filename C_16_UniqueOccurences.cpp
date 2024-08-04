#include<iostream>
using namespace std;

bool uniqueOccurrences(int arr[],int n) {
        
        int ans[1000];
        int k=0;
        for(int i=0;i<n;i++)
        {   int c = 1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j] && arr[i]!=0 && arr[j]!=0)
                {
                     c++;
                     arr[j] = 0;
                }
            }
            if(arr[i]!=0)
            {
                ans[k] = c;
                k++;
            }
        }
        ans[k] = '\0';
        
        for(int i=0;ans[i]!='\0';i++)
        {
            cout<<ans[i]<<"\t";
        }
        cout<<endl;

        for(int l=0;ans[l]!='\0';l++)
        {
            for(int m=l+1;ans[m]!='\0';m++)
            {
                if(ans[l] == ans[m])
                {
                    return false;
                }
            }
        }
        return true;
    }

int  main()
{
    int arr[1000];
    int n;
    cout<<"Entre the size of the array: ";
    cin>>n;

    cout<<"Enter the elementx in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
bool answer = uniqueOccurrences( arr,n);
if(answer)
{
    cout<<"Unique no. of occurences.";
}
else
{
    cout<<"Not unique no. of occurences.";
}
        
}    