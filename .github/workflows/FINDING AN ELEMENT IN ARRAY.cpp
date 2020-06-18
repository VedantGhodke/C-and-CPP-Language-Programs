#include<simplecpp>
main_program
{
    int n=10,a[n];
    for(int i = 0; i < n; i++)
    cout<<"Enter the desired elements in an array."<<endl;

    cin >> a[i];
    int seen[n];
    for(int i = 0; i < n; i++)
    seen[i] = 0;
    for(int i = 0; i < n; i++)

        {
            if(seen[i] == 0)
             {
                int count = 0;
                for(int j = i; j < n; j++)
                if(a[j] == a[i])
                {
                    count=1;
                    seen[j]=1;
                }
               cout<<a[i]<<"occurs"<<count<<"times in the array."< endl;
             }
        }
}
